#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
void test() {
	SL s;
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPushBack(&s, 6);
	SeqListPushBack(&s, 7);
	SeqListPushBack(&s, 8);
	SeqListPushBack(&s, 9);
	SeqListPrint(&s);
	SeqListPopBack(&s);
	SeqListPopBack(&s);
	SeqListPopBack(&s);
	SeqListPrint(&s);
	SeqListPushFront(&s, -1);
	SeqListPushFront(&s, -2);
	SeqListPushFront(&s, -3);
	SeqListPrint(&s);
	SeqListPopFront(&s);
	SeqListPopFront(&s);
	SeqListPopFront(&s);
	SeqListPrint(&s);
	SeqListPushBack(&s, -100);
	SeqListPushBack(&s, -200);
	SeqListPrint(&s);
	SeqListBubbleSort(&s);
	SeqListPrint(&s);
	//int pos = SeqListFind(&s, 5);
	int pos = SeqListBinaryFind(&s, 5);
	if (-1 == pos) {
		printf("find none!\n");
	}
	else {
		printf("找着了,下标是%d\n", pos);
		s._a[pos] = 666;
		SeqListPrint(&s);
	}
	SeqListDestroy(&s);
}
int main() {
	test();
	return 0;
}