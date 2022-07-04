#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"
void test() {
	//SListNode* pList;
	//SListInit(&pList);
	////SListPopBack(&pList);
	//SListPushBack(&pList, 1);
	//SListPushBack(&pList, 2);
	//SListPushBack(&pList, 3);
	//SListPushBack(&pList, 4);
	//SListPrint(pList);
	//printf("%d\n", (int)SListSize(pList));
	//SListPopBack(&pList);
	//SListPopBack(&pList);
	//SListPopBack(&pList);
	//SListPopBack(&pList);
	////SListPopBack(&pList);
	//SListPrint(pList);
	//SListPushFront(&pList, 1);
	//SListPushFront(&pList, 2);
	//SListPushFront(&pList, 3);
	//SListPushFront(&pList, 4);
	//SListPrint(pList);
	//SListPopBack(&pList);
	//SListPrint(pList);
	//SListPopFront(&pList);
	//SListPrint(pList);
	//SListPopFront(&pList);
	//SListPrint(pList);
	//SListPopFront(&pList);
	//SListPrint(pList);
	//SListPopFront(&pList);
	//SListPrint(pList);
	//SListDestroy(&pList);
	//pList = NULL;

	SListNode* pList;
	SListInit(&pList);
	SListPushBack(&pList, 1);
	SListPushBack(&pList, 2);
	SListPushBack(&pList, 3);
	SListPushBack(&pList, 4);
	SListPrint(pList);
	SListNode* pFind = SListFind(pList, 4);
	if (pFind) {
		pFind->_data = 888;
		SListPrint(pList);
		SListInsert(pFind, 9);
		SListPrint(pList);
		SListErase(pFind);
		SListPrint(pList);
	}
	SListDestroy(&pList);
	pList = NULL;
}
int main() {
	test();
	return 0;
}