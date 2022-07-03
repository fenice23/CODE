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
		printf("ͨѶ¼����,�����ϵ��ʧ��!\n");
		return;
	}
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
	printf("��ӳɹ�!\n");
}
void PrintContact(const Contact* pc) {
	assert(pc != NULL);
	if (pc->_sz == 0) {
		printf("ͨѶ¼�ѿ�!\n");
		return;
	}
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
		printf("ͨѶ¼�ѿ�,ɾ������ʧ��!\n");
		return;
	}
	printf("��������Ҫɾ����ϵ�˵�����:>");
	scanf("%s", name);
	int pos = FindByNameInContact(pc, name);
	if (-1 == pos) {
		printf("û����ͨѶ¼���ҵ���Ҫɾ������ϵ��!\n");
		return;
	}
	size_t i = 0;
	for (i = pos; i < pc->_sz - 1; i++) {
		pc->_data[i] = pc->_data[i + 1];//�ṹ�����ֱ�Ӹ�ֵ
	}
	pc->_sz--;
	printf("ɾ���ɹ�!\n");
}
void SearchContact(const Contact* pc) {
	assert(pc != NULL);
	char name[MAX_NAME] = "";
	printf("��������Ҫ���ҵ���ϵ������:>");
	scanf("%s", name);
	int pos = FindByNameInContact(pc, name);
	if (-1 == pos) {
		printf("û����ͨѶ¼���ҵ���Ҫ���ҵ���ϵ��!\n");
		return;
	}
	printf("�ҵ�����Ҫ���ҵ���ϵ��!\n");
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", pc->_data[pos]._name, pc->_data[pos]._age, pc->_data[pos]._sex, pc->_data[pos]._tele, pc->_data[pos]._addr);
}
void ModifyContact(Contact* pc) {
	assert(pc != NULL);
	char name[MAX_NAME] = "";
	printf("��������Ҫ�޸ĵ���ϵ������:>");
	scanf("%s", name);
	int pos = FindByNameInContact(pc, name);
	if (-1 == pos) {
		printf("��Ҫ�޸ĵ���ϵ�˲���ͨѶ¼��!\n");
		return;
	}
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
	printf("�޸ĳɹ�!\n");
}
void SortContact(Contact* pc) {//��������������
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
	printf("ͨѶ¼�������!\n");
}