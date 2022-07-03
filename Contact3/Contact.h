#ifndef __CONTACT_H__
#define __CONTACT_H__
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "vld.h"
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SZ 3
#define INC_SZ 2
#pragma warning(disable:6031)
enum _OP {
	_EXIT,
	_ADD,
	_DEL,
	_SEARCH,
	_MODIFY,
	_SORT,
	_PRINT
};
typedef struct _PeoInfo {
	char _name[MAX_NAME];
	int _age;
	char _sex[MAX_SEX];
	char _tele[MAX_TELE];
	char _addr[MAX_ADDR];
} PeoInfo;
typedef struct _Contact {
	PeoInfo* _data;
	size_t _sz;
	size_t _capacity;
} Contact;
void Menu();
void InitContact(Contact* pc);
void DestroyContact(Contact* pc);
void AddContact(Contact* pc);
void PrintContact(const Contact* pc);
void DelContact(Contact* pc);
void SearchContact(const Contact* pc);
void ModifyContact(Contact* pc);
void SortContact(Contact* pc);
#endif//!__CONTACT_H__