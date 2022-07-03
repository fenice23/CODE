#ifndef __SEQLIST_H__
#define __SEQLIST_H__
#include <stdio.h>
#include <vld.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
//顺序表本质就是数组,有效数据在数组中必须是连续的,C++中的顺序表是STL里的vector容器
//typedef int SLDataType;
//#define N 10
//struct _SeqList {//静态顺序表设计(固定大小)
//	SLDataType _a[N];
//	int _size;
//};
#define DEFAULTCAPACITY 4
#define INCTIMES 2
typedef int SLDataType;
typedef struct _SeqList {//动态顺序表设计(大小可变)
	SLDataType* _a;
	int _size;//有效数据的个数
	int _capacity;//容量
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