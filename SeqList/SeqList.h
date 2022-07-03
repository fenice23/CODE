#ifndef __SEQLIST_H__
#define __SEQLIST_H__
#include <stdio.h>
#include <vld.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
//˳����ʾ�������,��Ч�����������б�����������,C++�е�˳�����STL���vector����
//typedef int SLDataType;
//#define N 10
//struct _SeqList {//��̬˳������(�̶���С)
//	SLDataType _a[N];
//	int _size;
//};
#define DEFAULTCAPACITY 4
#define INCTIMES 2
typedef int SLDataType;
typedef struct _SeqList {//��̬˳������(��С�ɱ�)
	SLDataType* _a;
	int _size;//��Ч���ݵĸ���
	int _capacity;//����
} SL;
void SeqListInit(SL* ps);
void SeqListDestroy(SL* ps);
void SeqListPrint(SL* ps);
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPopFront(SL* ps);
void SeqListInsert(SL* ps, int pos, SLDataType x);
void SeqListErase(SL* ps, int pos);
int SeqListFind(SL* ps, SLDataType x);
void SeqListBubbleSort(SL* ps);
int SeqListBinaryFind(SL* ps, SLDataType x);
#endif//!__SEQLIST_H__