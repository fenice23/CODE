#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"
void Menu() {
	printf("************************************\n");
	printf("*****          Contact         *****\n");
	printf("*****   1.add         2.del    *****\n");
	printf("*****   3.search      4.modify *****\n");
	printf("*****   5.sort        6.print  *****\n");
	printf("*****          0.exit          *****\n");
	printf("************************************\n");
}
void InitContact(Contact* pc) {
	assert(pc != NULL);
	pc->_capacity = DEFAULT_SZ;
	pc->_sz = 0;
	pc->_data = (PeoInfo*)malloc(pc->_capacity * sizeof(PeoInfo));
	if (NULL == pc->_data) {
		perror("InitContact pc->_data malloc");
		return;
	}
}
void DestroyContact(Contact* pc) {
	assert(pc != NULL);
	if (pc->_data) {
		free(pc->_data);
	}
	pc->_data = NULL;
	pc->_capacity = 0;
	pc->_sz = 0;
	printf("销毁通讯录成功!\n");
}
static PeoInfo* IncCapacity(Contact* pc) {
	assert(pc != NULL);
	pc->_capacity += INC_SZ;
	PeoInfo* p = (PeoInfo*)realloc(pc->_data, pc->_capacity * sizeof(PeoInfo));
	if (NULL == p) {
		perror("IncCapacity p realloc");
		free(pc->_data);
		pc->_data = NULL;
		exit(-1);
	}
	return pc->_data = p;
}
void AddContact(Contact* pc) {
	assert(pc != NULL);
	if (pc->_sz == pc->_capacity) {
		pc->_data = IncCapacity(pc);
		printf("增容成功!\n");
	}
	printf("开始添加联系人信息!\n");
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
	printf("添加联系人信息成功!\n");
}
void PrintContact(const Contact* pc) {
	assert(pc != NULL);
	if (pc->_sz) {
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
		size_t i = 0;
		for (i = 0; i < pc->_sz; i++) {
			printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", pc->_data[i]._name, pc->_data[i]._age, pc->_data[i]._sex, pc->_data[i]._tele, pc->_data[i]._addr);
		}
	}
	else {
		printf("通讯录已空,无需打印!\n");
	}
}
static int FindByNameInContact(const Contact* pc, const char* pname) {
	assert(pc != NULL && pname != NULL);
	size_t i = 0;
	for (i = 0; i < pc->_sz; i++) {
		if (!strcmp(pname, pc->_data[i]._name)) {
			return i;
		}
	}
	return -1;
}
void DelContact(Contact* pc) {
	assert(pc != NULL);
	if (!pc->_sz) {
		printf("通讯录已空,无法删除联系人!\n");
		return;
	}
	char name[MAX_NAME] = "";
	printf("请输入您要删除的联系人的姓名:>");
	scanf("%s", name);
	int pos = FindByNameInContact(pc, name);
	if (-1 == pos) {
		printf("没有在通讯录中找到您要删除的联系人!\n");
		return;
	}
	size_t i = 0;
	for (i = pos; i < pc->_sz - 1; i++) {
		pc->_data[i] = pc->_data[i + 1];
	}
	pc->_sz--;
	printf("删除联系人成功!\n");
}
void SearchContact(const Contact* pc) {
	assert(pc != NULL);
	if (!pc->_sz) {
		printf("通讯录已空,无法查找联系人!\n");
		return;
	}
	char name[MAX_NAME] = "";
	printf("请输入您要查找的联系人姓名:>");
	scanf("%s", name);
	int pos = FindByNameInContact(pc, name);
	if (-1 == pos) {
		printf("没有在通讯录中找到您要查找的联系人!\n");
		return;
	}
	printf("已找到您要的联系人信息如下!\n");
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
	printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", pc->_data[pos]._name, pc->_data[pos]._age, pc->_data[pos]._sex, pc->_data[pos]._tele, pc->_data[pos]._addr);
	printf("查找联系人成功!\n");
}
void ModifyContact(Contact* pc) {
	assert(pc != NULL);
	if (!pc->_sz) {
		printf("通讯录已空,无法进行修改!\n");
		return;
	}
	char name[MAX_NAME] = "";
	printf("请输入您要修改的联系人的姓名:>");
	scanf("%s", name);
	int pos = FindByNameInContact(pc, name);
	if (-1 == pos) {
		printf("没有在通讯录中找到您要修改了联系人!\n");
		return;
	}
	printf("开始修改联系人信息!\n");
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
	printf("修改联系人信息成功!\n");
}
static void MySwap(int* pa, int* pb) {
	assert(pa != NULL && pb != NULL);
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
void SortContact(Contact* pc) {
	assert(pc != NULL);
	if (pc->_sz <= 1) {
		return;
	}
	bool flag = true;
	size_t i = 0;
	size_t j = 0;
	for (i = 0; i < pc->_sz - 1; i++) {
		flag = true;
		for (j = 0; j < pc->_sz - 1 - i; j++) {
			if (pc->_data[j]._age > pc->_data[j + 1]._age) {
				flag = false;
				MySwap(&pc->_data[j]._age, &pc->_data[j + 1]._age);
			}
		}
		if (flag) {
			break;
		}
	}
	printf("通讯录排序完成!\n");
}