#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"
void Menu() {
	printf("*******************************\n");
	printf("*****      Contact        *****\n");
	printf("*****   1.add    2.del    *****\n");
	printf("*****   3.search 4.modify *****\n");
	printf("*****   5.sort   6.print  *****\n");
	printf("*****         0.exit      *****\n");
	printf("*******************************\n");
}
static void IncCapacity(Contact** ppc) {
	assert(ppc != NULL);
	(*ppc)->_capacity += INC_SZ;
	PeoInfo * ptr = (PeoInfo*)realloc((*ppc)->_data, (*ppc)->_capacity * sizeof(PeoInfo));
	if (NULL == ptr) {
		perror("IncCapacity ptr realloc");
		free((*ppc)->_data);
		(*ppc)->_data = NULL;
		return;
	}
	(*ppc)->_data = ptr;
	printf("���ݳɹ�!\n");
}
static void LoadContact(Contact* pc) {
	assert(pc != NULL);
	FILE* fp = fopen("contact.dat", "rb");
	if (NULL == fp) {
		perror("LoadContact fp fopen");
		return;
	}
	PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(PeoInfo), 1, fp)) {
		if (pc->_sz == pc->_capacity) {
			IncCapacity(&pc);
		}
		pc->_data[pc->_sz] = tmp;
		pc->_sz++;
	}
	fclose(fp);
	fp = NULL;
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
	LoadContact(pc);
}
static void SaveContact(Contact* pc) {
	assert(pc != NULL);
	FILE* fp = fopen("contact.dat", "wb");
	if (NULL == fp) {
		perror("SaveContact fp fopen");
		return;
	}
	size_t i = 0;
	for (i = 0; i < pc->_sz; i++) {
		fwrite(pc->_data + i, sizeof(PeoInfo), 1, fp);
	}
	fclose(fp);
	fp = NULL;
}
void DestroyContact(Contact* pc) {
	assert(pc != NULL);
	SaveContact(pc);
	if (pc->_data) {
		free(pc->_data);
		pc->_data = NULL;
	}
	pc->_capacity = 0;
	pc->_sz = 0;
	printf("����ͨѶ¼�ɹ�!\n");
}
void AddContact(Contact* pc) {
	assert(pc != NULL);
	if (pc->_capacity == pc->_sz) {
		IncCapacity(&pc);
	}
	printf("��ʼ������ϵ����Ϣ!\n");
	printf("��������ϵ������:>");
	scanf("%s", pc->_data[pc->_sz]._name);
	printf("��������ϵ������:>");
	scanf("%d", &pc->_data[pc->_sz]._age);
	printf("��������ϵ���Ա�:>");
	scanf("%s", pc->_data[pc->_sz]._sex);
	printf("��������ϵ�˵绰:>");
	scanf("%s", pc->_data[pc->_sz]._tele);
	printf("��������ϵ�˵�ַ:>");
	scanf("%s", pc->_data[pc->_sz]._addr);
	pc->_sz++;
	printf("������ϵ����Ϣ�ɹ�!\n");
}
void PrintContact(const Contact* pc) {
	assert(pc != NULL);
	if (pc->_sz == 0) {
		printf("ͨѶ¼�ѿ�,�����ӡͨѶ¼����!\n");
		return;
	}
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	size_t i = 0;
	for (i = 0; i < pc->_sz; i++) {
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", pc->_data[i]._name, pc->_data[i]._age, pc->_data[i]._sex, pc->_data[i]._tele, pc->_data[i]._addr);
	}
	printf("��ӡ��Ϣ�ɹ�!\n");
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
	if (!pc->_sz) {
		printf("ͨѶ¼�ѿ�,�޷�ɾ����ϵ��!\n");
		return;
	}
	char name[MAX_NAME] = "";
	printf("��������Ҫɾ����ϵ�˵�����:>");
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
		printf("ͨѶ¼�ѿ�,�޷��޸���ϵ��!\n");
		return;
	}
	char name[MAX_NAME] = "";
	printf("��������Ҫ�޸ĵ���ϵ������:>");
	scanf("%s", name);
	int pos = FindByNameInContact(pc, name);
	if (-1 == pos) {
		printf("û����ͨѶ¼���ҵ���Ҫ�޸ĵ���ϵ��!\n");
		return;
	}
	printf("��ʼ�޸���ϵ����Ϣ!\n");
	printf("��������ϵ������:>");
	scanf("%s", pc->_data[pos]._name);
	printf("��������ϵ������:>");
	scanf("%d", &pc->_data[pos]._age);
	printf("��������ϵ���Ա�:>");
	scanf("%s", pc->_data[pos]._sex);
	printf("��������ϵ�˵绰:>");
	scanf("%s", pc->_data[pos]._tele);
	printf("��������ϵ�˵�ַ:>");
	scanf("%s", pc->_data[pos]._addr);
	printf("�޸���ϵ�˳ɹ�!\n");
}
static void MySwap(char** p1, char** p2) {
	assert(p1 != NULL && p2 != NULL);
	char* t = *p1;
	*p1 = *p2;
	*p2 = t;
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
			if (strcmp(pc->_data[j]._name, pc->_data[j + 1]._name) > 0) {
				flag = false;
				MySwap(&pc->_data[j]._name, &pc->_data[j + 1]._name);
			}
		}
		if (flag) {
			break;
		}
	}
	printf("ͨѶ¼����ɹ�!\n");
}