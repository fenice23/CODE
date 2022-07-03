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
	printf("����ͨѶ¼�ɹ�!\n");
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
		printf("���ݳɹ�!\n");
	}
	printf("��ʼ�����ϵ����Ϣ!\n");
	printf("����������:>");
	scanf("%s", pc->_data[pc->_sz]._name);
	printf("����������:>");
	scanf("%d", &pc->_data[pc->_sz]._age);
	printf("�������Ա�:>");
	scanf("%s", pc->_data[pc->_sz]._sex);
	printf("������绰:>");
	scanf("%s", pc->_data[pc->_sz]._tele);
	printf("�������ַ:>");
	scanf("%s", pc->_data[pc->_sz]._addr);
	pc->_sz++;
	printf("�����ϵ����Ϣ�ɹ�!\n");
}
void PrintContact(const Contact* pc) {
	assert(pc != NULL);
	if (pc->_sz) {
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		size_t i = 0;
		for (i = 0; i < pc->_sz; i++) {
			printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", pc->_data[i]._name, pc->_data[i]._age, pc->_data[i]._sex, pc->_data[i]._tele, pc->_data[i]._addr);
		}
	}
	else {
		printf("ͨѶ¼�ѿ�,�����ӡ!\n");
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
		printf("ͨѶ¼�ѿ�,�޷�ɾ����ϵ��!\n");
		return;
	}
	char name[MAX_NAME] = "";
	printf("��������Ҫɾ������ϵ�˵�����:>");
	scanf("%s", name);
	int pos = FindByNameInContact(pc, name);
	if (-1 == pos) {
		printf("û����ͨѶ¼���ҵ���Ҫɾ������ϵ��!\n");
		return;
	}
	size_t i = 0;
	for (i = pos; i < pc->_sz - 1; i++) {
		pc->_data[i] = pc->_data[i + 1];
	}
	pc->_sz--;
	printf("ɾ����ϵ�˳ɹ�!\n");
}
void SearchContact(const Contact* pc) {
	assert(pc != NULL);
	if (!pc->_sz) {
		printf("ͨѶ¼�ѿ�,�޷�������ϵ��!\n");
		return;
	}
	char name[MAX_NAME] = "";
	printf("��������Ҫ���ҵ���ϵ������:>");
	scanf("%s", name);
	int pos = FindByNameInContact(pc, name);
	if (-1 == pos) {
		printf("û����ͨѶ¼���ҵ���Ҫ���ҵ���ϵ��!\n");
		return;
	}
	printf("���ҵ���Ҫ����ϵ����Ϣ����!\n");
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", pc->_data[pos]._name, pc->_data[pos]._age, pc->_data[pos]._sex, pc->_data[pos]._tele, pc->_data[pos]._addr);
	printf("������ϵ�˳ɹ�!\n");
}
void ModifyContact(Contact* pc) {
	assert(pc != NULL);
	if (!pc->_sz) {
		printf("ͨѶ¼�ѿ�,�޷������޸�!\n");
		return;
	}
	char name[MAX_NAME] = "";
	printf("��������Ҫ�޸ĵ���ϵ�˵�����:>");
	scanf("%s", name);
	int pos = FindByNameInContact(pc, name);
	if (-1 == pos) {
		printf("û����ͨѶ¼���ҵ���Ҫ�޸�����ϵ��!\n");
		return;
	}
	printf("��ʼ�޸���ϵ����Ϣ!\n");
	printf("����������:>");
	scanf("%s", pc->_data[pos]._name);
	printf("����������:>");
	scanf("%d", &pc->_data[pos]._age);
	printf("�������Ա�:>");
	scanf("%s", pc->_data[pos]._sex);
	printf("������绰:>");
	scanf("%s", pc->_data[pos]._tele);
	printf("�������ַ:>");
	scanf("%s", pc->_data[pos]._addr);
	printf("�޸���ϵ����Ϣ�ɹ�!\n");
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
	printf("ͨѶ¼�������!\n");
}