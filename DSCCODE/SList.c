#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"
void SListInit(SListNode** ppList) {
	assert(ppList != NULL);
	*ppList = NULL;
}
void SListDestroy(SListNode** ppList) {
	assert(ppList != NULL);
	SListNode* cur = *ppList;
	while (cur != NULL) {
		SListNode* p = cur;
		cur = cur->_next;
		free(p);
		p = NULL;
	}
	*ppList = NULL;
}
void SListPrint(SListNode* pList) {
	//assert(pList != NULL);//这里不用断言
	while (pList != NULL) {
		printf("%d->", pList->_data);
		pList = pList->_next;
	}
	printf("NULL\n");
}
size_t SListSize(SListNode* pList) {
	//assert(pList != NULL);//无需断言
	size_t sz = 0;
	while (pList != NULL) {
		sz++;
		pList = pList->_next;
	}
	return sz;
}
static SListNode* BuySListNode(SListDataType x) {
	SListNode* newNode = (SListNode*)malloc(1 * sizeof(SListNode));
	if (NULL == newNode) {
		perror("BuyNode newNode malloc");
		return NULL;
	}
	newNode->_data = x;
	newNode->_next = NULL;
	return newNode;
}
void SListPushBack(SListNode** ppList, SListDataType x) {
	assert(ppList != NULL);
	SListNode* cur = *ppList;
	SListNode* newNode = BuySListNode(x);
	if (*ppList == NULL) {
		*ppList = newNode;
	}
	else {
		while (cur->_next != NULL) {
			cur = cur->_next;
		}
		cur->_next = newNode;
	}
}
void SListPopBack(SListNode** ppList) {
	assert(ppList != NULL);
	if (*ppList == NULL) {
		printf("链表已空,无法进行尾删!\n");
		return;
	}
	if ((*ppList)->_next == NULL) {
		free(*ppList);
		*ppList = NULL;
		return;
	}
	SListNode* cur = *ppList;
	while (cur->_next->_next != NULL) {
		cur = cur->_next;
	}
	free(cur->_next);
	cur->_next = NULL;
}
void SListPushFront(SListNode** ppList, SListDataType x) {
	assert(ppList != NULL);
	SListNode* newNode = BuySListNode(x);
	if (*ppList == NULL) {
		*ppList = newNode;
	}
	else {
		newNode->_next = *ppList;
		*ppList = newNode;
	}
}
void SListPopFront(SListNode** ppList) {
	assert(ppList != NULL);
	if (*ppList == NULL) {
		printf("链表已空,无法进行头删!\n");
		return;
	}
	SListNode* p = (*ppList)->_next;
	free(*ppList);
	*ppList = p;
}
SListNode* SListFind(SListNode* pList, SListDataType x) {
	//assert(pList != NULL);
	while (pList != NULL) {
		if (pList->_data == x) {
			return pList;
		}
		pList = pList->_next;
	}
	return NULL;
}
void SListInsert(SListNode* pList, SListDataType x) {
	assert(pList != NULL);
	SListNode* newNode = BuySListNode(x);
	newNode->_next = pList->_next;
	pList->_next = newNode;
}
void SListErase(SListNode* pList) {
	assert(pList != NULL);
	if (pList->_next) {
		SListNode* p = pList->_next;
		pList->_next = p->_next;
		free(p);
		p = NULL;
	}
}