#ifndef __SLIST_H__
#define __SLIST_H__
#include <stdio.h>
#include <stdlib.h>
#include <vld.h>
#include <assert.h>
#include <stdbool.h>
typedef int SListDataType;
typedef struct _SListNode {
	SListDataType _data;
	struct _SListNode* _next;
} SListNode;
//typedef struct SList {
//	SListNode* _head;
//	SListNode* _tail;
//	size_t len;
//} SList;
void SListInit(SListNode** ppList);
void SListDestroy(SListNode** ppList);
void SListPushBack(SListNode** ppList, SListDataType x);
void SListPopBack(SListNode** ppList);
void SListPushFront(SListNode** ppList, SListDataType x);
void SListPopFront(SListNode** ppList);
void SListPrint(SListNode* pList);
size_t SListSize(SListNode* pList);
SListNode* SListFind(SListNode* pList, SListDataType x);
void SListInsert(SListNode* pList, SListDataType x);//��Ŀ��ڵ�������
void SListErase(SListNode* pList);//ɾ��Ŀ��ڵ����Ľڵ�
#endif//!__SLIST_H__