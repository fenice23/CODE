#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"
void Menu() {
	printf("********************************\n");
	printf("****          Contact       ****\n");
	printf("****   1.add       2.del    ****\n");
	printf("****   3.search    4.modify ****\n");
	printf("****   5.sort      6.print  ****\n");
	printf("****          0.exit        ****\n");
	printf("********************************\n");
}
void InitContact(Contact* pc) {
	assert(pc != NULL);
	pc->_sz = 0;
	memset(pc->_data, 0, sizeof(pc->_data));
}
void AddContact(Contact* pc) {
	assert(pc != NULL);
	if (pc->_sz == MAX) {
		printf("通讯录已满,添加联系人失败!\n");
		return;
	}
	printf("请输入姓名:>");
	scanf("%s", pc->_data[pc->_sz]._name);

	printf("请输入年龄:>");
	scanf("%d", &pc->_data[pc->_sz]._age);

	printf("请输入性别:>");
	scanf("%s", pc->_data[pc->_sz]._sex);

	printf("请输入电话:>");
	scanf("%s", pc->_data[pc->_sz]._tele);

	printf("请输入地址:>");
	scanf("%s", pc->_data[pc->_sz]._addr);
	pc->_sz++;
	printf("添加成功!\n");
}
void PrintContact(const Contact* pc) {
	assert(pc != NULL);
	if (pc->_sz == 0) {
		printf("通讯录已空!\n");
		return;
	}
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
	size_t i = 0;
	for (i = 0; i < pc->_sz; i++) {
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", pc->_data[i]._name, pc->_data[i]._age
		, pc->_data[i]._sex, pc->_data[i]._tele, pc->_data[i]._addr);
	}
}
static int FindByNameInContact(const Contact* pc, const char* pname) {
	assert(pc != NULL && pname != NULL);
	size_t i = 0;
	for (i = 0; i < pc->_sz; i++) {
		if (!strcmp(pc->_data[i]._name, pname)) {
			return i;
		}
	}
	return -1;
}
void DelContact(Contact* pc) {
	assert(pc != NULL);
	char name[MAX_NAME] = "";
	if (pc->_sz == 0) {
		printf("通讯录已空,删除数据失败!\n");
		return;
	}
	printf("请输入您要删除联系人的姓名:>");
	scanf("%s", name);
	int pos = FindByNameInContact(pc, name);
	if (-1 == pos) {
		printf("没有在通讯录中找到您要删除的联系人!\n");
		return;
	}
	size_t i = 0;
	for (i = pos; i < pc->_sz - 1; i++) {
		pc->_data[i] = pc->_data[i + 1];//结构体可以直接赋值
	}
	pc->_sz--;
	printf("删除成功!\n");
}
void SearchContact(const Contact* pc) {
	assert(pc != NULL);
	char name[MAX_NAME] = "";
	printf("请输入您要查找的联系人姓名:>");
	scanf("%s", name);
	int pos = FindByNameInContact(pc, name);
	if (-1 == pos) {
		printf("没有在通讯录中找到您要查找的联系人!\n");
		return;
	}
	printf("找到了您要查找的联系人!\n");
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
	printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", pc->_data[pos]._name, pc->_data[pos]._age, pc->_data[pos]._sex, pc->_data[pos]._tele, pc->_data[pos]._addr);
}
void ModifyContact(Contact* pc) {
	assert(pc != NULL);
	char name[MAX_NAME] = "";
	printf("请输入您要修改的联系人姓名:>");
	scanf("%s", name);
	int pos = FindByNameInContact(pc, name);
	if (-1 == pos) {
		printf("您要修改的联系人不在通讯录中!\n");
		return;
	}
	printf("请输入姓名:>");
	scanf("%s", pc->_data[pos]._name);

	printf("请输入年龄:>");
	scanf("%d", &pc->_data[pos]._age);

	printf("请输入性别:>");
	scanf("%s", pc->_data[pos]._sex);

	printf("请输入电话:>");
	scanf("%s", pc->_data[pos]._tele);

	printf("请输入地址:>");
	scanf("%s", pc->_data[pos]._addr);
	printf("修改成功!\n");
}
void SortContact(Contact* pc) {//按照年龄排升序
	assert(pc != NULL);
	size_t i = 0;
	size_t j = 0;
	bool flag = true;
	for (i = 0; i < pc->_sz - 1; i++) {
		flag = true;
		for (j = 0; j < pc->_sz - 1 - i; j++) {
			if (pc->_data[j]._age > pc->_data[j + 1]._age) {
				int tmp = pc->_data[j]._age;
				pc->_data[j]._age = pc->_data[j + 1]._age;
				pc->_data[j + 1]._age = tmp;
				flag = false;
			}
		}
		if (flag) {
			break;
		}
	}
	printf("通讯录排序完成!\n");
}