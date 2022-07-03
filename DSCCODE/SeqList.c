#define _CRT_SECURE_NO_WARNINGS 1
#include "seqList.h"
void SeqListInit(SL* ps) {
	assert(ps != NULL);
	ps->_capacity = DEFAULTCAPACITY;
	ps->_size = 0;
	ps->_a = (SLDataType*)malloc(ps->_capacity * sizeof(SLDataType));
	if (NULL == ps->_a) {
		perror("SeqListInit ps->_a malloc");
		return;
	}
}
void SeqListDestroy(SL* ps) {
	assert(ps != NULL);
	if (ps->_a) {
		free(ps->_a);
		ps->_a = NULL;
	}
	ps->_size = 0;
	ps->_capacity = 0;
}
void SeqListPrint(SL* ps) {
	assert(ps != NULL);
	for (int i = 0; i < ps->_size; i++) {
		printf("%d ", ps->_a[i]);
	}
	printf("\n");
}
static bool IsFull(SL* ps) {
	assert(ps != NULL);
	return ps->_size == ps->_capacity;
}
static bool IsEmpty(SL* ps) {
	assert(ps != NULL);
	return ps->_size == 0;
}
static void IncCapacity(SL* ps) {
	assert(ps != NULL);
	ps->_capacity *= INCTIMES;
	SLDataType* p = (SLDataType*)realloc(ps->_a, ps->_capacity * sizeof(SLDataType));
	if (NULL == p) {
		perror("IncCapacity p realloc");
		free(ps->_a);
		ps->_a = NULL;
		return;
	}
	ps->_a = p;
}
void SeqListPushBack(SL* ps, SLDataType x) {
	assert(ps != NULL);
	if (IsFull(ps)) {
		IncCapacity(ps);
	}
	ps->_a[ps->_size] = x;
	ps->_size++;
	//SeqListInsert(ps, ps->_size, x);
}
void SeqListPopBack(SL* ps) {
	assert(ps != NULL);
	if (IsEmpty(ps)) {
		printf("顺序表已空,无法尾删!\n");
		return;
	}
	//ps->_a[ps->_size - 1] = 0;
	ps->_size--;
	//SeqListErase(ps, ps->_size - 1);
}
void SeqListPushFront(SL* ps, SLDataType x) {
	assert(ps != NULL);
	if (IsFull(ps)) {
		IncCapacity(ps);
	}
	for (int i = ps->_size; i > 0; i--) {
		ps->_a[i] = ps->_a[i - 1];
	}
	ps->_a[0] = x;
	ps->_size++;
	//SeqListInsert(ps, 0, x);
}
void SeqListPopFront(SL* ps) {
	assert(ps != NULL);
	if (IsEmpty(ps)) {
		printf("顺序表已空,无法头删\n");
		return;
	}
	for (int i = 0; i < ps->_size - 1; i++) {
		ps->_a[i] = ps->_a[i + 1];
	}
	ps->_size--;
	//SeqListErase(ps, 0);
}
void SeqListInsert(SL* ps, int pos, SLDataType x) {
	assert(ps != NULL);
	if (pos > ps->_size || pos < 0) {
		printf("插入的位置非法,插入失败!\n");
		return;
	}
	if (IsFull(ps)) {
		IncCapacity(ps);
	}
	for (int i = ps->_size; i > pos; i--) {
		ps->_a[i] = ps->_a[i - 1];
	}
	ps->_a[pos] = x;
	ps->_size++;
}
void SeqListErase(SL* ps, int pos) {
	assert(ps != NULL);
	if (pos > ps->_size - 1 || pos < 0) {
		printf("删除的位置非法,删除失败!\n");
	}
	if (IsEmpty(ps)) {
		printf("顺序表已空,无法删除\n");
		return;
	}
	for (int i = pos; i < ps->_size - 1; i++) {
		ps->_a[i] = ps->_a[i + 1];
	}
	ps->_size--;
}
int SeqListFind(SL* ps, SLDataType x) {
	assert(ps != NULL);
	for (int i = 0; i < ps->_size; i++) {
		if (ps->_a[i] == x) {
			return i;
		}
	}
	return -1;
}
static void MySwap(SLDataType* p1, SLDataType* p2) {
	assert(p1 != NULL && p2 != NULL);
	SLDataType t = *p1;
	*p1 = *p2;
	*p2 = t;
}
void SeqListBubbleSort(SL* ps) {
	assert(ps != NULL);
	bool flag = true;
	for (int i = 0; i < ps->_size - 1; i++) {
		flag = true;
		for (int j = 0; j < ps->_size - 1 - i; j++) {
			if (ps->_a[j] > ps->_a[j + 1]) {//升序
				flag = false;
				MySwap(ps->_a + j, ps->_a + j + 1);
			}
		}
		if (flag) {
			break;
		}
	}
}
int SeqListBinaryFind(SL* ps, SLDataType x) {
	assert(ps != NULL);
	int l = 0;
	int r = ps->_size;
	int m = 0;
	while (l < r) {
		m = (l & r) + ((l ^ r) >> 1);
		if (ps->_a[m] > x) {
			r = m;
		}
		else if (ps->_a[m] < x) {
			l = m + 1;
		}
		else {
			return m;
		}
	}
	return -1;
}