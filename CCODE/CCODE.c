#define _CRT_SECURE_NO_WARNINGS 1//���ڴ���ĵ�һ��
#pragma warning(disable:6031)
#if 0
//IDE�д��������������Ŀ���̵�,һ������������������Ŀ����,һ����Ŀ���̰������.c,.h�ļ�,����һ����Ŀ��������ֻ��һ��main����
//д����
//1.д����������main����
//100~500�д���
//���ִ����?--->C�����Ǵ��������ĵ�һ�п�ʼִ�е�
//����C���Դ����е���main����(���),C����һ��������main��������ֻ��һ��
//д����������Ļ�ϴ�ӡ:C����
//printf--->��һ���⺯��--->����Ļ�ϴ�ӡ��Ϣ
//printf��ʹ��Ҳ�ô��к�(������Ϊͷ�ļ���stdio.h)
//#include <stdio.h>
//int main()
//{
//	printf("C Lanuage\n");
//	return 0;
//}
//����+����+���д��� VS���IDE�ÿ�ݼ�ctrl + f5/fn + ctrl + f5/[���Դ���]->[��ʼִ�в�����]���ɸ㶨
//vs2013����ִ��̫��,Ҫ����һ��vs2013������,vs2019�������þͿ��Կ������
//#include <stdio.h>
//int main()
//{
//	printf("Hello World!!!\n");//ctrl+F5���г���
//	return 0;
//}
//int main()//err:C����һ��������main��������ֻ��һ��
//{
//	printf("hehe\n");
//	printf("hello bit!\n");
//	return 0;
//}
//��������
//��������� ---> д���� ---> ��������е����� ---> �������������������е�����
//�����̳�	---> �ϼ���Ʒ, �۸� ---> 15.6Ԫ ---> С�� 1.56*10^1
//���� - 50
//C���� - ������	- ����
//a
//'a' ---> �ַ�a
//int main()
//{
//	//�ַ���������
//	char ch = 'a';
//	int age = 20;//����
//	short num = 10;//������
//	long l = 10l;//������
//	long long ll = 10ll;//��������
//
//	float weight = 55.5f;//�����ȸ�����
//	double d = 0.0;//˫���ȸ�����
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("hehe\n");
//	printf("C����\n");
//	printf("%d\n", 100);
//
//	//sizeof��һ���ؼ���,Ҳ��һ��������,����ֵ������size_t��,��������һ�����ͻ���һ��������ռ�ռ�Ĵ�С,��λ���ֽ�
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4/8 C��׼�涨sizeof(long) >= sizeof(int)
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	printf("%d\n", sizeof(long double));//8/10/12
//	/*
//	������еĵ�λ:
//	bit ---> ����λ, �����ʶ�������,�洢0��1,8���������0~7,10���������0~9,2���������0��1
//	byte---> 8bit
//	kb ---> 1024byte
//	mb ---> 1024kb
//	gb ---> 1024mb
//	tb ---> 1024gb
//	pb ---> 1024tb
//	*/
//
//	char ch = 'w';
//	int weight = 120;
//	int salary = 20000;
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//�����е�һЩ����:��Щ���ݲ��ܸı�:Ѫ��,�Ա�,Բ����
//	//��Щ���ݿ��Ըı�:����,����,����
//	//C������ô����?����:�����Ըı����,����:�ܱ��ı����
//
//	//����һ������: ���� ������ = 0;//�Ƽ�
//	//���� ������;//�﷨����,���ǲ��Ƽ�
//	int age = 20;
//	double weight = 75.3;
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%lf\n", weight);//%lf�Ǵ�ӡdouble����,%f�Ǵ�ӡfloat����
//	//%d-����	%lf-double	%f-float
//	return 0;
//}
//#include <stdio.h>
//int a = 100;//����ı���a��ȫ�ֱ���,����{}�ⲿ����ı���
//int global = 2019;
//void test()
//{
//	int local = 2018;
//	int global = 2020;
//	printf("global = %d\n", global);//2020
//}
//int main()
//{
//	//������Ϊ�ֲ�������ȫ�ֱ���
//	int a = 10;//����ı���a�Ǿֲ�����,����{}�ڲ�����ı���
//	printf("%d\n", a);//10,���ֲ�������ȫ�ֱ������ֳ�ͻ�������,�ֲ�����
//	//��Ȼ����д�����ʱ�򲻽���Ѿֲ�������ȫ�ֱ�������д��һ����
//	test();
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//дһ��������2�������ĺ�,scanf�Ǳ�׼���뺯��
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d%d", &a, &b);
//	sum = a + b;
//	printf("sum = %d", sum);
//	return 0;
//}
//�����������ں���������
//������
//�ֲ���������������Ǿֲ��������ڵľֲ���Χ
//ȫ�ֱ��������������������Ŀ����
//#include <stdio.h>
//int main()
//{
//	printf("hehe!\n");
//	int a = 10;
//	printf("a = %d\n", a);
//	return 0;
//}
//#include <stdio.h>
//int g_val = 2022;//ȫ�ֱ���
////g_val = 20;//err:��γ�ʼ��,������ֵ����ŵ�{}�ڲ�
////printf("g_val = %d\n", g_val);//err:����һ����������,����û�к������������������,�������ô����д����������ȥ
//int main()
//{
//	printf("1.g_val = %d\n", g_val);//2022
//	//printf("a = %d\n", a);//err
//	{
//		printf("2.g_val = %d\n", g_val);//2022
//		int a = 10;
//		printf("a = %d\n", a);//10
//	}
//	//printf("a = %d\n", a);//err
//	printf("3.g_val = %d\n", g_val);//2022
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//printf("g_var = %d\n", g_var);//err:add.c�е�ȫ�ֱ�����CODE.cʹ��ǰû�н��������ⲿ���ŵ��³���
//	extern int g_var;//externֻ������ȫ�ֱ������ߺ�������,�ҿ���д���Ҳ����ʡ��,��������ȫ�ֱ���ʱ����ͬʱ��ʼ��
//	printf("g_var = %d\n", g_var);//ok,2020
//	//printf("g_variable = %d\n", g_variable);//err
//	extern int g_variable;
//	printf("g_variable = %d\n", g_variable);//2
//	return 0;
//}
//int g_variable = 2;
//��������:Duration	��������������:�����Ĵ�����������һʱ���
//�ֲ���������������:����ֲ���Χ�������ڿ�ʼ,���ֲ���Χ�������ڽ���
//ȫ�ֱ�������������:��������main������������,Ҳ���ǳ�����������
//#include <stdio.h>
////��������������ͬ��ȫ�ֱ����ǲ����ܳ���
//int main()
//{
//	{
//		int a = 10;
//		printf("a = %d\n", a);//10
//	}
//	//printf("a = %d\n", a);//err
//	return 0;
//}
//����
//#include <stdio.h>
//enum _Sex
//{
//	_MALE,//ö�ٳ���
//	_FEMALE,//ö�ٳ���
//	_SECRET//ö�ٳ���
//};
//int main()
//{
//	3.14;//���泣��
//	1000;//���泣��
//	const float pai = 3.14f;//C����const���εĳ�����
//	//pai = 5.14f;//err
//	#define MAX 100//#define����ı�ʶ������
//	printf("MAX = %d\n", MAX);
//	#undef MAX
//	//printf("MAX = %d\n", MAX);//err
//	enum _Sex sex = _MALE;
//	printf("%d\n", sex);//0
//	return 0;
//}
//#include <stdio.h>
//#define MAX 10000
//int main()
//{
//	//1.���泣��
//	//3.14;//�������泣��
//	//10;//�������泣��
//	//'a';//�ַ����泣��
//	//"abcdef";//�ַ������泣��
//	//...
//
//	//2.const���εĳ�����
//	//int num = 10;//����
//	//num = 20;
//	//printf("num = %d\n", num);
//	//const int n = 10;//n����const���εĳ�����---���г�����(���ܱ��ı������),���Ǳ��ʻ��Ǳ���
//	////n = 20;//err
//	//int arr1[10] = { 0 };//ok
//	////int arr2[n];//err,˵�������n�Ǳ���,�����еı�����(gcc)��������ͨ��(C99�䳤����)
//	////int arr2[n] = { 0 };//err,����C��׼������ȫ�����ܱ���ͨ��,C++�п��Ա���ͨ��
//
//	//3.#define����ı�ʶ������
//	int n = MAX;
//	printf("n = %d\n", n);
//	//MAX = 1;//err:MAX�ǳ���,���ܱ��޸�
//	
//	return 0;
//}
//#include <stdio.h>
//enum _Sex
//{
//	//����ö�����͵ı�����δ������ȡֵ
//	//ö�ٳ���
//	_MALE = 3,//����ֵ	//0
//	_FEMALE,//1
//	_SECRET//2
//};//ö�ٳ��������ڴ����,ö�ٱ���������ջ
//int main()
//{
//	//4.ö�ٳ���,����һһ�оٵĳ���
//	enum _Sex s = _MALE;
//	printf("s = %d\n", _MALE);//0
//	s = _FEMALE;
//	printf("s = %d\n", _FEMALE);//1
//	s = _SECRET;
//	printf("s = %d\n", _SECRET);//2
//
//	//_MALE = 2;//err:���ܶԳ�����ֵ
//	printf("sizeof(enum _Sex) = %d\n", sizeof(enum _Sex));//4
//	printf("sizeof(s) = %d\n", sizeof(s));//4
//	printf("sizeof(_FEMALE) = %d\n", sizeof(_FEMALE));//4
//	printf("sizeof(_MALE) = %d\n", sizeof(_MALE));//4
//	printf("sizeof(_SECRET) = %d\n", sizeof(_SECRET));//4
//	return 0;
//}
//�ַ���
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//size_t MyStrlen(const char* str)
//{
//	assert(NULL != str);
//	if (*str == '\0')
//		return 0;
//	else
//		return (1 + MyStrlen(str + 1));
//}
//size_t _my_strlen(const char* str)
//{
//	assert(str != NULL);
//	size_t len = 0;
//	while (*str++)
//	{
//		len++;
//	}
//	return len;
//}
//size_t my_strlen(const char* str)
//{
//	assert(str != NULL);
//	const char* eos = str;
//	while (*eos++)
//	{
//		;
//	}
//	return (eos - str - 1);
//}
//void test()
//{
//	char arr1[] = "bit";
//	char arr2[] = { 'b', 'i', 't' };
//	char arr3[] = { 'b', 'i', 't', '\0' };
//	printf("%s\n", arr1);//bit
//	printf("%s\n", arr2);//bit����
//	printf("%s\n", arr3);//bit
//}
//int main()
//{
//	printf("%d\n", (int)strlen("hello bit.\n"));//11
//	printf("%d\n", (int)MyStrlen("hello bit.\n"));//11
//	printf("%d\n", (int)_my_strlen("hello bit.\n"));//11
//	printf("%d\n", (int)my_strlen("hello bit.\n"));//11
//	test();
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	//�ַ���������˫������������һ���ַ�
//	//"abcdef";
//	//"hello bit";
//
//	//�ַ�����---������һ����ͬ���͵�Ԫ��
//	//��ʵ�ַ����ڽ�β��λ��������һ��\0��ת���ַ�
//	//\0���ַ����Ľ�����־,
//	//char arr[] = "hello\0";//['h' 'e' 'l' 'l' 'o' '\0' '\0']
//	//printf("sizeof(arr) = %d\n", sizeof(arr));//7
//
//	//char arr1[] = "abc";
//	//char arr2[] = { 'a', 'b', 'c' };
//	//char arr3[] = { 'a', 'b', 'c', '\0' };
//	////printf("%d\n", sizeof(arr1));//4
//	////printf("%d\n", sizeof(arr2));//3
//	////printf("%d\n", sizeof(arr3));//4
//	////printf("%s\n", arr1);//abc
//	////printf("%s\n", arr2);//abc����
//	////printf("%s\n", arr3);//abc
//
//	////��һ���ַ����ĳ���---strlen(); string-length
//	////int len = (int)strlen("ab");//2
//	////printf("%d\n", len);//2
//	////printf("%d\n", sizeof("ab"));//3
//
//	//printf("%d\n", (int)strlen(arr1));//3
//	//printf("%d\n", (int)strlen(arr2));//>=3
//	//printf("%d\n", (int)strlen(arr3));//3
//
//	char arr[] = "afc\0d";
//	printf("sizeof(arr) = %d\n", sizeof(arr));//6
//	printf("strlen(arr) = %d\n", (int)strlen(arr));//3
//	printf("strlen(afc\\0d) = %d\n", (int)strlen("afc\0d"));//3
//	return 0;
//}
//ת���ַ�--->ת���ַ�ת������ԭ������˼
//#include <stdio.h>
//#include <string.h>
//void test()
//{
//	printf("%d\n", (int)strlen("abcdef"));//6
//	printf("%d\n", (int)strlen("c:\test\328\test.c"));//14
//}
//int main()
//{
//	//printf("c:\\code\\test.c\n");
//	//printf("c:\code\test.c\n");
//	printf("%c\n", '\'');
//	printf("%s\n", "'");
//	printf("'\n");
//	printf("\'\n");
//
//	printf("%s\n", "\"");
//	printf("\"\n");
//
//	test();
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//printf("c:\test\test.c");//c:	est		est.c   
//	//printf("ab\ncd");
//
//	//printf("(are you ok??)\n");//vc6.0�л��ӡ(are you ok],����ĸ������,??)--->]
//	//printf("(are you ok\?\?)\n");//(are you ok??)
//
//	//printf("%c\n", 'a');//a
//	//printf("%c\n", ''');//err
//	//printf("%c\n", '\'');//'
//	//printf("%s\n", "abc");//abc
//	//printf("%s\n", "a");//a
//	//printf("%s\n", "\"");//"
//	//printf("%c\n", '"');//"
//	//printf("%s\n", "'");//'
//	
//	//printf�����ڴ�ӡ���ݵ�ʱ�����ָ����ӡ�ĸ�ʽ
//	//printf("%d\n", 100);//100
//	//printf("%c\n", 'a');//a
//	//printf("%s\n", "abc");//abc
//
//	//printf("c:\\test\\test.c");
//	//printf("\a\a\a\a");//\a����
//	//printf("abc");
//	//printf("\b");//\b�˸��
//
//	//printf("%c\n", '\130');//X ---> 88ASSCII����Ӧ���ַ�
//	//printf("%d\n", '\130');//88
//  //ASSCI���:ÿһ���ַ�����һ��ֵ,ASSCII��ֵ,������洢��ʵ���ײ�ȫ�Ƕ���������,@!ER1... A-65 B-66 a-97 b-98
//	//printf("%c--->%d\n", '\101', '\101');//'A' ---> 65 ---> 101
//	//printf("%c--->%d\n", '\x30', '\x30');//0--->48
//
//	//printf("%d\n", (int)strlen("abc"));//3
//	//printf("%d\n", (int)strlen("c:\test\328\test.c"));//14
//	return 0;
//}
//ע��:�������в���Ҫ�Ĵ������ֱ��ɾ��,Ҳ����ע�͵�,��������Щ����Ƚ��Ѷ����Լ�һ��ע������,��ע�����������͸��Ӵ����,eg.
//ע�������ַ��:1.C���Է���ע��/*xxxxxxxxxxxx*/	ȱ��:����Ƕ��ע��		�����������������֮
//2.C++���ע�� //xxxxxxxxxxxxx	����ע��һ��,Ҳ����һ��һ��ע��
//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
/////*C���Է��ע��
//int Sub(int x, int y)
//{
//	return x - y;
//}
//*/
//int main()
//{
//	//C++����ע��
//	//int a = 10;
//	//����Add������ɼӷ�����ӡ����Ļ
//	printf("%d\n", Add(1, 2));
//
//	//int a = 10;//C++ע�ͷ��
//	/*
//	int b = 0;//C����ע�ͷ��,ȱ���ǲ�֧��Ƕ��ע��
//	*/
//	return 0;
//}
//ѡ�����
//#include <stdio.h>
//int main()
//{
//	int coding = 0;
//	printf("���ȥ�ô�����? (ѡ��1 or 0) :>");
//	scanf("%d", &coding);
//	if (1 == coding)
//	{
//		printf("���,����к�offer\n");
//	}
//	else
//	{
//		printf("����,�ؼ�������\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int input = 0;//�����ֵ
//	printf("�������:>\n");
//	printf("��Ҫ�ú�ѧϰ��?(1 or 0):>");
//	scanf("%d", &input);
//	if (1 == input)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//}
//ѭ�����	while  for  do...while
//#include <stdio.h>
//int main()
//{
//	printf("�������\n");
//	int line = 0;
//	while (line <= 200000)
//	{
//		line++;
//		printf("%d��ҪŬ���ô���\n", line);
//	}
//	if (line > 200000)
//		printf("Ӯȡ�׸���\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	while (line < 100000)
//	{
//		printf("д����:%d\n", line);
//		line++;
//	}
//	if (100000 == line)
//	{
//		printf("��offer\n");
//	}
//	return 0;
//}
//����--->�ص���Ǽ򻯴���,���븴��
//#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	//int num1 = 0;
//	//int num2 = 0;
//	//int sum = 0;
//	//printf("��������������:>");
//	//scanf("%d%d", &num1, &num2);
//	//sum = num1 + num2;
//	//printf("sum = %d\n", sum);
//
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("����������������:>");
//	scanf("%d%d", &num1, &num2);
//	sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//	return 0;
//}
//#include <stdio.h>
//#pragma warning(disable:6031)
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("����������������:>");
//	scanf("%d%d", &num1, &num2);
//	//sum = num1 + num2;
//
//	//�����ķ�ʽ���
//	sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//	return 0;
//}
//����--->һ����ͬ����Ԫ�صļ���
//#include <stdio.h>
//int main()
//{
//	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//����һ����������,����10��Ԫ��
//	int arr2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//int d = 4;
//	//...
//	//������һ����ͬ�������͵�Ԫ�صļ���
//	//10������1~10��������,����ʹ���±�������,���±�0��ʼ
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	printf("\n");
//	//char ch[5] = { 'a', 'b', 'c' };//����ȫ��ʼ��,ʣ���Ĭ��Ϊ0
//	return 0;
//}
//������:
//#include <stdio.h>
//int main()
//{
//	//����������+ - * / %
//	//int a = 0;
//	//a = 9 / 2;
//	//printf("a = %d\n", a);//4
//	//float f = 0.0f;
//	//f = 9 / 2;
//	//printf("f = %f\n", f);//4.000000
//	//double d = 0.0;
//	//d = 9 / 2.0;
//	//printf("d = %lf\n", d);//4.500000
//
//	//a = 9 % 2;//% -> ȡģ(ȡ��)
//	//printf("a = %d\n", a);//1
//
//	//��λ������:>>  <<
//	//int a = 2;
//	//int b = a << 1;//���Ʋ������ƶ����Ƕ�����λ
//	//printf("a = %d, b = %d\n", a, b);//2, 4
//	//int c = b >> 2;//���Ʋ������ƶ����Ƕ�����λ
//	//printf("c = %d, b = %d\n", c, b);//1, 4
//
//	//λ������:&��λ�� |��λ�� ^��λ���
//	//printf("%d\n", 3 & 5);//1
//	//printf("%d\n", 3 | 5);//7
//	//printf("%d\n", 3 ^ 5);//6
//
//	//��ֵ������:= += -= *= /= %= &= |= >>= <<=
//	//int a = 2;
//	//a = a + 5;
//	//printf("a = %d\n", a);//7
//	//a = 6;
//	//printf("a = %d\n", a);//6
//	//a += 5;
//	//printf("a = %d\n", a);//11
//
//	//a = a - 3;
//	//printf("a = %d\n", a);//8
//	//a -= 3;
//	//printf("a = %d\n", a);//5
//
//	//a = a % 3;
//	//printf("a = %d\n", a);//2
//	//a %= 3;
//	//printf("a = %d\n", a);//2
//
//	//1 + 2;//+������������,+��˫Ŀ������
//
//	//��Ŀ������:ֻ��һ���������Ĳ�����
//	//!-->�߼�ȡ��	C������0��ʾ��,�����ʾ��
//	//int a = 10;
//	//printf("%d\n", !a);//0
//	//printf("%d\n", !!a);//1
//	//printf("%d\n", !!!a);//0
//	//a = 0;
//	//printf("%d\n", !a);//1
//	//printf("%d\n", !!a);//0
//	////!Ӧ�ó���
//	//if (a)
//	//{
//	//	//���aΪ��,����
//	//}
//	//if (!a)
//	//{
//	//	//���aΪ��,����
//	//}
//
//	//��ֵ,��ֵ���������ǵ�Ŀ������,ֻ��һ��������
//	//int a = -5;
//	//printf("a = %d\n", a);//-5
//	//a = -a;
//	//printf("a = %d\n", a);//5
//	//a = +a;
//	//printf("a = %d\n", a);//5
//
//	//sizeof������/�ؼ���,�ǵ�Ŀ������,��������/������ռ�ڴ�ռ��С,��λ���ֽ�
//	//int a = 10;
//	//printf("%d\n", sizeof(int));//4,sizeof(int)����ͨ������������˵���ⲻ�Ǻ���,��Ϊ�������β����ܴ�����
//	//printf("%d\n", sizeof(a));//4
//	//printf("%d\n", sizeof a);//ok,4,sizeof a����ͨ��˵���ⲻ�Ǻ���,��Ϊ�������ò���ȥ��()�������ò�����
//	////printf("%d\n", sizeof int);//err
//	int arr[10] = { 0 };//10*4 = 40;
//	printf("%d\n", sizeof(arr));//40,�������������ܴ�С��λ�ֽ�
//	printf("%d\n", sizeof(arr[0]));//4
//	int len = (int)(sizeof(arr) / sizeof(arr[0]));
//	printf("len = %d\n", len);//10
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);//~��������λȡ��:�����ж�����λ������1���0,0���1
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111	��Ϊ�����������ڴ��д洢���ǲ���
//	//һ�������Ķ����Ʊ�ʾ������,ԭ��,����,����,������ԭ��������ͬ,������Ҫȡ����1�õ�����
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//int a = 10;
//	//int b = ++a;//ǰ��++		�ȼӼӺ�ʹ��
//	//printf("a = %d, b = %d\n", a, b);//11 11
//
//	//int a = 10;
//	//int b = a++;//����++		��ʹ�ú�Ӽ�
//	//printf("a = %d, b = %d\n", a, b);//11 10
//
//	int a = 1;
//	int b = (++a) + (++a) + (++a);//������д���ִ���,���ִ���д�������˷�ʱ��û������
//	printf("b = %d\n", b);//12���ǲ�Ψһ,��ͬ�����������ͬ
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//int a = 3.14;//warning��ʼ����doubleת����int���ܶ�ʧ����
//	//int aa = (int)3.14;//(����)--->ǿ������ת��������
//	//printf("%d, %d\n", a, aa);//3 3
//	//��ϵ������ > < >= <= == !=
//	//�߼������� && ||
//	//int a = 3;
//	//int b = 5;
//	//int c = a && b;
//	//printf("c = %d\n", c);//1
//	//if (a && b)
//	//{
//	//	printf("hhh\n");
//	//}
//	//int a = 3;
//	//int b = 0;
//	//int c = a && b;
//	//printf("c = %d\n", c);//0
//	//int a = 1;
//	//int b = 0;
//	//int c = a || b;
//	//printf("c = %d\n", c);//1
//
//	//����������---��Ŀ������	exp1 ? exp2 : exp3
//	//int a = 0;
//	//int b = 3;
//	//int max = 0;
//	//if (a > b) max = a;
//	//else max = b;
//	//printf("max = %d\n", max);//3
//	//max = a > b ? a : b;
//	//printf("max = %d\n", max);//3
//
//	//���Ų�����---˫Ŀ������	���ű��ʽ--->���Ÿ�����һ�����ʽ	���ű��ʽҲ��˳����ֵ���ʽ,�������ʽ�Ľ�������һ�����ű��ʽ�Ľ��
//	//int a = (2, 4 + 5, 6);
//	//printf("a = %d\n", a);//6
//	//int a = 0;
//	//int b = 3;
//	//int c = 5;
//	//int d = (a = b + 2, c = a - 4, b = c + 2);
//	//printf("d = %d\n", d);//3
//
//	//[]--->�±����ò�����
//	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//printf("%d\n", arr[5]);//6
//
//	//�������ò�����
//	printf("hehe\n");//���ú�����ʱ��,��������ߵ�()���Ǻ������ò�����
//	printf("%d\n", 100);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//C�����ṩ�Ĺؼ���	��C�����ṩ��,�����Լ������ؼ���		���ܰ�C���Թؼ�������������,������
//	//int char;//err
//	//auto break case char const continue default do double else enum extern float for goto if int long register return short signed sizeof static struct switch typedef union unsigned void volatile while
//	//auto	�Զ���	ÿ���Ǿ�̬�ǼĴ����ֲ���������auto���ε�
//	//{
//	//	auto int a = 10;//����ı���a���Զ�����,�Զ����ٵı���,Ҳ���Զ�����,��ʱ����,�ֲ�����
//	//	//�����auto����ʡ��	auto��C++11�п��Խ����Զ������Ƶ�
//	//}
//	//extern�����������ⲿ���ŵ�
//	//register�Ĵ����ؼ���	���������齫register���εı������ڼĴ�����
//	//register int a = 10;
//	//printf("%p", &a);//err,�Ĵ����������洢���ڴ���,&�Ĵ���������ַ��ӡ����
//	//register int num = 100;//���������齫����num����ڼĴ�����
//	//���ǽ��齫����Ƶ����ʹ�õı�����register����,�ŵ��Ĵ��������Ч��
//	//signed �з��ŵ�		unsigned int�޷��ŵ�		static��̬��		union������	void��/��	volatile	define���ǹؼ��ֶ���Ԥ����ָ��	includeҲ���ǹؼ��ֶ���Ԥ����ָ��
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//typedef��˼�����Ͷ���--->��׼ȷӦ��������������
//	typedef unsigned int u_int;
//	unsigned int num = 100;
//	u_int a = 100;//num��a����������������һ����
//	return 0;
//}
//#include <stdio.h>
//void test1() {
//	int a = 1;//a�Ǿֲ�����
//	a++;
//	printf("%d ", a);
//}
//void test2() {
//	static int a = 1;//��ʼ�����ִֻ��һ��
//	a++;			 //static���ξֲ������ı��˾ֲ���������������(�����ϸı��˱����Ĵ洢λ��)
//	printf("%d ", a);
//}
//int main() {
//	//static��̬��	1.static���ξֲ�����	2.static����ȫ�ֱ���	3.static���κ���
//	int i = 0;
//	while (i < 10) {
//		//test1();//��ӡ10��2
//		test2();//2 3 4 5 6 7 8 9 10 11
//		i++;
//	}
//	return 0;
//}
//#include <stdio.h>
//extern int g_val;//extern�����ⲿ����
//extern int g_variable;
//int main() {
//	printf("g_val = %d\n", g_val);//ȫ�ֱ��������������ж�����ʹ��
//	//printf("g_variable = %d\n", g_variable);//err,��Ϊadd.c�ļ���g_variableȫ�ֱ�����static������,��ȫ���������Ϊ����ν���ļ�������(���˵����׼ȷ)
//	//static����ȫ�ֱ���ʹ�����ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ���ʹ��,����Դ�ļ�����ʹ��
//	//ȫ�ֱ���������Դ�ļ��ڲ��ܹ�ʹ������Ϊȫ�ֱ��������ⲿ��������,��static���κ�ͱ�����ڲ�����������,��ʱ����Դ�ļ��Ͳ������ӵ������̬��ȫ�ֱ�����
//	return 0;
//}
//#include <stdio.h>
//extern int Add(int x, int y);//��������
//extern int Sub(int x, int y);
//int main() {
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//30
//	printf("sum = %d\n", sum);
//	printf("%d\n", Sub(a, b));//err:��ΪSub������static������,ֻ���������ڵ�Դ�ļ���ʹ��,����������Դ�ļ���ʹ��
//	//static���κ���ʹ�ú���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��,����������Դ�ļ��ڲ�ʹ��,������static���κ����ǽ��������ⲿ�������Ա�����ڲ���������(��static����ȫ�ֱ�������)
//	return 0;
//}
//#include <stdio.h>
////define��Ԥ����ָ��	1.define�������		2.define����꺯��
//#define MAX 1000
//#define ADD(X, Y) ((X) + (Y))
//int main()
//{
//	//printf("%d\n", MAX);//1000
//	printf("%d\n", 4 * ADD(2, 3));//20
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	//int num = 10;//�������е�ַ
//	//&num;//ȡ��num�ĵ�ַ
//	//printf("%p\n", &num);//��ӡ��ַ,%p---�Ե�ַ����ʽ��ӡ
//
//	//int num = 10;
//	//int* p = NULL;//pΪһ��ָ�����
//	//p = &num;
//	//*p = 20;
//	//printf("num = %d, *p = %d\n", num, *p);//20 20
//
//	//char ch = 't';
//	//char* pc = &ch;
//	//*pc = 'q';
//	//printf("%c\n", ch);//q
//	//printf("%c\n", *pc);//q
//
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(long double*));
//	//����:ָ��32λƽ̨��ռ�ռ��С��4�ֽ�,64λƽ̨��8�ֽ�
//	return 0;
//}
//#include <stdio.h>
//struct Stu
//{
//	char _name[20];//����
//	int _age;//����
//	char _sex[5];//�Ա�
//	char _id[15];//ѧ��
//};
//int main() {
//	struct Stu s = { "����", 24, "��", "20189985" };
//	printf("name = %s, age = %d, sex = %s, id = %s\n", s._name, s._age, s._sex, s._id);
//	struct Stu* ps = &s;
//	printf("name = %s, age = %d, sex = %s, id = %s\n", ps->_name, ps->_age, ps->_sex, ps->_id);
//	printf("name = %s, age = %d, sex = %s, id = %s\n", (*ps)._name, (*ps)._age, (*ps)._sex, (*ps)._id);
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	//�ڴ��ǵ������ر���Ҫ�Ĵ洢��,����������г�������ж������ڴ��н��е�.����Ϊ����Ч��ʹ���ڴ�,�Ͱ��ڴ滮��Ϊһ����С���ڴ浥Ԫ,ÿ���ڴ浥Ԫ�Ĵ�С����1���ֽ�.Ϊ���ܹ���Ч�ķ��ʵ��ڴ��ÿ����Ԫ,�͸��ڴ浥Ԫ�����˱��,��Щ��ű���Ϊ�ڴ浥Ԫ�ĵ�ַ
//	//int a = 10;
//	//printf("0X%p\n", &a);//%pר��������ӡ��ַ��
//	//int* pa = &a;//pa��������ŵ�ַ��,C������pa��ָ�����
//	////*˵��pa��ָ�����,ǰ���int˵��paָ��Ķ�����int���͵�
//
//	//char ch = 'w';
//	//char* pc = &ch;
//	//printf("0X%p, 0X%p\n", pc, &ch);
//
//	//int* p = NULL;
//	//p = (int*)&p;//ok,���ǲ��Ƽ�����д
//	//int* pp = &pp;//ok,���ǲ��Ƽ�����д
//
//	//int a = 10;
//	//int* pa = &a;
//	//*pa = 20;
//	////�����*�ǽ����ò���,*pa����ͨ��pa���a�ĵ�ַ�ҵ�a
//	//printf("%d\n", a);//20
//	//ָ����ǵ�ַ
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(long double*));
//	return 0;
//}
//#include <stdio.h>
////�ṹ��ؼ��ֿ�����������һ���µ�����
//struct Stu//����һ��ѧ������
//{
//	char _name[20];
//	int _age;
//	double _score;
//};
//struct Book//����һ���������
//{
//	char _name[20];
//	float _price;
//	char _id[30];
//};
//int main()
//{
//	struct Stu s = { "����", 20, 85.5 };//�ṹ������Ĵ����ͳ�ʼ��
//	printf("1:	%s %d %.2lf\n", s._name, s._age, s._score);//.������,�ṹ�����.��Ա����
//	struct Stu* ps = &s;
//	printf("2:	%s %d %.2lf\n", (*ps)._name, (*ps)._age, (*ps)._score);
//	printf("3:	%s %d %.2lf\n", ps->_name, ps->_age, ps->_score);//->������,�ṹ��ָ�����->��Ա����
//	return 0;
//}
//#include <stdio.h>
//void test()
//{
//	int b = 10;
//}
//int num = 10;
//int main()
//{
//	//int a = 10;
//	int num = 1;
//	printf("num = %d\n", num);//1--->�ֲ���������ʹ��
//	return 0;
//}
//#include <string.h>
//#include <stdio.h>
//int MyMax(int a, int b)
//{
//	return a > b ? a : b;
//}
//int main()
//{
//	//�ַ���������־��'\0'
//	//char arr[] = { 't', 'z', 'h' };
//	//printf("%d\n", strlen(arr));//��ӡ>=3�����ֵ
//
//	//int n = 10;
//	//int arr[n] = { 0 };//err
//	//C99��׼��������һ������:�䳤����,֧�����鴴����ʱ���ñ���ָ����С,����������鲻�ܳ�ʼ��
//	//int n = 10;
//	//int arr[n];//err,˵��VS2019�ǲ�֧��C99�еı䳤����
//
//	//printf("%d\n", strlen("c:\test\121"));//7
//
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = MyMax(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}
//#include <stdio.h>
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	//int i = 0;
//	//int a = 2;
//	//for (i = 0; i < 5; i++)
//	//{
//	//	printf("%d,", sum(a));//8 10 12 14 16
//	//}
//
//	//printf("     **\n     **\n************\n************\n    *  *\n    *  *");
//	int M = 0;
//	scanf("%d", &M);
//	if (M % 5 == 0)	printf("YES\n");
//	else printf("NO\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//C�����ǽṹ���ĳ����������	˳��ṹ		ѡ��ṹ		ѭ���ṹ
//	//ʲô�����?C��������һ���ֺ�;�����ľ���һ�����,����:
//	printf("hehe\n");
//	3 + 2;
//	;//����һ�������
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//int age = 0;
//	//scanf("%d", &age);
//	//if (age < 18) {
//	//	printf("δ����\n");
//	//}
//	//int age = 0;
//	//scanf("%d", &age);
//	//if (age < 18) {
//	//	printf("δ����\n");
//	//}
//	//else {
//	//	printf("����\n");
//	//}
//	//int age = 0;
//	//scanf("%d", &age);
//	//if (age < 18) {
//	//	printf("����\n");
//	//}
//	//else if (age < 30 && age >= 18) {
//	//	printf("����\n");
//	//}
//	//else if (age < 50 && age >= 30) {
//	//	printf("����\n");
//	//}
//	//else if (age < 80 && age >= 50) {
//	//	printf("����\n");
//	//}
//	//else {
//	//	printf("����\n");
//	//}
//
//	//����else����,���ƻ��ӡhahaʵ����ʲôҲ�����ӡ����
//	//int a = 0;
//	//int b = 2;
//	//if (a == 1)
//	//	if (b == 2)
//	//		printf("hehe\n");
//	//else
//	//	printf("haha\n");
//	
//	//�������������else����:�ʵ���ʹ��{}����ʹ�����߼��������
//	//int a = 0;
//	//int b = 2;
//	//if (a == 1)
//	//{
//	//	if (b == 2)
//	//	{
//	//		printf("hehe\n");
//	//	}
//	//}
//	//else
//	//{
//	//	printf("haha\n");//��ӡhaha
//	//}
//
//	//if��д��ʽ�ĶԱ�
//	//if (condition) {//����1
//	//	return x;
//	//}
//	//return y;
//
//	//if (condition) {//����2
//	//	return x;
//	//}
//	//else {
//	//	return y;
//	//}
//	//����1�ʹ���2Ч����ͬ���Ǵ���2�ɶ��Ը���,�߼���������,�����׳���
//
//	//int num = 1;
//	//if (num == 5) {//����3
//	//	printf("hehe\n");
//	//}
//	//
//	//int num = 1;
//	//if (5 == num) {//����4
//	//	printf("hehe\n");
//	//}
//	//����3�ʹ���4Ч����ͬ���Ǵ���4�ɶ��Ը���,�����׳���
//	//������:<<������C/C++���>>
//	//int num = 0;
//	//scanf("%d", &num);
//	//if (num & 0x01) {
//	//	printf("YES\n");
//	//}
//	//else {
//	//	printf("NO\n");
//	//}
//
//	//int i = 0;
//	//for (i = 1; i <= 100; i++) {
//	//	if (i & 0x01) {
//	//		printf("%d is Odd Num\n", i);
//	//	}
//	//}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//int age = 20;
//	//if (age >= 18) {
//	//	printf("����\n");
//	//}
//	//else {
//	//	printf("δ����\n");
//	//	printf("����̸����\n");
//	//}
//
//	//int num = -1;
//	////if (num % 2 == 1) {//�����ж������ķ�ʽ����
//	////	printf("����\n");
//	////}
//	//if (num % 2) {
//	//	printf("����\n");//ok
//	//}
//	//if (num & 0x01) {
//	//	printf("����\n");//ok
//	//}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//switch (���ͱ��ʽ)
//	//{
//	//	�����;//��������һЩcase���:
//	//	case ���ͳ������ʽ:
//	//	���;
//	//	break;
//	//}
//
//	//switch���������û��ֱ��ʵ�ַ�֧,����breakʹ�ò���ʵ�������ķ�֧
//	//int day = 0;
//	//scanf("%d", &day);
//	//switch (day)
//	//{
//	//case 1:
//	//	printf("����һ\n");
//	//	break;
//	//case 2:
//	//	printf("���ڶ�\n");
//	//	break;
//	//case 3:
//	//	printf("������\n");
//	//	break;
//	//case 4:
//	//	printf("������\n");
//	//	break;
//	//case 5:
//	//	printf("������\n");
//	//	break;
//	//case 6:
//	//	printf("������\n");
//	//	break;
//	//case 7:
//	//	printf("������\n");
//	//	break;
//	//default:
//	//	printf("�������������\n");
//	//	break;
//	//}
//
//	//��ʱ�����ǵ��������:1.����1~5�������"weekday"		2.����6~7���"weekend"
//	//int day = 0;
//	//scanf("%d", &day);
//	//switch (day)
//	//{
//	//case 1:
//	//case 2:
//	//case 3:
//	//case 4:
//	//case 5:
//	//	printf("weekday\n");
//	//	break;
//	//case 6:
//	//case 7:
//	//	printf("weekend\n");
//	//	break;
//	//default:
//	//	printf("������������\n");
//	//	break;
//	//}
//	//break���ʵ��Ч���ǰ�����б���Ϊ��ͬ�Ĳ���
//	//��̵ĺ�ϰ��:�����һ��case���ĺ������һ��break����Ա����������ǰ�����һ��case�������������break��䵼�³���bug������
//	//default�Ӿ�:�������ֵ�����е�case��ǩ����ƥ����ô��?��ʵҲûɶ,����������е���䶼����������,���򲢲�����ֹ,Ҳ���ᱨ��,��Ϊ���������C�в�����Ϊ�Ǵ����,����,����㲢������Բ�ƥ�����б�ǩ�ı��ʽ��ֵʱ����ô����?�����������б�������һ��default�Ӿ�,������ı�ǩdefault:д���κ�һ��case��ǩ���Գ��ֵ�λ��.��switch���ʽ��ֵ����ƥ������case��ǩ��ֵʱ,���default�Ӿ��������ͻ�ִ��,����ÿ��switch�����ֻ�ܳ���һ��default�Ӿ�,���������Գ���������б���κ�λ��,�������������ᴩһ��case��ǩһ���ᴩdefault�Ӿ�
//	//��̺�ϰ��:��ÿ��switch����ж���һ��default�Ӿ���һ����ϰ��,���������ں���ټ�һ��break
//
//	//int n = 1;
//	//int m = 2;
//	//switch (n)
//	//{
//	//case 1:
//	//	m++;
//	//case 2:
//	//	n++;
//	//case 3:
//	//	switch (n)//switch�������Ƕ��ʹ��
//	//	{
//	//	case 1:
//	//		n++;
//	//	case 2:
//	//		m++;
//	//		n++;
//	//		break;
//	//	}
//	//case 4:
//	//	m++;
//	//	break;
//	//default:
//	//	break;
//	//}
//	//printf("m = %d, n = %d\n", m, n);//m = 5, n = 3
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//int i = 1;
//	//while (i <= 10)
//	//{
//	//	printf("%d ", i);
//	//	i++;
//	//}
//
//	//int i = 1;
//	//while (i <= 10)
//	//{
//	//	if (i == 5)
//	//		break;
//	//	printf("%d ", i);//1 2 3 4
//	//	i++;
//	//}
//	////�ܽ�:break��whileѭ���е�����:
//	////��ʵ��ѭ����ֻҪ����break,��ֹͣ���ڵ����е�ѭ��ֱ����ֹѭ��,����:while�е�break������������ֹѭ����
//	//printf("\n%d ", i);//5
//
//	//int i = 1;
//	//while (i <= 10)
//	//{
//	//	if (i == 5)	continue;
//	//	printf("%d ", i);//1 2 3 4��ѭ��
//	//	i++;
//	//}
//	//�ܽ�:continue��whileѭ���е����þ���:continue��������ֹ����ѭ����,Ҳ���Ǳ���ѭ����continue��ߵĴ��벻����ִ��,��ֱ����ת��while�����жϲ���,������һ��ѭ����ڵ��ж�
//	//int i = 1;
//	//while (i <= 10)
//	//{
//	//	i++;
//	//	if (5 == i)	continue;
//	//	printf("%d ", i);//2 3 4 6 7 8 9 10 11
//	//}
//
//	//char ch = 0;
//	//while (~(ch = getchar()))//while ((ch = getchar()) != EOF)//EOF---end of fileһ��������ļ�����,���ʾ���-1
//	//{//��δ������˼�Ƕ�ȡ����������ַ������,ֱ����ȡ���ļ��������ֹͣѭ��
//	//	putchar(ch);
//	//}
//	//ע�����̨����EOF��Ҫ����ctrl+z����ϲ���
//	//char ch = 0;
//	//while ((ch = getchar()) != EOF)//�ȼ��� while ((ch = getchar()) != -1)�ȼ��� while (~(ch = getchar()))
//	//{//��δ������˼�ǽ�����������ַ��е��ַ�0���ַ�9ȫ����ӡ����,ֱ�������ļ�������־ֹͣѭ��
//	//	if (ch > '9' || ch < '0')	continue;
//	//	putchar(ch);
//	//}
//	//EOF;//#define EOF    (-1)
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	while (~(ch = getchar()))
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF) {
//	//	putchar(ch);
//	//}
//	//char passwd[20] = "";
//	//int ch = 0;
//	//printf("����������:>");
//	//scanf("%s", passwd);
//	//while ((ch = getchar()) != '\n') {//���������еĶ���ַ�
//	//	;
//	//}
//	//printf("��ȷ������(Y/N):>");
//	////getchar();//����һ���س�
//	//ch = getchar();
//	//if (ch == 'Y') {
//	//	printf("ȷ�ϳɹ�\n");
//	//}
//	//else {
//	//	printf("ȷ��ʧ��\n");
//	//}
//	//getchar��������ֵ���Ͳ���char���Ͷ���int���͵�,��Ϊgetchar���յ���char����,char��������һ��int,����C�ٷ��ĵ�д�ķ�������Ҳ��int����,����getchar����������������ļ���βʱ�᷵��EOF,EOF�����Ͼ���-1,���������ASSCII��ȡֵ�ķ�Χ,���Է���ֵ������int����
//
//	//int ch = 0;
//	//while (~(ch = getchar())) {
//	//	if (ch > '9' || ch < '0') {
//	//		continue;
//	//	}
//	//	else {
//	//		putchar(ch);
//	//	}
//	//}
//
//	//int i = 1;
//	//while (i <= 10) {
//	//	printf("%d ", i);
//	//	i++;
//	//}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//int i = 0;
//	//for (i = 1; i <= 10; i++) {
//	//	printf("%d ", i);
//	//}
//	//int i = 0;
//	//for (i = 1; i <= 10; i++) {
//	//	if (5 == i) {
//	//		break;
//	//	}
//	//	printf("%d ", i);
//	//}
//	//int i = 0;
//	//for (i = 1; i <= 10; i++) {
//	//	if (5 == i) {
//	//		continue;
//	//	}
//	//	printf("%d ", i);
//	//}
//	//for����ѭ�����Ʊ���һЩ����:1.������forѭ�������޸�ѭ������,��ֹforѭ��ʧȥ����,	   2.����forѭ������ѭ�����Ʊ�����ȡֵ����ǰ�պ�����д��
//	//int i = 0;
//	//for (i = 0; i < 10; i++) {}//ǰ�պ󿪵�д��
//	//for (i = 0; i <= 9; i++) {}//ǰ�պ�յ�д��
//
//	//for (;;) {//for (;;)<===>while (1)
//	//	printf("hehe\n");//����һ����ѭ��
//	//}
//
//	//int x = 0;
//	//int y = 0;
//	//for (x = 0, y = 0; x < 2 && y < 5; ++x, y++) {
//	//	printf("hehe\n");//ѭ������
//	//}
//
//	//int i = 0;
//	//int k = 0;
//	//for (i = 0, k = 0; k = 0; i++, k++) {//ѭ��0��
//	//	k++;
//	//}
//	//printf("%d %d", i, k);//0, 0
//
//	for (int i = 1; i <= 10; i++) {
//		printf("%d ", i);//��ѭ����ӡһ��1Ȼ��ȫ��6
//		i = 5;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("hehe ");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//int i = 1;
//	//do
//	//{
//	//	printf("%d ", i);
//	//	i++;
//	//} while (i <= 10);
//
//	//int i = 1;
//	//do
//	//{
//	//	if (5 == i) {
//	//		break;
//	//	}
//	//	printf("%d ", i);//1 2 3 4
//	//	i++;
//	//} while (i <= 10);
//
//	int i = 1;
//	do
//	{
//		if (5 == i) {
//			continue;
//		}
//		printf("%d ", i);//��ӡ1 2 3 4Ȼ����������ѭ��
//		i++;
//	} while (i <= 10);
//	return 0;
//}
//#include <stdio.h>
//int Factorial(int n) {
//	int res = 1;
//	int i = 0;
//	for (i = 2; i <= n; i++) {
//		res *= i;
//	}
//	return res;
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int fact = Factorial(n);
//	printf("%d! = %d\n", n, fact);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//void Test1() {
//	int n = 0;
//	int sum = 0;
//	int fact = 1;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		fact = 1;//����n�Ľ׳�֮ǰ��fact��ֵΪ1
//		for (int j = 1; j <= i; j++) {
//			fact *= j;
//		}
//		sum += fact;
//	}
//	printf("sum = %d\n", sum);
//}
//void Test2() {
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	int fact = 1;
//	for (i = 1; i <= n; i++) {
//		fact *= i;
//		sum += fact;
//	}
//	printf("sum = %d\n", sum);
//}
//void Test3() {
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//���ֲ���/�۰����ǰ������������
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	int findData = 0;
//	scanf("%d", &findData);
//	int l = 0;
//	int r = sz - 1;
//	int midIdx = 0;
//	while (l <= r) {//�۰����/���ֲ���	ʱ�临�Ӷ�O(logN)
//		midIdx = (l & r) + ((l ^ r) >> 1);
//		if (arr[midIdx] == findData) {
//			break;
//		}
//		else if (arr[midIdx] > findData) {
//			r = midIdx - 1;
//		}
//		else {
//			l = midIdx + 1;
//		}
//	}
//	if (l <= r) {
//		printf("�ҵ���%d,�±�Ϊ%d\n", findData, midIdx);
//	}
//	else {
//		printf("find none\n");
//	}
//}
//void Test4() {
//	char buff1[] = "Welcom to DC!!!";
//	char buff2[] = "###############";
//	int len = (int)strlen(buff1);
//	int l = 0;
//	int r = len - 1;
//	printf("%s\r", buff2);
//	while (l <= r) {
//		buff2[l] = buff1[l];
//		buff2[r] = buff1[r];
//		l++;
//		r--;
//		Sleep(1000);
//		printf("%s\r", buff2);
//	}
//	printf("\n");
//}
//void Test5() {
//	char arr1[] = "Welcom to China!!!";
//	char arr2[] = "##################";
//	int l = 0;
//	int r = (int)strlen(arr2) - 1;
//	puts(arr2);
//	while (l <= r) {
//		Sleep(1000);//����1��,��windows.hͷ�ļ���
//		system("cls");//�����Ļ
//		arr2[l] = arr1[l];
//		arr2[r] = arr1[r];
//		puts(arr2);
//		l++;
//		r--;
//	}
//}
//void Test6() {
//	char passwd[20] = "";
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		printf("����������:>");
//		scanf("%s", passwd);
//		//������ȷ���������ַ���"123456",��if (passwd == "123456") ���ֱȽϷ�ʽ�Ǵ����
//		if (!strcmp(passwd, "123456")) {//�����ַ����Ƚϲ���ʹ��==,Ӧ��ʹ���ַ����ȽϺ���strcmp
//			break;
//		}
//		else {
//			if (2 - i != 0) {
//				printf("����������������,������%d�λ���,����������!\n", 2 - i);
//			}
//			else {
//				printf("���ź�,��������������,����ʧ��!\n");
//				exit(-1);
//			}
//		}
//	}
//	printf("Welcom to login!\n");
//}
//void Test7() {
//	int i = 0;
//	char passwd[20] = "";
//	for (i = 0; i < 3; i++) {
//		printf("����������:>");
//		scanf("%s", passwd);
//		if (!strcmp(passwd, "123456")) {
//			printf("��ӭ��½!\n");
//			break;
//		}
//		else {
//			if (0 != 2 - i) {
//				printf("�����������,��������������!\n");
//			}
//		}
//	}
//	if (3 == i) {
//		printf("��¼ʧ��!");
//		exit(-1);
//	}
//}
//int main() {
//	//Test1();
//	//Test2();
//	//Test3();
//	//Test4();
//	//Test5();
//	//Test6();
//	//Test7();
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void Menu() {
//	printf("*************************\n");
//	printf("*****  1.Play Game  *****\n");
//	printf("*****  0.Exit Game  *****\n");
//	printf("*************************\n");
//}
//void Game() {
//	int num = rand() % 1024 + 1;
//	int guess = 0;
//	int count = 0;
//	while (1) {
//		count++;
//		printf("���������µ�����:>");
//		scanf("%d", &guess);
//		if (guess == num) {
//			printf("��ϲ��%d�ξͲ¶���,������־���%d\n", count, guess);
//			break;
//		}
//		else if (guess < num) {
//			printf("��С��!\n");
//		}
//		else {
//			printf("�´���!\n");
//		}
//	}
//}
//int main() {
//	srand((size_t)time(NULL));
//	int input = 0;
//	do{
//		Menu();
//		printf("����������ѡ��<1/0>:");
//		scanf("%d", &input);
//		switch (input) {
//		case 0:
//			printf("�˳���Ϸing!\n");
//			break;
//		case 1:
//			printf("���ڽ�����Ϸ!\n");
//			Game();
//			//printf("Game()\n");
//			printf("Ҫ��Ҫ����һ��!\n");
//			break;
//		default:
//			printf("���������������,����������!\n");
//			break;
//		}
//	} while (input);
//	printf("���˳���Ϸ!\n");
//	return 0;
//}
//дһ����������Ϸ,�����Ϸ���Զ�����һ��1~100֮��������,Ȼ����ȥ������(�¶��˾͹�ϲ����Ϸ����,�´��˸�����´��˻��ǲ�С��Ȼ�������ֱ���¶�Ϊֹ),��Ϸ����һֱ��,�����˳���Ϸ
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void Menu() {
//	printf("***********************\n");
//	printf("***   1.Play Game   ***\n");
//	printf("***   0.Exit Game   ***\n");
//	printf("***********************\n");
//}
//void Game() {
//	//��������Ϸʵ��:1.���������	rand��������һ��0~32767֮�������
//	int num = rand() % 100 + 1;//%100��������0~99,Ȼ��+1��Χ����1~100
//	int guess = 0;
//	int count = 0;
//	while (1) {//������,һֱ��,��������ѭ��
//		count++;
//		printf("���������µ�����:>");
//		scanf("%d", &guess);
//		if (guess == num) {
//			printf("��ϲ��%d�ξͲ³����������%d!\n", count, num);
//			break;
//		}
//		else if (guess < num) {
//			printf("��С��!\n");
//		}
//		else {
//			printf("�´���!\n");
//		}
//	}
//}
//int main() {
//	int input = 0;
//	srand((size_t)time(NULL));
//	do
//	{
//		Menu();
//		printf("����������ѡ��<1/0>:");
//		scanf("%d", &input);
//		switch (input) {
//		case 0:
//			printf("�˳���Ϸing!\n");
//			break;
//		case 1:
//			Game();
//			printf("����һ����?\n");
//			break;
//		default:
//			printf("�������ѡ������,����������!\n");
//			break;
//		}
//	} while (input);
//	printf("���˳���Ϸ!\n");
//	return 0;
//}
//#include <stdio.h>
//void Test1() {
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		if (i = 5) {
//			printf("%d ", i);//��ѭ����ӡ5
//		}
//	}
//}
//int Func(int a) {
//	int b;
//	switch (a){
//	case 1: b = 30;
//	case 2: b = 20;
//	case 3: b = 16;
//	default: b = 0;
//	}
//	return b;
//}
//int main() {
//	//Test1();
//	//����Ҳ����ʽ,��:3;5;
//	printf("%d\n", Func(1));//0
//	//f11�����,f10�����
//	return 0;
//}
//#include <assert.h>
//#include <stdio.h>
//#include <stdbool.h>
//#include <math.h>
//const double Eps = 1e-6;
//void Test1() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y) {
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}//hellothird
//}
//void Test2() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b && b > c) {
//		printf("%d %d %d", a, b, c);
//	}
//	else if (a < b && b < c) {
//		printf("%d %d %d", c, b, a);
//	}
//	else if (a > c && c > b) {
//		printf("%d %d %d", a, c, b);
//	}
//	else if (b > a && a > c) {
//		printf("%d %d %d", b, a, c);
//	}
//	else if (b > c && c > a) {
//		printf("%d %d %d", b, c, a);
//	}
//	else if (c > b && b < a) {
//		printf("%d %d %d", c, a, b);
//	}
//}
//void MySwap(int* pa, int* pb) {
//	assert(pa != NULL && pb != NULL);
//	*pa ^= *pb;
//	*pb ^= *pa;
//	*pa ^= *pb;
//}
//void Test3() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)	MySwap(&a, &b);
//	if (a < c)	MySwap(&a, &c);
//	if (b < c)	MySwap(&b, &c);
//	printf("%d %d %d\n", a, b, c);
//}
//void Test4() {
//	//int i = 0;
//	//for (i = 1; i <= 100; i++) {
//	//	if (!(i % 3)) {
//	//		printf("%d ", i);
//	//	}
//	//}
//
//	int i = 0;
//	for (i = 1; i <= 100; i++) {
//		if (i % 3) {
//			continue;
//		}
//		printf("%d ", i);
//	}
//}
//int gcd(int m, int n) {
//	if (!n) {
//		return m;
//	}
//	else {
//		return gcd(n, m % n);
//	}
//}
//void Test5() {
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int g = gcd(m, n);
//	int tmp = m * n / g;
//	printf("%d, %d\n", g, tmp);
//}
//void Test6() {
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int res1 = m < n ? m : n;
//	int res2 = m > n ? m : n;
//	while (1) {
//		if (m % res1 == 0 && n % res1 == 0) {
//			printf("%d\n", res1);
//			break;
//		}
//		res1--;
//	}
//	while (1) {
//		if (res2 % m == 0 && res2 % n == 0) {
//			printf("%d\n", res2);
//			break;
//		}
//		res2++;
//	}
//}
//void Test7() {
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int m1 = m;
//	int n1 = n;
//	int r = 0;
//	while (n) {
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d %d\n", m, m1 * n1 / m);//��С������==m*n/���Լ��
//}
//void Test8() {
//	int year = 1000;
//	int count = 0;
//	while (year <= 2000) {
//		if ((!(year % 4) && (year % 100)) || !(year % 400)) {
//			printf("%d ", year);
//			count++;
//		}
//		year++;
//	}
//	printf("\n");
//	printf("count = %d\n", count);
//}
//void Test9() {
//	int count = 0;
//	int num = 0;
//	int tmp = 0;
//	bool is_prime_num = true;
//	for (num = 101; num <= 200; num += 2) {
//		tmp = (int)(sqrt(num) + Eps);
//		is_prime_num = true;
//		int j = 0;
//		for (j = 2; j <= tmp; j++) {
//			if (num % j == 0) {
//				is_prime_num = false;
//				break;
//			}
//		}
//		if (is_prime_num) {
//			printf("%d is prime num!\n", num);
//			count++;
//		}
//	}
//	printf("==================================\n");
//	printf("count = %d\n", count);
//}
//int main() {
//	//Test1();
//	//Test2();
//	//Test3();
//	//Test4();
//	//Test5();
//	//Test6();
//	//Test7();
//	//Test8();
//	//Test9();
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <windows.h>
//void Test0() {//��ѭ����ӡhehe
//flag:
//	printf("hehe\n");
//	printf("hehe\n");
//	goto flag;
//}
//const char* res = "������";
//void Test1() {
//	char input[20] = "";
//	system("shutdown -s -t 60");
//	//printf("�ػ�\n");
//Again:
//	printf("���ĵ��Խ���60���ػ�,����\"������\"�����ȡ���ػ�!\n");
//	scanf("%s", input);
//	if (!strcmp(input, res)) {
//		printf("��԰�,�ػ������Ѿ�ȡ��\n");
//		system("shutdown -a");
//		//printf("ȡ���ػ�!\n");
//	}
//	else {
//		printf("�㲻��Ŷ,��ֻ��60��ʱ���!\n");
//		goto Again;
//	}
//	printf("��ӭ��¼!\n");
//}
//void Test2() {
//	char input[20] = "";
//	system("shutdown -s -t 60");
//	while (1) {
//		printf("���ĵ��Խ���60���ػ�,������\"������\"��ȡ���ػ�!\n");
//		scanf("%s", input);
//		if (!strcmp(input, res)) {
//			printf("���,�ػ���ȡ��!\n");
//			system("shutdown -a");
//			break;
//		}
//		else {
//			printf("�㲻��Ŷ,��ֻ��60��ʱ��Ŷ!\n");
//		}
//	}
//	printf("��ӭ��½\n");
//}
//int main() {
//	//Test0();
//	//goto���,C�����ṩ�˿����������õ�goto���ͱ����ת�ı��,����������˵goto�����û�б�Ҫ��,ʵ����û��goto���Ҳ���Ժ����׵�д������,����ĳЩ������goto��仹���õ��ŵ�,������÷�������ֹ������ĳЩ���Ƕ�׵Ľṹ�Ĵ������,����һ�������������ѭ��,���������ʹ��break�Ǵﲻ��Ŀ�ĵ�,��ֻ�ܴ����ڲ�ѭ���˳�����һ��ѭ��,������ʹ��goto����һ������:
//	Test1();
//	//Test2();
//	//goto��������ô����������ѭ���ͼ���ʽ������
//	//ע��goto���ֻ���ڱ������ڽ�����ת,���ܿ纯����ת
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main() {
//	char arr1[20] = "";
//	char arr2[] = "Hello World!";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);//��ӡarr1����ַ��� ��%s---���ַ����ĸ�ʽ��ӡ
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main() {
//	char arr[] = "hello world!";
//	puts(memset(arr, 'x', 5 * sizeof(char)));//memset������string.hͷ�ļ���
//	printf("%s\n", arr);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main() {
//	char arr1[20] = "";
//	char arr2[] = "abc";
//	puts(strcpy(arr1, arr2));
//	puts(arr1);
//	return 0;
//}
//#include <stdio.h>
//int get_max(int x, int y) {//��������
//	return ((x > y) ? (x) : (y));
//}
//int main() {
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int max = get_max(num1, num2);//��������
//	printf("max = %d\n", max);
//	return 0;
//}
//#include <stdio.h>
//#include <assert.h>
////�β�ʵ�������β��൱��ʵ�ε�һ����ʱ����,�ı��ββ���Ӱ��ʵ��
//void MySwap1(int x, int y) {
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//void MySwap2(int* pa, int* pb) {
//	assert(pa && pb);
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	printf("����ǰ: a = %d, b = %d\n", a, b);
//	MySwap1(a, b);//��ֵ����
//	printf("������: a = %d, b = %d\n", a, b);
//	MySwap2(&a, &b);//��ַ����
//	printf("������: a = %d, b = %d\n", a, b);
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//#include <assert.h>
//#include <stdbool.h>
//const double Eps = 1e-6;
//bool is_prime_num(int num) {
//	int tmp = (int)(sqrt(num) + Eps);
//	int i = 0;
//	for (i = 2; i <= tmp; i++) {
//		if (!(num % i)) {
//			return false;
//		}
//	}
//	return true;
//}
//void Test1() {
//	int num = 0;
//	scanf("%d", &num);
//	if (is_prime_num(num)) {
//		printf("%d is prime num!\n", num);
//	}
//	else {
//		printf("%d is not prime num!\n", num);
//	}
//}
//void Test2() {
//	int num = 0;
//	int count = 0;
//	for (num = 101; num <= 199; num += 2) {
//		if (is_prime_num(num)) {
//			count++;
//			printf("%d is prime num!\n", num);
//		}
//	}
//	printf("=================\ncount = %d\n", count);
//}
//bool is_leap_year(int year) {
//	return ((!(year % 400)) || ((!(year % 4)) && (year % 100)));
//}
//void Test3() {
//	int year = 0;
//	int c = 0;
//	for (year = 1000; year <= 2000; year += 4) {
//		if (is_leap_year(year)) {
//			c++;
//			printf("%d ", year);
//		}
//	}
//	printf("\nc = %d\n", c);
//}
//int binary_search(int* pa, int n, int k) {
//	assert(pa != NULL);
//	int l = 0;
//	int r = n;
//	int mid = 0;
//	while (l < r) {
//		mid = (l & r) + ((l ^ r) >> 1);
//		if (pa[mid] > k) {
//			r = mid;
//		}
//		else if (pa[mid] < k) {
//			l = mid + 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;
//}
//void Test4() {
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int n = (int)(sizeof(arr) / sizeof(arr[0]));
//	int k = 8;
//	int res = binary_search(arr, n, k);
//	if (-1 == res) {
//		printf("û�����������ҵ�%d\n", k);
//	}
//	else {
//		printf("�ҵ���%d,�±�Ϊ%d\n", k, res);
//	}
//}
//void Inc(int* pn) {
//	assert(pn != NULL);
//	(*pn)++;
//}
//void Test5() {
//	int num = 0;
//	for (int i = 0; i < 5; i++) {
//		Inc(&num);
//		printf("num = %d\n", num);
//	}
//}
//int main() {
//	//Test1();
//	//Test2();
//	//Test3();
//	//Test4();
//	//Test5();
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//void new_line() {
//	printf("hehe\n");
//}
//void tree_line() {
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		new_line();
//	}
//}
//void Test1() {
//	tree_line();
//}
//void Test2() {
//	char arr[20] = "hello";
//	int ret = (int)strlen(strcat(arr, "world!"));//11
//	printf("%d\n", ret);
//}
//void Test3() {
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//}
//int Mul(int, int);//��������
//int main() {
//	//Test1();//Ƕ�׵���:��ӡ����hehe
//	//ע��:��������Ƕ�׶���,���Ǻ�������Ƕ�׵���
//	//Test2();//��ʽ����
//	//Test3();
//	int a = 10;
//	int b = 20;
//	int c = Mul(a, b);
//	printf("c = %d\n", c);
//	return 0;
//}
//int Mul(int a, int b) {//��������
//	return a * b;
//}
//#include <stdio.h>
//#include "And.h"
//#include "Sub.h"
//#include "Mul.h"
//#include "Div.h"
//int main() {
//	int a = 10;
//	int b = 20;
//	printf("%d\n", And(a, b));
//	printf("%d\n", Sub(a, b));
//	printf("%d\n", Mul(a, b));
//	printf("%d\n", Div(a, 0));
//	return 0;
//}
//#include <stdio.h>
//int main() {//���ݹ�,�ݹ��ӡhehe
//	printf("hehe\n");
//	main();
//	return 0;
//}
//#include <assert.h>
//#include <stdio.h>
//#include <string.h>
//void Print(size_t num) {//�ݹ��Ǻ���ֱ�ӻ����Լ������Լ���һ�ּ���
//	if (num >= 10) {
//		Print(num / 10);
//	}
//	printf("%u ", num % 10);
//}
//void Test1() {
//	size_t num = 0;
//	scanf("%u", &num);
//	Print(num);//Print�������Դ�ӡ�����������ֵ�ÿһλ
//}
//void test(int n) {//ջ�����
//	if (n < 100000) {//�ݹ��������,stack overflow��
//		test(n + 1);
//	}
//}
//void Test2() {
//	test(1);
//}
//size_t _my_strlen(const char* str) {
//	assert(str != NULL);
//	size_t res = 0;
//	while (*str++) {
//		res++;
//	}
//	return res;
//}
//size_t my_strlen(const char* str) {
//	assert(str != NULL);
//	if (!*str) {
//		return 0;
//	}
//	else {
//		return (1 + my_strlen(str + 1));
//	}
//}
//size_t MyStrlen(const char* str) {
//	assert(str != NULL);
//	const char* eos = str;
//	while (*eos++) {
//		;
//	}
//	return (eos - str - 1);
//}
//void Test3() {
//	char arr[] = "abc";
//	printf("%d\n", (int)strlen(arr));//3
//	//ģ��ʵ��һ��strlen���������ַ�������
//	printf("%d\n", (int)_my_strlen(arr));//3
//	printf("%d\n", (int)my_strlen(arr));//3
//	printf("%d\n", (int)MyStrlen(arr));
//}
//int Factorial(int n) {
//	if (n <= 1) {
//		return 1;
//	}
//	else {
//		return (n * Factorial(n - 1));
//	}
//}
//int Factorial1(int n) {
//	int i = 2;
//	int res = 1;
//	while (i <= n) {
//		res *= i;
//		i++;
//	}
//	return res;
//}
//void Test4() {//��Щ���ܿ���ʹ�õ����ķ�ʽȥд,Ҳ����ʹ�õݹ�ķ�ʽȥд
//	int n = 0;
//	scanf("%d", &n);
//	int fact = Factorial(n);
//	printf("fact = %d\n", fact);
//}
//int g_count = 0;
//int Fibonacci(int n) {//�ݹ鷨��쳲�������Ч��̫����,ʱ�临�Ӷ�O(2^N),�ռ临�Ӷ�O(N),�����˴����ظ��ļ���
//	if (3 == n) {
//		g_count++;
//	}
//	if (1 == n || 2 == n) {
//		return 1;
//	}
//	else {
//		return (Fibonacci(n - 1) + Fibonacci(n - 2));
//	}
//}
//int Fibonacci1(int n) {
//	if (!n)	return n;
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n > 2) {
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return b;
//}
//void Test5() {
//	int n = 0;
//	scanf("%d", &n);
//	int fib = Fibonacci1(n);
//	printf("fib = %d\n", fib);
//	printf("g_count = %d\n", g_count);//�������ֵ��40ʱ,g_count������ǧ��,��Fibnoccia(3)��һ������˽���ǧ���
//}
//int main() {
//	//д�ݹ�ʱ�������ݹ�,������������,ÿ�εݹ�ƽ���������,�ݹ��������̫��(̫������ջ�������)
//	//Test1();
//	//Test2();
//	//Test3();
//	//Test4();
//	//Test5();
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//#include <assert.h>
//#include <stdbool.h>
//void Test1() {
//	int a = 0;
//	int b = 0;
//	for (a = 1, b = 1; a <= 100; a++) {
//		if (b >= 20)	break;
//		if (b % 3 == 1) {
//			b += 3;
//			continue;
//		}
//		b -= 5;
//	}
//	//printf("%d\n", b);//22
//	printf("%d\n", a);//8
//}
//void Test2() {
//	int i = 0;
//	int c = 0;
//	for (i = 1; i <= 100; i++) {
//		if (9 == i % 10)	c++;
//		if (9 == i / 10)	c++;
//	}
//	printf("%d\n", c);
//}
//void Test3() {
//	double sum = 0.0;
//	double flag = 1.0;
//	int i = 0;
//	for (i = 1; i <= 100; i++) {
//		sum += flag / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//}
//int get_arr_max(int arr[], int n) {
//	assert(arr != NULL);
//	int idx = 0;
//	int i = 0;
//	for (i = 1; i < n; i++) {
//		if (arr[idx] < arr[i]) {
//			idx = i;
//		}
//	}
//	return arr[idx];
//}
//void Test4() {
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int max = get_arr_max(arr, 10);
//	printf("%d\n", max);
//}
//void Test5() {
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%d * %d = %-2d	", j, i, j * i);
//		}
//		putchar(10);
//	}
//}
//const double Eps = 1e-6;
//bool is_prime_num(int num) {
//	int tmp = (int)(sqrt(num) + Eps);
//	int i = 0;
//	for (i = 2; i <= tmp; i++) {
//		if (!(num % i)) {
//			return false;
//		}
//	}
//	return true;
//}
//void Test6() {
//	int num = 101;
//	int c = 0;
//	while (num <= 199) {
//		if (is_prime_num(num)) {
//			printf("%d ", num);
//			c++;
//		}
//		num += 2;
//	}
//	printf("\n%d\n", c);
//}
//int binary_search(int* pa, int n, int k) {
//	assert(pa != NULL);
//	int l = 0;
//	int r = n - 1;
//	while (l <= r) {
//		int mid = (l & r) + ((l ^ r) >> 1);
//		if (pa[mid] == k) {
//			return mid;
//		}
//		else if (pa[mid] > k) {
//			r = mid - 1;
//		}
//		else {
//			l = mid + 1;
//		}
//	}
//	return -1;
//}
//void Test7() {
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int n = (int)(sizeof(arr) / sizeof(*arr));
//	for (int k = 0; k < 12; k++)
//	{
//		int res = binary_search(arr, n, k);
//		if (res == -1) {
//			printf("û�ҵ�%d\n", k);
//		}
//		else {
//			printf("�ҵ���%d,�±���%d\n", k, res);
//		}
//	}
//}
//int main() {
//	//Test1();
//	//Test2();
//	//Test3();
//	//Test4();
//	//Test5();
//	//Test6();
//	//Test7();
//	return 0;
//}
//#include <stdio.h>
//#include <stdbool.h>
//#include <string.h>
//#include <assert.h>
//bool is_leap_year(int y) {
//	return (!(y % 400)) || (!(y % 4) && (y % 100));
//}
//void Test1() {
//	int year = 0;
//	scanf("%d", &year);
//	if (is_leap_year(year)) {
//		printf("yes!\n");
//	}
//	else {
//		printf("no!\n");
//	}
//}
//void _my_swap(int* pa, int* pb) {
//	assert(pa != NULL && pb != NULL);
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//void my_swap(int* pa, int* pb) {
//	assert(pa != NULL && pb != NULL);
//	*pa = *pa + *pb;
//	*pb = *pa - *pb;
//	*pa = *pa - *pb;
//}
//void MySwap(int* pa, int* pb) {
//	assert(pa != NULL && pb != NULL);
//	*pa ^= *pb;
//	*pb ^= *pa;
//	*pa ^= *pb;
//}
//void Test2() {
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("����ǰ: a = %d, b = %d\n", a, b);
//	MySwap(&a, &b);
//	printf("������: a = %d, b = %d\n", a, b);
//}
//void print_table(int n) {
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%-2d * %-2d = %-2d	", j, i, j * i);
//		}
//		puts("");
//	}
//}
//void Test3() {
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//}
//int Func(int n) {
//	if (5 == n) {
//		return 2;
//	}
//	else {
//		return 2 * Func(n + 1);
//	}
//}
//void Test4() {
//	printf("%d\n", Func(2));
//}
//void Print(int n) {
//	if (n > 9) {
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//void Test5() {
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//}
//int Factorial(int n) {
//	int res = 1;
//	for (int i = 2; i <= n; i++) {
//		res *= i;
//	}
//	return res;
//}
//int Factorial1(int n) {
//	if (n <= 1)	return 1;
//	else  return (n * Factorial1(n - 1));
//}
//void Test6() {
//	int n = 0;
//	scanf("%d", &n);
//	int fact = Factorial1(n);
//	printf("%d\n", fact);
//}
//size_t MyStrlen(const char* str) {
//	assert(str != NULL);
//	if (*str) {
//		return (1 + MyStrlen(str + 1));
//	}
//	else {
//		return 0;
//	}
//}
//void order_reverse_string(char* str) {
//	assert(str != NULL);
//	int l = 0;
//	int r = (int)MyStrlen(str) - 1;
//	while (l < r) {
//		char tmp = str[l];
//		str[l] = str[r];
//		str[r] = tmp;
//		l++;
//		r--;
//	}
//}
//void recur_reverse_string(char* str) {
//	assert(str != NULL);
//	int r = (int)MyStrlen(str) - 1;
//	char tmp = str[0];
//	str[0] = str[r];
//	str[r] = '\0';
//	if ((int)MyStrlen(str + 1) >= 2) {
//		recur_reverse_string(str + 1);
//	}
//	str[r] = tmp;
//}
//void Test7() {
//	char arr[20] = "abcdef";
//	printf("%s\n", arr);
//	order_reverse_string(arr);
//	printf("%s\n", arr);
//	recur_reverse_string(arr);
//	printf("%s\n", arr);
//}
//size_t DigitSum(size_t n) {
//	size_t sum = 0;
//	if (n > 9) {
//		sum += DigitSum(n / 10);
//	}
//	sum += n % 10;
//	return sum;
//}
//void Test8() {
//	size_t n = 0;
//	scanf("%u", &n);
//	printf("%u\n", DigitSum(n));
//}
//double Pow(int n, int k) {
//	if (0 == k) {
//		return	1.0;
//	}
//	else if (k > 0) {
//		return Pow(n, k - 1) * n;
//	}
//	else {
//		return (1.0 / Pow(n, -k));
//	}
//}
//void Test9() {
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	if (n != 0) {
//		printf("%d^%d = %lf\n", n, k, Pow(n, k));
//	}
//	else {
//		printf("Error!\n");
//	}
//}
//int Fibonacci1(int n) {
//	if (!n)	return 0;
//	int a = 0;
//	int b = 1;
//	int c = 0;
//	while (n >= 2) {
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return b;
//}
//int Fibonacci(int n) {
//	if (n <= 1)	return n;
//	else return (Fibonacci(n - 1) + Fibonacci(n - 2));
//}
//void Test10() {
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Fibonacci1(n));
//}
//int main() {
//	//�ݹ��������Ҫ���Ǵ��»�СС�»��˵�˼·
//	//Test1();
//	//Test2();
//	//Test3();
//	//Test4();
//	//Test5();
//	//Test6();
//	//Test7();
//	//Test8();
//	//Test9();
//	//Test10();
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main() {
//	//�������һ����,һ����ͬ����Ԫ�صļ���
//	//int arr[10];
//	//char ch[5];
//
//	//int n = 8;
//	//int arr[n];//vs��err,����C99֧�ֵı䳤����(����Ĵ�С�Ǳ���)
//
//	//int arr[10];
//	//int count = 10;
//	//int arr[count];//err
//	//char arr3[10];
//	//float arr4[1];
//	//double arr5[20];
//
//	//����ĳ�ʼ��,����ĳ�ʼ����ָ,�ڴ��������ͬʱ�����������һЩ����ĳ�ʼֵ(��ʼ��)
//	//int arr1[10] = { 1, 2, 3 };
//	//int arr2[] = { 1, 2, 3, 4 };
//	//int arr3[5] = { 1, 2, 3, 4, 5 };
//	//char arr4[3] = { 'a', 98, 'c' };
//	//char arr5[] = { 'a', 'b', 'c' };
//	//char arr6[] = "abcdef";
//	//char ch[5] = { 'b', 'i', 't' };
//	//char ch1[] = { 'b', 'i', 't' };
//	////puts(ch);
//	//char str1[5] = "bit";
//	//char str2[] = "bit";
//
//	char ch5[] = "bit";
//	char ch6[] = { 'b', 'i', 't' };
//	printf("%d, %d\n", sizeof(ch5), sizeof(ch6));//4 3
//	printf("%s\n", ch5);//bit
//	printf("%s\n", ch6);//bit+����
//	printf("%d, %d\n", (int)strlen(ch5), (int)strlen(ch6));//3, >=3
//	return 0;
//}
//#include <stdio.h>
//void Test1() {
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	for (i = 0; i < sz; i++) {
//		arr[i] = i;//�����[]�����±����ò�����
//	}
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Test2() {
//	//printf("%x\n", 0x12);
//	//printf("%p\n", 0x12);
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	//for (i = 9; i >= 0; i--) {
//		//printf("&arr[%d] <==> 0X%p\n", i, &arr[i]);
//	//}
//	//�۲��ӡ�������֪��,���������±������,Ԫ�صĵ�ַҲ���й��ɵ��ɵ͵��ߵ���,�ɴ˿��Եó�����:�������ڴ�����������ŵ�
//
//	//int(*p)[5] = (int(*)[5])arr;
//	//int j = 0;
//	//for (i = 0; i < (int)(sizeof(arr) / sizeof(int[5])); i++) {//�ö�ά����ķ��ʷ�ʽ����һά����
//	//	for (j = 0; j < 5; j++) {
//	//		printf("%d ", p[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	int* pa = arr;//��������������Ԫ�صĵ�ַ,��&arr[0],��ָ��������int*��
//	for (i = 0; i < 10; i++) {
//		printf("%d ", *pa);
//		pa++;
//	}
//}
//int main() {
//	//Test1();
//	//Test2();
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	//��ά����Ĵ������ʼ��
//	//int arr1[3][4];
//	//char arr2[3][5];
//	//double arr3[2][4];
//	//int arr4[3][4] = { 1, 2, 3, 4 };
//	//int arr5[3][4] = { { 1, 2 }, { 4, 5 } };
//	//int arr6[][4] = { { 2, 3 }, { 4, 5 } };
//	//int arr[][4] = { { 1, 2 }, { 3, 4 }, { 4, 5 } };
//	//��ά�����ʹ��Ҳ��ͨ���±�ķ�ʽ
//	//int arr[3][4] = { 0 };
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0; i < 3; i++) {
//	//	for (j = 0; j < 4; j++) {
//	//		arr[i][j] = i * 4 + j;
//	//	}
//	//}
//	//for (i = 0; i < 3; i++) {
//	//	for (j = 0; j < 4; j++) {
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//	//��ά�������ڴ��еĴ洢:��һά����һ��,�������ǳ��Դ�ӡ��ά�����ÿ��Ԫ��
//	//int arr[3][4] = { 0 };
//	//int i = 0;
//	//int j = 0;
//	//for (i = 2; i >= 0; i--) {
//	//	for (j = 3; j >= 0; j--) {
//	//		printf("&arr[%d][%d]<===>0x%p\n", i, j, &arr[i][j]);
//	//	}
//	//	putchar(10);
//	//}
//	//ͨ����ӡ������ǿ��Է�����:��ʵ��ά�������ڴ���Ҳ�������洢��,�����±������,����Ԫ�صĵ�ַ�ɵͱ��
//	int arr[][4] = { { 1, 2 }, { 3, 4 }, { 4, 5 } };
//	int R = (int)(sizeof(arr) / sizeof(arr[0]));
//	int* p = (int*)arr;
//	int i = 0;
//	for (i = 0; i < R * 4; i++) {//��һά����ķ�ʽ��ӡ��ά���������
//		printf("%d ", p[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <stdbool.h>
//#include <assert.h>
//void bubble_sort1(int arr[]) {
//	assert(arr != NULL);
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));//����������Ľ����1��2,��������
//	int i = 0;
//	bool flag = false;
//	for (i = 0; i < sz - 1; i++) {
//		flag = false;
//		for (int j = 0; j < sz - 1 - i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = true;
//			}
//		}
//		if (!flag) {
//			break;
//		}
//	}
//}
//void Test1() {
//	int arr[] = { 3, 1, 7, 5, 8, 9, 0, 2, 4, 6 };
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	bubble_sort1(arr);//�Ƿ������������?	��:��
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//}
//void Test2() {
//	//��������ʲô?
//	int arr[10] = { 1, 2, 3, 4, 5 };
//	printf("0X%p, 0X%p\n", arr, arr + 1);
//	printf("0X%p, 0X%p\n", &arr[0], &arr[0] + 1);
//	printf("0X%p, 0X%p\n", &arr, &arr + 1);
//	printf("%d\n", *arr);
//	//����:��������������Ԫ�صĵ�ַ,����sizeof(������)��&��������������������������ʾ��������
//	printf("%d\n", (int)sizeof(arr));
//}
//void bubble_sort2(int arr[], int sz) {
//	assert(arr != NULL);
//	int i = 0;
//	int j = 0;
//	bool flag = false;
//	for (i = 0; i < sz - 1; i++) {
//		flag = false;
//		for (j = 0; j < sz - 1 - i; j++) {
//			if (arr[j] > arr[j + 1]) {//������
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = true;
//			}
//		}
//		if (!flag) {
//			break;
//		}
//	}
//}
//void Test3() {
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 10, 9 };
//	//int arr[] = { 3, 1, 7, 5, 8, 9, 0, 2, 4, 6 };
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	bubble_sort2(arr, sz);//���Խ�������
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//}
//int main() {
//	//ð�������˼��:�������ڵ�Ԫ�ؽ��бȽ�,���ҿ��ܵĻ���Ҫ����
//	//ð���������ȶ���,ʱ�临�Ӷ�O(N^2),��������O(N),�ռ临�Ӷ�O(1)
//	//Test1();
//	//Test2();
//	Test3();
//	return 0;
//}
//��������Ϸ: test.c:������Ϸ�߼��Ĵ��� treechess.h:������Ϸ��صĺ�������,��������,ͷ�ļ����� treechess.c:��Ϸ��صĺ�����ʵ��
//#include <stdio.h>
//#include "threechess.h"
//void test() {
//	int input = 0;
//	do {
//		//printf("�˵�\n");
//		Menu();
//		printf("����������ѡ��<0/1>:");
//		scanf("%d", &input);
//		switch (input) {
//		case 0:
//			printf("�����˳���������Ϸ!\n");
//			break;
//		case 1:
//			//printf("Game()\n");
//			ThreeChess();//��������Ϸ
//			printf("Ҫ��Ҫ����һ��?\n");
//			break;
//		default:
//			printf("���������������,����������!\n");
//			break;
//		}
//	} while (input);
//	printf("���˳���Ϸ!\n");
//}
//int main() {
//	srand((size_t)time(NULL));
//	test();
//	return 0;
//}
//ɨ����Ϸ: test.c:ɨ����Ϸ�Ĳ��� Mine.h:ɨ����Ϸ���������� Mine.c:ɨ����Ϸ������ʵ��
//#include "Mine.h"//˭��˭����
//void test() {
//	int input = 0;
//	do
//	{
//		Menu();
//		printf("����������ѡ��<0/1>:");
//		scanf("%d", &input);
//		switch (input) {
//		case 0:
//			printf("�����˳�ɨ����Ϸ!\n");
//			break;
//		case 1:
//			//printf("��ɨ����Ϸ!\n");
//			MineGame();
//			printf("Ҫ��Ҫ����һ��?\n");
//			break;
//		default:
//			printf("���������������,����������!\n");
//			break;
//		}
//	} while (input);
//	printf("���˳�ɨ����Ϸ,��ӭ�´�������Ϸ!\n");
//}
//int main() {
//	srand((size_t)time(NULL));
//	test();
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	//printf("%d\n", 3 / 5);
//	//printf("%d\n", 6 / 5);
//
//	//printf("%f\n", (float)(3 / 5));
//	//printf("%f\n", (float)(6 / 5));
//	//printf("%f\n", 6 / 5.0f);
//
//	//int a = 7 % 3;
//	//printf("a = %d\n", a);//1
//	//int b = 5 % 3.0;//err:%���˲��������붼������
//	//int c = 100 % 0;//err:%0�Ǵ����
//
//	//int a = 2;
//	//int b = a << 1;//���Ʋ�����,��߶���,�ұ߲���
//	//printf("a = %d, b = %d\n", a, b);//2, 4
//
//	//int a = 10;
//	//int b = a >> 1;//���Ʋ�����:
//	////1.��������:�ұ߶���,��߲�ԭ����λ 2.�߼�����:�ұ߶���,��߲�0
//	//printf("a = %d, b = %d\n", a, b);//10, 5
//
//	//int n = -1;
//	//n >>= 1;
//	//printf("n = %d\n", n);//-1
//	//size_t m = -1;
//	//m >>= 1;
//	//printf("m = %d\n", m);//21��
//	//����n��m���ƺ�Ĵ�ӡֵ,���ǿ��Է��ֳ��õ����������������ƹ���
//
//	//ע��:������λ�����,��Ҫ�ƶ�����λ,����Ǳ�׼δ�����.eg.
//	int num = 10;
//	num >> -1;//warning:Shift����Ϊ����,����Ϊδ����
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	//ע��: << >> ~ & | ^��Щ�����������������������
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	printf("c = %d\n", c);//1
//	c = a | b;
//	printf("c = %d\n", c);//7
//	c = a ^ b;
//	printf("c = %d\n", c);//6
//	return 0;
//}
//#include <stdio.h>
//void Test1() {
//	int a = 3;
//	int b = 5;
//	printf("����ǰ:a = %d, b = %d\n", a, b);
//	int c = 0;
//	c = a;
//	a = b;
//	b = c;
//	printf("������:a = %d, b = %d\n", a, b);
//}
//void Test2() {//���������
//	int a = 3;
//	int b = 5;
//	printf("����ǰ:a = %d, b = %d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("������:a = %d, b = %d\n", a, b);
//}
//void Test3() {
//	int a = 3;
//	int b = 5;
//	printf("����ǰ:a = %d, b = %d\n", a, b);
//	a ^= b;
//	b ^= a;
//	a ^= b;
//	printf("������:a = %d, b = %d\n", a, b);
//}
//int CountOfBinaryOne1(size_t num) {
//	int count = 0;
//	while (num) {
//		if (num % 2) {
//			count++;
//		}
//		num /= 2;
//	}
//	return count;
//}
//int CountOfBinaryOne2(int num) {
//	int count = 0;
//	int bits = 0;
//	for (bits = 0; bits < 32; bits++) {
//		if ((1 << bits) & num) {
//			count++;
//		}
//	}
//	return count;
//}
//int CountOfBinaryOne3(int num) {
//	int count = 0;
//	while (num) {
//		num &= (num - 1);
//		count++;
//	}
//	return count;
//}
//int CountOfBinaryOne(int num) {
//	int count = 0;
//	while (num) {
//		num = num - (num & (-num));
//		count++;
//	}
//	return count;
//}
//void Test4() {
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d\n", CountOfBinaryOne(num));
//}
//int main() {
//	//Test1();
//	//Test2();
//	//Test3();
//	//Test4();
//	//printf("%d\n", -1 ^ -2);//1
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	//00000000 00000000 00000000 00001101
//	//00000000 00000000 00000000 00010000
//	//------------------------------------|
//	//00000000 00000000 00000000 00011101
//
//	//00000000 00000000 00000000 00010000
//	//------------------------------------~
//	//11111111 11111111 11111111 11101111
//	//11111111 11111111 11111111 11101111
//	//00000000 00000000 00000000 00011101
//	//------------------------------------&
//	//00000000 00000000 00000000 00001101
//	int a = 13;
//	int b = (1 << 4) | a;
//	int c = (~(1 << 4)) & b;
//	printf("a = %d, b = %d, c = %d\n", a, b, c);
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	//int weight = 120;//����
//	//printf("%d\n", weight);
//	//weight = 89;
//	//printf("%d\n", weight);
//	//double salary = 10000.0;
//	//printf("%lf\n", salary);
//	//salary = 20000.0;
//	//printf("%lf\n", salary);
//
//	//int a = 10;
//	//int x = 0;
//	//int y = 20;
//	//a = x = y + 1;
//	//printf("a = %d, x = %d, y = %d\n", a, x, y);//21 21 20
//
//	//int a = 10;
//	//int x = 0;
//	//int y = 20;
//	//x = y + 1;
//	//a = x;
//	//printf("a = %d, x = %d, y = %d\n", a, x, y);//21 21 20
//
//	//���ϸ�ֵ�����: += -= *= /= %= <<= >>= &= |= ^=
//	//int x = 10;
//	//x = x + 10;
//	//printf("x = %d\n", x);//20
//	//x += 10;
//	//printf("x = %d\n", x);//30
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	//int flag = 0;
//	//printf("%d\n", !flag);//1
//	//flag = 1;
//	//printf("%d\n", !flag);//0
//
//	//int flag = 5;
//	//if (flag) {//���Ϊ���ӡ
//	//	printf("haha\n");
//	//}
//	//flag = 0;
//	//if (!flag) {//���Ϊ�ٴ�ӡ
//	//	printf("hehe\n");
//	//}
//
//	//int a = 10;
//	//a = -a;
//	//printf("a = %d\n", a);//-10
//	//a = -(-a);
//	//printf("a = %d\n", a);//-10
//	//a = --a;
//	//printf("a = %d\n", a);//-11
//
//	//int a = 10;
//	//printf("%d\n", sizeof(a));//4
//	//printf("%d\n", sizeof a);//4 ok--->֤��sizeof���Ǻ���,���ǲ�����
//	////printf("%d\n", sizeof int);//err
//	//printf("%d\n", sizeof(int));//4 ok--->֤��sizeof���Ǻ���,���ǲ�����
//	//int arr[10] = { 0 };
//	//printf("%d\n", sizeof(arr));//40
//	//printf("%d\n", sizeof(int[10]));//40	int[10]��������arr����������
//
//	//short s = 5;
//	//int a = 10;
//	//printf("%d\n", sizeof(s = a + 2));//2
//	//printf("%d\n", s);//5
//
//	//int a = -1;
//	//int b = ~a;
//	//printf("a = %d\n", a);//-1
//	//printf("b = %d\n", b);//0
//
//	//int a = 10;
//	//int b = a++;
//	//printf("a = %d, b = %d\n", a, b);//11 10
//
//	//int a = 10;
//	//int b = ++a;
//	//printf("a = %d, b = %d\n", a, b);//11 11
//
//	//int a = 10;
//	//int b = --a;
//	//printf("a = %d, b = %d\n", a, b);//9 9
//
//	//int a = 10;
//	//int b = a--;
//	//printf("a = %d, b = %d\n", a, b);//9 10
//
//	//int a = 10;
//	//printf("%d\n", a--);//10
//	//printf("%d\n", a);//9
//
//	//int a = 1;
//	//int b = (++a) + (++a) + (++a);
//	//printf("b = %d\n", b);//b = 12
//	return 0;
//}
//#include <stdio.h>
//void test1(int arr[]) {//2
//	printf("%d\n", sizeof(arr));//4/8
//}
//void test2(char ch[]) {//4
//	printf("%d\n", sizeof(ch));//4/8
//}
//int main() {
//	//int a = 10;
//	//printf("0X%p\n", &a);
//	//int* pa = &a;//pa��������ŵ�ַ��-pa����һ��ָ�����
//	//*pa = 20;//*-->�����ò�����/��ӷ��ʲ�����
//	//printf("%d\n", a);//20
//
//	//int a = 3.14;//double��int���ȶ�ʧ����
//	//int a = (int)3.14;//ok
//	//int a = -10;
//	//int* p = NULL;
//	//printf("%d\n", !2);
//	//printf("%d\n", !0);
//	//a = -a;
//	//p = &a;
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof a);
//	//printf("%d\n", sizeof int);//err
//
//	//int arr[10] = { 0 };
//	//char ch[10] = { 0 };
//	//printf("%d\n", sizeof(arr));//1		40
//	//printf("%d\n", sizeof(ch));//3		10
//	//test1(arr);
//	//test2(ch);
//
//	//> < >= <= == !=
//	//=�Ǹ�ֵ		==���ж����		�Ƚ������ַ�������ڷ���ʹ��==,Ӧ��ʹ��strcmp����
//
//	//&��������λ��	|��������λ��
//	//&&�߼���	||�߼���
//	//printf("%d\n", 1 & 2);//0
//	//printf("%d\n", 1 && 2);//1
//	//printf("%d\n", 1 | 2);//3
//	//printf("%d\n", 1 || 2);//1
//
//	//int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	//printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);//1 2 3 4
//	//printf("i = %d\n", i);//0
//
//	//int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ || ++b || d++;
//	//printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);//1 3 3 4
//	//printf("i = %d\n", i);//1
//
//	//int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	//printf("a - %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);//2 3 3 5
//	//printf("i = %d\n", i);//1
//
//	//int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ || ++b || d++;
//	//printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);//2 2 3 4
//	//printf("i = %d\n", i);//1
//
//	//? : ����������/��Ŀ������
//	//int a = 3;
//	//int b = 0;
//	//if (a > 5) {
//	//	b = 1;
//	//}
//	//else {
//	//	b = -1;
//	//}
//	//printf("b = %d\n", b);
//
//	//int a = 3;
//	//int b = (a > 5) ? 1 : -1;
//	//printf("b = %d\n", b);
//
//	//���ű��ʽ:�����ö��Ÿ����Ķ�����ʽ,���ű��ʽ������������ִ��,����Ҳ��Ϊ˳����ֵ���ʽ,�������ʽ�Ľ�������һ�����ʽ�Ľ��
//	//int a = 3;
//	//int b = 5;
//	//int c = 0;
//	//int d = (c = 5, a = c + 3, b = a - 4, c += 5);
//	//printf("a = %d, b = %d, c = %d\n", a, b, c);//8 4 10
//	//printf("d = %d\n", d);//10
//
//	//int a = 1;
//	//int b = 2;
//	//int c = (a > b, a = b + 10, a, b = a + 1);
//	//printf("c = %d\n", c);//13
//	return 0;
//}
//#include <stdio.h>
//#include <assert.h>
//void test1() {
//	printf("hehe\n");
//}
//void test2(const char* str) {
//	assert(str != NULL);
//	printf("%s\n", str);
//}
//struct Stu {
//	char _name[10];
//	int _age;
//	char _sex[5];
//	double _score;
//};
//void set_age1(struct Stu stu) {
//	stu._age = 18;
//}
//void set_age2(struct Stu* pStu) {
//	assert(pStu != NULL);
//	pStu->_age = 18;
//}
//int main() {
//	//�±�����	��������	�ṹ��Ա
//	//int arr[10] = { 0 };
//	//arr[9] = 10;//ʹ���±����ò�����[],�����������ֱ���������arr������ֵ9
//
//	//()�������ò�����,����һ�����߶��������,��һ���������Ǻ�����,ʣ��Ĳ��������Ǵ��ݸ������Ĳ���
//	//test1();//ʹ��()��Ϊ�������ò�����
//	//test2("hello world.");//ʹ��()��Ϊ�������ò�����
//
//	struct Stu stu;
//	struct Stu* pStu = &stu;
//	stu._age = 20;
//	printf("%d\n", stu._age);//20
//	set_age1(stu);
//	printf("%d\n", stu._age);//20
//	pStu->_age = 20;
//	printf("%d\n", stu._age);//20
//	set_age2(pStu);
//	printf("%d\n", stu._age);//18
//	return 0;
//}
//#include <stdio.h>
//struct Book {
//	char _name[20];
//	char _id[20];
//	int _price;
//};
//int main() {
//	struct Book b = { "C����", "2022609", 52 };
//	struct Book* pb = &b;
//	//printf("%s, %s, %d\n", b._name, b._id, b._price);//�ṹ�������.�ṹ���Ա������
//	//printf("%s, %s, %d\n", (*pb)._name, (*pb)._id, (*pb)._price);
//	//printf("%s, %s, %d\n", pb->_name, pb->_id, pb->_price);//�ṹ��ָ�����->�ṹ���Ա������
//	return 0;
//}
//#include <stdio.h>
//void test0() {
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("c = %d\n", c);//-126
//	printf("c = %u\n", c);//4294967170
//}
//void test1() {
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6); {
//		printf("a");
//	}
//	if (b == 0xb600) {
//		printf("b");
//	}
//	if (c == 0xb6000000) {
//		printf("c");
//	}
//	//�����������ӡc
//}
//void test2() {
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(-c));//4
//	printf("%u\n", sizeof(!c));//4
//}
//int main() {
//	//test0();
//	//test1();//�����ӡc
//	test2();
//	return 0;
//}
//#include <stdio.h>
//int fun() {
//	static int count = 1;
//	return ++count;
//}
//int main() {
//	int ans = fun() - fun() * fun();//�����Ǵ����,��Ϊ��ȷ���ĸ�fun()�����ȱ�����
//	printf("ans = %d\n", ans);
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	int i = 1;
//	int res = (++i) + (++i) + (++i);
//	printf("res = %d\n", res);//�������������,��ͬƽ̨�ܳ����Ľ����ͬ
//	printf("i = %d\n", i);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//#include <assert.h>
//void test1() {
//	//int arr[] = { 1, 2, (3, 4), 5 };
//	//printf("%d\n", (int)sizeof(arr));//16
//	//int arr1[] = { (1, 2, 3, 4, 5, 6) };
//	//printf("%d\n", (int)sizeof(arr1));//4
//
//	//char str[] = "hello bit";
//	//printf("%d %d\n", (int)sizeof(str), (int)strlen(str));//10 9
//	//printf("%d\n", (int)sizeof("hello bit"));//10
//	//printf("0X%p, 0X%p\n", &"hello bit", &"hello bit" + 1);
//
//	//char s[] = "hello bit\0";
//	//printf("%d\n", (int)sizeof(s));//11
//	//printf("%d\n", (int)strlen(s));//9
//
//	//char acX[] = "abcdefg";
//	//char acY[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' };
//}
//void MyBubbleSort(int* pa, int sz) {
//	assert(pa != NULL);
//	int i = 0;
//	int j = 0;
//	bool flag = false;
//	for (i = 0; i < sz - 1; i++) {
//		flag = false;
//		for (j = 0; j < sz - 1 - i; j++) {
//			if (pa[j] < pa[j + 1]) {
//				int tmp = pa[j];
//				pa[j] = pa[j + 1];
//				pa[j + 1] = tmp;
//				flag = true;
//			}
//		}
//		if (!flag) {
//			break;
//		}
//	}
//}
//void test2() {
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	MyBubbleSort(arr, sz);
//}
//void InitArr(int* pa, int sz) {
//	assert(pa != NULL);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		*pa++ = 0;
//	}
//}
//void PrintArr(int* pa, int sz) {
//	assert(pa != NULL);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", *pa++);
//	}
//	printf("\n");
//}
//void ReverseArr(int* pa, int sz) {
//	assert(pa != NULL);
//	int l = 0;
//	int r = sz - 1;
//	while (l < r) {
//		int tmp = pa[l];
//		pa[l] = pa[r];
//		pa[r] = tmp;
//		l++;
//		r--;
//	}
//}
//void test3() {
//	int arr[10];
//	InitArr(arr, 10);
//	PrintArr(arr, 10);
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		arr[i] = i;
//	}
//	ReverseArr(arr, 10);
//	PrintArr(arr, 10);
//}
//void MySwapArr(int* pa, int* pb, int sz) {
//	assert(pa != NULL && pb != NULL);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		int tmp = pa[i];
//		pa[i] = pb[i];
//		pb[i] = tmp;
//	}
//}
//void test4() {
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int b[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	MySwapArr(a, b, 10);
//}
//int main() {
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	return 0;
//}
//#include <stdio.h>
//void test1() {
//	int a = 10;//aռ4���ֽ�
//	int* pa = &a;//&a�õ�����a��4���ֽ��е�һ���ֽڵĵ�ַ
//	*pa = 20;
//}
//void test2() {
//	//int a = 0x11223344;
//	//int* pi = &a;
//	//*pi = 0;
//
//	//int a = 0x11223344;
//	//char* pc = (char*)(&a);
//	//*pc = 0;
//
//	//int arr[10] = { 0 };
//	//int* p = arr;
//	//char* pc = (char*)arr;
//	//printf("0X%p, 0X%p\n", p, p + 1);
//	//printf("0X%p, 0X%p\n", pc, pc + 1);
//
//	//int arr[10] = { 0 };
//	//int* p = arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++) {
//	//	*(p + i) = 1;
//	//}
//
//	//int arr[10] = { 0 };
//	//char* p = (char*)arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++) {
//	//	*(p + i) = 1;
//	//}
//}
//int main() {
//	//test1();
//	//ָ�����͵�����
//	//1.ָ�����;�����ָ������õ�Ȩ���ж��
//	//2.ָ�����;�����ָ����һ���߶����ֽ�(����)
//	//test2();
//	return 0;
//}
//#include <stdio.h>
//int* test() {
//	int a = 10;
//	return &a;
//}
//int main() {
//	//int* p;//p��һ��Ұָ��,p��һ���ֲ���ָ�����,�ֲ���������ʼ��Ĭ�������ֵ
//	//*p = 20;//�Ƿ������ڴ�
//
//	//ָ��Խ�����Ұָ��
//	//int arr[10] = { 0 };
//	//int* p = arr;
//	//int i = 0;
//	//for (i = 0; i <= 11; i++) {
//	//	*(p++) = i;
//	//}
//
//	//int* p = test();
//	//*p = 20;
//
//	//int* p = NULL;//C������#define NULL ((void *)0)	������<stdio.h>ͷ�ļ���
//	//CPP��#define NULL 0	����CPP�г���nullptr
//	
//	//C���Զ�Խ���ǲ����
//
//	//int* p = NULL;
//	//*p = 20;//err:д������쳣
//	//printf("%d\n", *p);//err:��ȡ�����쳣
//
//	int* p = NULL;
//	if (NULL != p) {
//		*p = 20;
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <assert.h>
//#define N_VALUES 5
//void test0() {//ָ��+-����,ָ��Ĺ�ϵ����
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	int* pBegin = arr;
//	int* pEnd = arr + sz - 1;
//	while (pBegin <= pEnd) {
//		printf("%d ", *pBegin++);
//	}
//}
//void test1() {//ָ��+-����
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[0]; vp < &values[N_VALUES];) {
//		*vp++ = 0;
//	}
//}
//size_t MyStrlen1(const char* str) {//ָ��-ָ��
//	assert(str != NULL);
//	const char* eos = str;
//	while (*eos++) {
//		;
//	}
//	return (eos - str - 1);
//}
//size_t MyStrlen2(const char* str) {
//	assert(str != NULL);
//	size_t count = 0;
//	while (*str) {
//		count++;
//		str++;
//	}
//	return count;
//}
//size_t MyStrlen(const char* str) {
//	assert(str != NULL);
//	if (*str) {
//		return (1 + MyStrlen(str + 1));
//	}
//	else {
//		return 0;
//	}
//}
//void test2() {
//	const char* str1 = "";
//	const char* str2 = "abc";
//	printf("%d\n", (int)MyStrlen(str1));//0
//	printf("%d\n", (int)MyStrlen(str2));//3
//}
//void test3_1() {//ָ��+-����,ָ��Ĺ�ϵ����
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[N_VALUES]; vp > (&values[0]);) {
//		*--vp = 0;
//	}
//}
//void test3_2() {//ָ��+-����,ָ��Ĺ�ϵ����
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--) {
//		*vp = 0;
//	}
//}
//void test3() {//ָ��Ĺ�ϵ����
//	//test3_1();
//	test3_2();
//	//ʵ�����ڴ󲿷ֱ�������test3_2�ǿ���˳����������,Ȼ�����ǻ���Ӧ�ñ�������д,��Ϊ��׼������֤������
//	//C��׼�涨:����ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ����бȽ�,���ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽ�
//}
//int main() {
//	//test0();
//	//test1();
//	//test2();
//	test3();
//
//	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//printf("%d\n", &arr[9] - &arr[0]);//9	ָ��-ָ��õ���������ָ��֮���Ԫ�ظ���
//	//ָ���ָ�������ǰ��������ָ��ָ��ͬһ��ռ�
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//printf("0X%p\n", arr);
//	//printf("0X%p\n", &arr[0]);//arr == &arr[0]	�ɼ���������������Ԫ�صĵ�ַ��һ����	����:����������������Ԫ�صĵ�ַ
//
//	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int* p = arr;
//	
//	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int* p = arr;//ָ����������Ԫ�صĵ�ַ
//	//int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	//int i = 0;
//	//for (i = 0; i < sz; i++) {
//	//	printf("&arr[%d] = 0X%p   <=====> p + %d = 0X%p\n", i, &arr[i], i, p + i);
//	//}//����:p+i��ʵ�����������arr�±�Ϊi�ĵ�ַ
//
//	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	//int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	//int* p = arr;
//	//int i = 0;
//	//for (i = 0; i < sz; i++) {
//	//	printf("%d ", *(p + i));
//	//}
//	//printf("\n");
//
//	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	////printf("%d, %d\n", arr[2], 2[arr]);//3 3
//	//int* p = arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++) {
//	//	printf("%d %d\n", i[p], i[arr]);
//	//}
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	//int a = 10;
//	//int* pa = &a;//pa��ָ�����,һ��ָ��
//	//int** ppa = &pa;//ppa�Ƕ���ָ�����,ȡ��pa���һ��ָ������ĵ�ַ��������
//	//int*** pppa = &ppa;//pppa������ָ�����
//	//***pppa = 3;
//	//printf("a = %d\n", a);//3
//	return 0;
//}
//#include <stdio.h>
//#include <assert.h>
//struct B {
//	char _c;
//	short _s;
//	double _d;
//};
//struct Stu {
//	//��Ա����
//	struct B _sb;
//	char _name[20];//����
//	int _age;//����
//	char _id[20];//ѧ��
//} s1, s2;//s1��s2Ҳ�ǽṹ��ı���,s1��s2��ȫ�ֱ���
//void Print1(struct Stu stu) {
//	printf("%c, %hd, %lf, %s, %d, %s\n", stu._sb._c, stu._sb._s, stu._sb._d, stu._name, stu._age, stu._id);
//}
//void Print2(struct Stu* pstu) {
//	assert(pstu != NULL);
//	printf("%c, %hd, %lf, %s, %d, %s\n", pstu->_sb._c, pstu->_sb._s, pstu->_sb._d, pstu->_name, pstu->_age, pstu->_id);
//}
//int main() {
//	struct Stu s = { { 'w', 20, 3.14 }, "����", 30, "20200500" };//s�Ǿֲ�����
//	//printf("%c, %hd, %lf, %s, %d, %s\n", s._sb._c, s._sb._s, s._sb._d, s._name, s._age, s._id);
//	//struct Stu* ps = &s;
//	//printf("%c, %hd, %lf, %s, %d, %s\n", ps->_sb._c, ps->_sb._s, ps->_sb._d, ps->_name, ps->_age, ps->_id);
//
//	//дһ��������ӡs������
//	Print1(s);//��ֵ����
//	Print2(&s);//��ַ����
//	return 0;
//}
//#include <stdio.h>
//int Add(int x, int y) {
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main() {
//	//ÿ���������ö����ڽ��̿ռ��ջ���Ͽ���ջ֡�ռ�,
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	c = Add(a, b);
//	return 0;
//}
//#include <stdio.h>
//void test() {
//	int a = 10;
//	int b = 20;
//	int c = a + b;
//}
//int main() {
//	//char* p = "hello world";
//	//printf("%s\n", p);
//	int arr[10] = { 0 };
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		arr[i] = i + 1;//ѭ���ڲ��������������ϵ�
//	}
//	for (i = 0; i < sz; i++) {
//		test();
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//void test2() {
//	printf("hehe\n");
//}
//void test1() {
//	test2();
//}
//void test() {
//	test1();
//}
//int main() {
//	test();
//	return 0;
//}
//#include <stdio.h>
//void test1() {
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int fact = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++) {
//		fact = 1;
//		for (j = 1; j <= i; j++) {
//			fact *= j;
//		}
//		sum += fact;
//	}
//	//for (i = 1; i <= n; i++) {
//	//	fact *= i;
//	//	sum += fact;
//	//}
//	printf("sum = %d\n", sum);
//}
//void test2() {
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++) {
//		arr[i] = 0;
//		printf("hehe\n");
//	}//�����ѭ����ӡhehe
//}
//int main() {
//	//test1();
//	test2();
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//char* MyStrcpy(char* dest, const char* src) {
//	assert(dest != NULL && src != NULL);
//	char* cp = dest;
//	while ((*dest++ = *src++) != '\0') {
//		;
//	}
//	return (cp);
//}
//int main() {
//	char arr1[20] = "xxxxxxxxxxxxxx";
//	char arr2[] = "hello";
//	//puts(strcpy(arr1, arr2));
//	//printf("%s\n", arr1);
//
//	puts(MyStrcpy(arr1, arr2));
//	printf("%s\n", arr1);
//	return 0;
//}
//#include <string.h>
//#include <stdio.h>
//#include <assert.h>
//char* my_strcpy(char* dest, const char* src) {
//	assert(dest != NULL && src != NULL);
//	char* cp = dest;
//	while ((*cp++ = *src++) != '\0') {
//		;
//	}
//	return (dest);
//}
//void test0() {
//	char arr1[20] = "xxxxxxx";
//	char arr2[] = "hello";
//	//strcpy(arr1, arr2);
//	//printf("%s\n", arr1);
//	puts(my_strcpy(arr1, NULL));//��ʽ����
//	printf("%s\n", arr1);
//}
//void test1() {
//	//int num = 10;
//	//int* p = &num;
//	//*p = 20;
//	//printf("%d\n", num);
//
//	//const���α�����������ͱ���Ϊ������,���в��ܱ��޸ĵĳ�������,���Ǳ����ϻ��Ǳ���
//	//const int num = 10;
//	////num = 20;//err
//	//const int* p = &num;
//	//const int n = 0;
//	//p = &n;//ok
//	////*p = 20;//err
//	//printf("%d\n", num);
//
//	//const int num = 10;
//	//int* const p = &num;
//	//int n = 100;
//	////p = &n;//err
//	//*p = 20;
//	//printf("%d\n", num);//ok
//
//	//const����ָ�����ʱ,��const��*���ʱ,��ʾָ��ָ������ݲ���ͨ��ָ���������޸�,ָ���ָ������޸�
//	//��const��*�ұ���λ��ָ��������ʱ,��ʾָ���ָ�����޸�,ָ��ָ������ݿ����޸�
//}
//size_t MyStrlen1(const char* str) {
//	assert(str != NULL);
//	size_t count = 0;
//	while (*str != '\0') {
//		str++;
//		count++;
//	}
//	return count;
//}
//size_t MyStrlen2(const char* str) {
//	assert(str != NULL);
//	if (*str) {
//		return (1 + MyStrlen2(str + 1));
//	}
//	else {
//		return 0;
//	}
//}
//size_t MyStrlen(const char* str) {
//	assert(str != NULL);
//	const char* eos = str;
//	while (*eos++) {
//		;
//	}
//	return (eos - str - 1);
//}
//void test2() {
//	const char* str1 = "";
//	const char* str2 = "abc";
//	printf("%d\n", (int)MyStrlen(str1));
//	printf("%d\n", (int)MyStrlen(str2));
//}
//char* MyStrcat(char* dest, const char* src) {
//	assert(dest != NULL && src != NULL);
//	char* cp = dest;
//	while (*cp) {
//		cp++;
//	}
//	while ((*cp++ = *src++) != '\0') {
//		;
//	}
//	return dest;
//}
//void test3() {
//	char arr1[20] = "hello ";
//	char arr2[] = "world!\n";
//	puts(MyStrcat(arr1, arr2));
//}
//int main() {
//	//��׳��/³����
//	//test0();
//	//test1();
//	//test2();
//	test3();
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//#include <assert.h>
//void test0() {
//	int a, b, c;
//	a = 5;//a=5 b=0 c=0
//	c = ++a;//a=6 b=0 c=6
//	b = ++c, c++, ++a, a++;//a=8 b=7 c=8
//	b += a++ + c;//a=9 b=23 c=8
//	printf("a = %d b = %d c = %d\n", a, b, c);
//}
//size_t CountOfBitOne1(size_t num) {
//	size_t count = 0;
//	while (num) {
//		if (num % 2) {
//			count++;
//		}
//		num /= 2;
//	}
//	return count;
//}
//size_t CountOfBitOne2(int num) {
//	size_t count = 0;
//	int bits = 0;
//	for (bits = 0; bits < 32; bits++) {
//		if ((1 << bits) & num) {
//			count++;
//		}
//	}
//	return count;
//}
//size_t CountOfBitOne3(int num) {
//	size_t count = 0;
//	while (num) {
//		num &= (num - 1);
//		count++;
//	}
//	return count;
//}
//size_t CountOfBitOne(int num) {
//	size_t count = 0;
//	while (num) {
//		num -= num & (-num);
//		count++;
//	}
//	return count;
//}
//size_t CountOfDiffBits1(int m, int n) {
//	size_t count = 0;
//	return CountOfBitOne(m ^ n);
//}
//size_t CountOfDiffBits(int m, int n) {
//	int i = 0;
//	size_t count = 0;
//	for (i = 0; i < 32; i++) {
//		if (((1 << i) & m) != ((1 << i) & n)) {
//			count++;
//		}
//	}
//	return count;
//}
//void test1() {
//	int m = 1999;
//	int n = 2299;
//	printf("%d\n", (int)CountOfDiffBits(m, n));
//}
//bool is_2_pow(int n) {
//	if (!n)	return false;//Ҫ����һ��0
//	return !(n & (n - 1));
//}
//void test2() {
//	int n = 0;
//	scanf("%d", &n);
//	if (is_2_pow(n)) {
//		printf("YES!\n");
//	}
//	else {
//		printf("NO!\n");
//	}
//}
//void PrintO(int n) {
//	int bits = 31;
//	while (bits >= 1) {
//		printf("%d", (n >> bits) & 0x01);
//		bits -= 2;
//	}
//	printf("\n");
//}
//void PrintE(int n) {
//	int bits = 30;
//	while (bits >= 0) {
//		printf("%d", (n >> bits) & 0x01);
//		bits -= 2;
//	}
//	printf("\n");
//}
//void test3() {
//	int n = 0;
//	scanf("%d", &n);
//	PrintO(n);
//	PrintE(n);
//}
//void test4() {
//	int a = 3;
//	int b = 5;
//	printf("a = %d, b = %d\n", a, b);
//	int tmp = a;
//	a = b;
//	b = tmp;
//	printf("a = %d, b = %d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d, b = %d\n", a, b);
//	a ^= b;
//	b ^= a;
//	a ^= b;
//	printf("a = %d, b = %d\n", a, b);
//}
//void test5() {
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++) {
//		printf("%d ", arr[i]);// 0 0 3 4 5
//	}
//}
//int main() {
//	//test0();
//	//test1();
//	//test2();//дһ�������ж�һ�������ǲ���2��n�η�,n>=0
//	//test3();
//	//test4();
//	//test5();
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//int cnt = 0;
//int fib(int n) {
//	cnt++;
//	if (n == 0) {
//		return 1;
//	}
//	else if (n == 1) {
//		return 2;
//	}
//	else {
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int a = 1;
//void test() {
//	int a = 2;
//	a += 1;
//}
//size_t lcm1(size_t m, size_t n) {
//	size_t res = (m > n) ? m : n;
//	while (res <= m * n) {
//		if (!(res % m) && !(res % n)) {
//			return res;
//		}
//		res++;
//	}
//	return -1;
//}
//size_t gcd(m, n) {
//	if (!n) {
//		return m;
//	}
//	else {
//		return gcd(n, m % n);
//	}
//}
//size_t lcm2(size_t m, size_t n) {
//	return m * n / gcd(m, n);
//}
//size_t lcm(size_t m, size_t n) {
//	int i = 1;
//	for (;;) {
//		if (!((m * i) % n)) {
//			return m * i;
//		}
//		i++;
//	}
//	return -1;
//}
//void test0() {
//	size_t m = 0;
//	size_t n = 0;
//	scanf("%u%u", &m, &n);
//	printf("%d\n", (int)lcm(m, n));
//}
//void reverse(char* pl, char* pr) {
//	assert(pl != NULL && pr != NULL);
//	while (pl < pr) {
//		char t = *pl;
//		*pl = *pr;
//		*pr = t;
//		pl++;
//		pr--;
//	}
//}
//void test1() {
//	char buff[110] = "";
//	fgets(buff, 108, stdin);
//	int len1 = (int)strlen(buff);
//	buff[len1 - 1] = '\0';
//	int len = (int)strlen(buff);
//	reverse(buff, buff + len - 1);
//	char* str = buff;
//	while (*str != '\0') {
//		char* cur = str;
//		while (*cur != ' ' && *cur != '\0') {
//			cur++;
//		}
//		reverse(str, cur - 1);
//		while (*cur == ' ' && *cur != '\0') {
//			cur++;
//		}
//		str = cur;
//	}
//	puts(buff);
//}
////void test2() {//C++ʵ�ַ���
////	string str;
////	string res;
////	while (cin >> str) {
////		res = str + ' ' + res;
////	}
////	res.pop_back();
////	cout << res;
////}
//int main() {
//	//fib(8);
//	//printf("%d\n", cnt);
//
//	//int x = 1;
//	//do {
//	//	printf("%2d\n", x++);
//	//} while (x--);
//
//	//int i = 1;
//	//int j = i++;
//
//	//test();
//	//printf("%d\n", a);//1
//
//	//int /*hehe*/ a = 10;
//	//printf("a = %d\n", a);//10
//
//	//int a = 0;
//	//int c = 0;
//	//do {
//	//	--c;
//	//	a = a - 1;
//	//} while (a > 0);
//	//printf("%d\n", c);
//
//	//double x = 0;
//	//double y = 0;
//	//x = 2;
//	//y = x + 3 / 2;
//	//printf("%lf\n", y);
//
//	//int x = 0;
//	//int y = 0;
//	//int count = 0;
//	//for (x = 0, y = 0; (y = 123) && (x < 4); x++)	count++;
//	//printf("%d\n", count);
//	//test0();
//	test1();
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("0X%p, 0X%p\n", &i, arr);//release�汾�²��ܵ���,ֻ�ܽ��д�ӡ��ַ����
//	//�������,release�汾�¶Դ���������Ż�,�ȴ����ı���i��ŵ��˺󴴽�������arr�ĺ���ȥ��,�����ܵ�����ѭ������,���մ�ӡ13��heheȻ����ΪԽ������ڴ浼�³������
//	for (i = 0; i <= 12; i++) {
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//#include <stdio.h>
////��������	����������	��������/�Զ�������(����,�ṹ��struct,ö��enum,������union)	ָ������		������
//int main() {
//	int arr1[10] = { 0 };//arr1�����������int[10]����
//	int arr2[5] = { 0 };//arr2�����������int[5]����
//	//void p;//err
//	//void* p;//ok
//	//sizeof(void);//err
//	//sizeof(void*);//ok
//	//void* p = NULL;
//	//p + 1;//err
//	//void* p = (char*)malloc(10);
//	//*p = 2;//err
//	return 0;
//}
//#include <stdbool.h>
//#include <stdio.h>
//bool IsSmallEndian(int data) {
//	return (*(char*)(&data));
//}
//union U
//{
//	int _in;
//	char _c;
//};
//void test0() {
//	//����ֽ���:��ָ���ݸ�Ȩ��λ�洢�ڵ͵�ַ��,��Ȩ��λ�洢�ڸߵ�ַ��
//	//С���ֽ���:��ָ���ݸ�Ȩ��λ�洢�ڸߵ�ַ��,��Ȩ��λ�洢�ڵ͵�ַ��
//	int data = 0x01;
//	if (IsSmallEndian(data)) {
//		printf("��ǰ������С����洢!\n");
//	}
//	else {
//		printf("��ǰ�����Ǵ����洢!\n");
//	}
//
//	union U u;
//	u._in = 0x01;
//	if (u._c) {
//		printf("��ǰ������С����洢!\n");
//	}
//	else {
//		printf("��ǰ�����Ǵ����洢!\n");
//	}
//}
//int main() {
//	//������е��������ڴ����Զ����Ƶ���ʽ�洢,����������˵�����Ķ����������ֱ�ʾ��ʽ:ԭ��,����,����,�ڴ��д洢���ǲ���	 ������ԭ������ͬ		������ԭ����Ҫ���м���,�Ҽ������һ������ȡ�����һ
//	//int a = -10;
//	//int b = 10;
//	//test0();
//	//int data = 0x11223344;
//	//int a = 0b10;//C������һ��������������Ǿ���ʮ����,��0��ͷ�ǰ˽���,��0x��ͷ��ʮ������,��0b��ͷ�Ƕ�����
//	return 0;
//}
//#include <stdio.h>
//void test0() {
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d\n", a, b, c);//-1 -1 255
//	printf("a=%u,b=%u,c=%u\n", a, b, c);//4294967295	4294967295		255
//}
//void test1() {
//	char a = -128;
//	printf("%u\n", a);//4294967168
//	printf("%d\n", a);//-128
//}
//void test2() {
//	char a = 128;
//	printf("%u\n", a);//4294967168
//	printf("%d\n", a);//-128
//}
//void test3() {
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);//-10
//	printf("%u\n", i + j);//4294967286
//}
////size_t i;
////void test4() {
////	for (i = 9; i >= 0; i--) {
////		printf("%u\n", i);//9 8 7 6 5 4 3 2 1 0 4294967295��0Ȼ������������ѭ��
////	}
////}
//void test5() {
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++) {
//		a[i] = -1 - i;
//	}
//	printf("%d", (int)strlen(a));//255
//}
////unsigned char i = 0;
////void test6() {
////	int count = 0;
////	for (i = 0; i <= 255; i++) {
////		printf("%d hello world!\n", ++count);
////	}
////}
//void test7() {
//	unsigned char a = 128;
//	printf("%d\n", a);//128
//	printf("%u\n", a);//128
//}
//void test8() {
//	unsigned char a = -128;
//	printf("%d\n", a);//128
//	printf("%u\n", a);//128
//}
//int main() {
//	//����:char������signed char����unsigned char��C���Ա�׼�в�û�й涨,ȡ���ڱ�����(�󲿷ֱ��������������signed char),��int����signed int	 shortҲ����signed short
//	//test0();
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	//test5();
//	//test6();
//	//test7();
//	//test8();
//	return 0;
//}
//#include <stdio.h>
//#include <limits.h>
//#include <float.h>
//void test0() {
//	//INT_MAX;
//	int n = 9;
//	float* pFloat = (float*)(&n);
//	printf("n��ֵΪ:%d\n", n);
//	printf("*pFloat��ֵΪ:%f\n", *pFloat);
//	*pFloat = 9.0f;
//	printf("num��ֵΪ:%d\n", n);
//	printf("*pFloat��ֵΪ:%f\n", *pFloat);
//}
//void test1() {
//	float f = 5.5f;
//	//101.1	(-1)^0 * 1.011 * 2^2	S=0	M=1.011	E=2+127
//	//0100 0000 1011 0000 0000 0000 0000 0000
//	//40 b0 00 00
//	//��<---��
//}
//int main() {
//	//test0();
//	test1();
//	return 0;
//}
//#include <stdio.h>
//#include <assert.h>
//void test0() {
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 't';
//}
//void test1() {
//	char* pstr = "hello world.";//�����벢���ǰ�һ���ַ����ŵ�pstrָ�������
//	//����char* pstr = "hello world."�������ǰ�����ַ������������ַ�'h'�ĵ�ַ�ŵ���pstr��
//	printf("%s\n", pstr);
//}
//void test2() {
//	char str1[] = "hello world.";
//	char str2[] = "hello world.";
//	char* str3 = "hello world.";
//	char* str4 = "hello world.";
//	if (str1 == str2) {
//		printf("str1 and str2 are same\n");
//	}
//	else {
//		printf("str1 and str2 are not same\n");//ok
//	}
//	if (str3 == str4) {
//		printf("str3 and str4 are same\n");//ok
//	}
//	else {
//		printf("str3 and str4 are not same\n");
//	}
//}
//void test3() {
//	//char ch = 'q';
//	//char* pc = &ch;
//
//	char* ps = "hello world";
//	printf("%c\n", *ps);//h
//}
//void test4() {
//	//ָ������:��������һ������,��һ�����ָ�������
//	//int* arr[3];//arr��һ���������ָ�������
//	//int a = 10;
//	//int b = 20;
//	//int c = 30;
//	//int* arr[3] = { &a, &b, &c };
//	//int i = 0;
//	//for (i = 0; i < 3; i++) {
//	//	printf("%d ", *(arr[i]));
//	//}
//	//puts("");
//
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int b[5] = { 2, 3, 4, 5, 6 };
//	int c[5] = { 3, 4, 5, 6, 7 };
//	int* arr[3] = { a, b, c };//ģ����һ����ά����
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 5; j++) {
//			//printf("%d ", *(arr[i] + j));
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void test5() {
//	float b = 9.0f;
//	int* pi = (int*)(&b);
//	printf("%d\n", *pi);
//}
//void test6() {
//	//����ָ�뱾����һ��ָ�����ͱ����ĵ�ַ
//	//�ַ�ָ�뱾����һ��ָ���ַ�������ָ��
//	//����ָ�뱾����һ��ָ�������ָ��
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//
//	int arr[10] = { 1, 2, 3, 4, 5 };
//	int(*parr)[10] = &arr;//&arrȡ��������������ĵ�ַ
//	//parr����һ������ָ��		���д�ŵ�������ĵ�ַ
//	//arr����������������Ԫ�صĵ�ַ���ȼ���&arr[0]
//	double* d[5] = { NULL };
//	double* (*pd)[5] = &d;
//}
//void test7() {
//	int arr[10] = { 0 };
//	int* p1 = arr;
//	int(*p2)[10] = &arr;
//	printf("0X%p, 0X%p\n", arr, p1);
//	printf("0X%p, 0X%p\n", arr + 1, p1 + 1);
//	printf("-----------------------\n");
//	printf("0X%p, 0X%p\n", &arr, p2);
//	printf("0X%p, 0X%p\n", &arr + 1, p2 + 1);
//	//��������������Ԫ�صĵ�ַ,��������������	1.sizeof(������)��������ʾ��������,�����Ǽ�����������ռ�ڴ�ռ��С��λ���ֽ�
//	//2.&������---�������������ʾ��������,��˼��ȡ����������ĵ�ַ
//}
//void test8() {
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*pa)[10] = &arr;
//	//�����pa���н����ò����� *pa����������
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", *((*pa) + i));
//	}
//	printf("\n");
//}
//void print1(int arr[][5], int row) {
//	assert(arr != NULL);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++) {
//		for (j = 0; j < 5; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		putchar(10);
//	}
//}
//void print2(int(*p)[5], int row) {//p��һ������ָ��
//	assert(p != NULL);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++) {
//		for (j = 0; j < 5; j++) {
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print3(int(*p)[3][5], int row, int col) {
//	assert(p != NULL);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++) {
//		for (j = 0; j < col; j++) {
//			printf("%d ", *(*((*p) + i) + j));
//		}
//		putchar(10);
//	}
//}
//void test9() {
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	print1(arr, 3);
//	print2(arr, 3);//arr����������ʾ������Ԫ�صĵ�ַ
//	print3(&arr, 3, 5);
//}
////void test_1(int arr[]) {}//ok
////void test_1(int arr[10]) {}//ok
////void test_1(int* arr) {}//ok
////void test_2(int* arr[]) {}//ok
////void test_2(int* arr[20]) {}//ok
////void test_2(int** ppa) {}//ok
////void test10() {
////	int arr[10] = { 0 };
////	int* arr2[20] = { 0 };
////	test_1(arr);
////	test_2(arr2);
////}
////void test(int arr[3][5]) {}//ok
////void test(int arr[][]) {}//err
////void test(int arr[][5]) {}//ok
////void test(int arr[3][]) {}//err
////void test(int* arr) {}//err
////void test(int* arr[5]) {}//err
////void test(int(*arr)[5]) {}//ok
////void test(int** arr) {}//err
////void test11() {
////	int arr[3][5] = { 0 };
////	test(arr);
////}
//int main() {
//	//test0();
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	//test5();
//	//test6();
//	//test7();
//	//test8();
//	//test9();
//	//test10();
//	//test11();
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//#include <string.h>
//#include <stdlib.h>
//#include <assert.h>
//#include <stdbool.h>
//int i;//�����i��ȫ�ֱ�������ʼ��Ĭ����0
//void test0() {
//	i--;//-1
//	if (i > sizeof(i)) {//sizeof�������������Ľ����������unsigned int���͵�
//		printf(">\n");//ok
//	}
//	else {
//		printf("<\n");
//	}
//}
//void test1_1() {
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int s = 1;
//	int r = a;
//	for (i = 1; i < 5; i++) {
//		s = (int)pow(10, i) + s;
//		r += s * a;
//	}
//	printf("%d\n", r);
//}
//void test1_2() {
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int res = 0;
//	for (i = 0; i < n; i++) {
//		sum = sum * 10 + a;
//		res += sum;
//	}
//	printf("res = %d\n", res);
//}
//void test1() {
//	//s = a + aa + aaa + aaaa + aaaaa
//	//test1_1();
//	test1_2();
//}
//void print1(int* pa, int n) {
//	assert(pa != NULL);
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		printf("%d ", *pa++);
//	}
//	printf("\n");
//}
//void print2(int* pBegin, int* pEnd) {
//	assert(pBegin != NULL && pEnd != NULL);
//	while (pBegin <= pEnd) {
//		printf("%d ", *pBegin);
//		pBegin++;
//	}
//	putchar(10);
//}
//void test2() {
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int n = (int)(sizeof(arr) / sizeof(*arr));
//	print1(arr, n);
//	print2(arr, arr + n - 1);
//}
//void test3() {
//	int i = 0;
//	int num = 0;
//	int count = 0;
//	for (num = 1; num < 100000; num++) {
//		int sum = 0;
//		int bits = 0;
//		int n = num;
//		while (n) {
//			bits++;
//			n /= 10;
//		}
//		n = num;
//		while (n) {
//			sum += (int)pow(n % 10, bits);
//			n /= 10;
//		}
//		if (num == sum) {
//			printf("%d ", num);
//			count++;
//		}
//	}
//	printf("\n================================\n");
//	printf("count = %d\n", count);
//}
//void test4() {
//	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long* pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));//6 12
//}
////struct student {
////	int _num;
////	char _name[32];
////	float _score;
////};
//struct stu {
//	int _num;
//	char _name[10];
//	int _age;
//};
//void fun(struct stu* p) {
//	printf("%s\n", (*p)._name);
//	return;
//}
//void test5() {
//	struct stu students[3] = { { 9801, "zhang", 20}, { 9802, "wang", 19}, { 9803, "zhao", 18 } };
//	fun(students + 1);//wang
//}
//void reverse_i(char* pl, char* pr) {
//	assert(pl != NULL && pr != NULL);
//	while (pl < pr) {
//		char tmp = *pl;
//		*pl = *pr;
//		*pr = tmp;
//		pl++;
//		pr--;
//	}
//}
//void reverse_r(char* str) {
//	assert(str != NULL);
//	if (!*str) {//�մ�ʱ��Ҫ����
//		return;
//	}
//	int len = (int)strlen(str);
//	char t = str[0];
//	int r = len - 1;
//	str[0] = str[r];
//	str[r] = '\0';
//	if ((int)strlen(str + 1) >= 2) {
//		reverse_r(str + 1);
//	}
//	str[r] = t;
//}
//void test6() {
//	char arr[] = "abcdefg";
//	puts(arr);
//	reverse_i(arr, arr + (int)strlen(arr) - 1);
//	puts(arr);
//	reverse_r(arr);
//	puts(arr);
//}
//void test7_1() {
//	int line = 0;
//	scanf("%d", &line);
//	int center_x = line / 2;
//	int center_y = line / 2;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < line; i++) {
//		for (j = 0; j < line; j++) {
//			if ((abs(center_x - i) + abs(center_y - j)) <= center_x) {
//				printf("*");
//			}
//			else {
//				printf(" ");
//			}
//		}
//		putchar(10);
//	}
//}
//void test7_2() {
//	int line = 0;
//	scanf("%d", &line);
//	int h = line / 2 + 1;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < h; i++) {
//		for (j = line / 2 - i; j > 0; j--) {
//			printf(" ");
//		}
//		for (j = 0; j < i * 2 + 1; j++) {
//			printf("*");
//		}
//		putchar(10);
//	}
//	h = line - h;
//	for (i = 0; i < h; i++) {
//		for (j = 0; j < i + 1; j++) {
//			printf(" ");
//		}
//		for (j = 2 * h - 1 - 2 * i; j > 0; j--) {
//			printf("*");
//		}
//		putchar(10);
//	}
//}
//void test7() {
//	//test7_1();
//	test7_2();
//}
//void test8_1() {
//	int money = 0;
//	scanf("%d", &money);
//	if (money <= 0) {
//		printf("%dԪ�ܺ�%dƿ��ˮ!\n", money, 0);
//	}
//	else {
//		int price = 1;
//		int total = 0;
//		int bottle = 0;
//		int empty = 0;
//		bottle = money / price;
//		total += bottle;
//		empty += bottle;
//		while (empty >= 2) {
//			total += empty / 2;
//			empty = empty % 2 + empty / 2;
//		}
//		printf("%dԪ�ܺ�%dƿ��ˮ!\n", money, total);
//	}
//}
//void test8_2() {
//	int money = 0;
//	scanf("%d", &money);
//	if (money <= 0) {
//		printf("%dԪ�ܺ�%dƿ��ˮ!\n", money, 0);
//	}
//	else {
//		int total = money / 1 * 2 - 1;
//		printf("%dԪ�ܺ�%dƿ��ˮ!\n", money, total);
//	}
//}
//void test8() {
//	//test8_1();
//	test8_2();
//}
//void func1(int* pa, int sz) {
//	assert(pa != NULL);
//	int* pBegin = pa;
//	int* pEnd = pa + sz - 1;
//	while (pBegin < pEnd) {
//		while ((pBegin < pEnd) && (*pBegin & 0x01)) {
//			pBegin++;
//		}
//		while ((pBegin < pEnd) && (!(*pEnd & 0x01))) {
//			pEnd--;
//		}
//		if (pBegin < pEnd) {
//			int tmp = *pBegin;
//			*pBegin = *pEnd;
//			*pEnd = tmp;
//			pBegin++;
//			pEnd--;
//		}
//	}
//}
//#pragma warning(disable:6386)
//#pragma warning(disable:6385)
//void func(int* pa, int sz) {
//	assert(pa != NULL);
//	int* p = (int*)malloc(sz * sizeof(int));
//	if (NULL == p) {
//		printf("p malloc error!\n");
//		exit(-1);
//	}
//	int i = 0;
//	int j = 0;
//	int end = sz - 1;
//	for (i = 0; i < sz; i++) {
//		if (pa[i] & 0x01) {
//			p[j++] = pa[i];
//		}
//		else {
//			p[end--] = pa[i];
//		}
//	}
//	int l = end + 1;
//	int r = sz - 1;
//	while (l < r) {
//		int tmp = p[l];
//		p[l] = p[r];
//		p[r] = tmp;
//		l++;
//		r--;
//	}
//	for (i = 0; i < sz; i++) {
//		pa[i] = p[i];
//	}
//	free(p);
//	p = NULL;
//}
//bool is_odd(int num) {
//	return (num & 0x01);
//}
//void foo(int* pa, int sz, bool(*pFunc)(int)) {
//	assert(pa != NULL && pFunc != NULL);
//	int* pBegin = pa;
//	int* pEnd = pa + sz - 1;
//	while (pBegin < pEnd) {
//		while ((pBegin < pEnd) && (pFunc(*pBegin))) {
//			pBegin++;
//		}
//		while ((pBegin < pEnd) && (!pFunc(*pEnd))) {
//			pEnd--;
//		}
//		if (pBegin < pEnd) {
//			int tmp = *pBegin;
//			*pBegin = *pEnd;
//			*pEnd = tmp;
//			pBegin++;
//			pEnd--;
//		}
//	}
//}
//void foo1(int* pa, int sz) {
//	assert(pa != NULL);
//	foo(pa, sz, is_odd);
//}
//void test9() {
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	//func(arr, sz);
//	foo1(arr, sz);
//}
//size_t MyStrlen1(const char* str) {
//	assert(str != NULL);
//	size_t count = 0;
//	while (*str) {
//		str++;
//		count++;
//	}
//	return count;
//}
//size_t MyStrlen2(const char* str) {
//	assert(str != NULL);
//	if (*str) {
//		return (1 + MyStrlen2(str + 1));
//	}
//	else {
//		return 0;
//	}
//}
//size_t MyStrlen(const char* str) {
//	assert(str != NULL);
//	const char* eos = str;
//	while (*eos++) {
//		;
//	}
//	return (eos - str - 1);
//}
//char* MyStrcpy(char* dest, const char* src) {
//	assert(dest != NULL && src != NULL);
//	char* cp = dest;
//	while ((*cp++ = *src++) != '\0') {
//		;
//	}
//	return (dest);
//}
//void test10() {
//	//const char* str1 = "";
//	//const char* str2 = "abc";
//	//printf("%d\n", (int)MyStrlen(str1));
//	//printf("%d\n", (int)MyStrlen(str2));
//
//	char arr1[20] = "hello ";
//	char arr2[] = "world!\n";
//	puts(MyStrcpy(arr1, arr2));
//}
//void test11() {
//	//unsigned char a = 200;
//	//unsigned char b = 100;
//	//unsigned char c = 0;
//	//c = a + b;
//	//printf("%d,%d\n", a + b, c);//300 44
//
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char*)(&a);
//	//���b����?
//}
//void test12() {
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++) {
//		arr[i][i] = 1;
//		arr[i][0] = 1;
//	}
//	for (i = 2; i < 10; i++) {
//		for (j = 1; j < i; j++) {
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j <= i; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void test13() {
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++) {
//		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D')) == 3) {
//			printf("������%c\n", killer);
//			break;
//		}
//	}
//}
//int main() {
//	//test0();
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	//test5();
//	//test6();
//	//test7();
//	//test8();
//	//test9();
//	//test10();
//	//test11();
//	//test12();
//	test13();
//	return 0;
//}
//#include <stdio.h>
//#include <assert.h>
//void test1() {
//	for (int a = 1; a <= 5; a++) {
//		for (int b = 1; b <= 5; b++) {
//			for (int c = 1; c <= 5; c++) {
//				for (int d = 1; d <= 5; d++) {
//					for (int e = 1; e <= 5; e++) {
//						if ((a * b * c * d * e == 120) && ((b == 2) + (a == 3) == 1)
//							&& ((b == 2) + (e == 4) == 1) && ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1) && ((e == 4) + (a == 1) == 1)) {
//							printf("a��%d��,b��%d��,c��%d��,d��%d��,e��%d��!\n", a, b, c, d, e);
//							goto End;//ʹ��goto����Ч��������ѭ��
//						}
//					}
//				}
//			}
//		}
//	}
//End:
//	printf("End!\n");
//}
//void print(int* p, int sz) {
//	assert(p != NULL);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//}
//void test2() {
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	print(p, sz);//p��һ��ָ��
//}
////void test0_0(int* p) {}//test0_0�����ܽ���ʲô����?int a = 10;int* p = &a;int arr[10] = { 0 };int* pa = arr;���Խ���&a, p, arr, pa��Ϊ����
////void test0_1(char* p) {}//test0_1�����ܽ���ʲô����?char ch = 'w'; char* pch = &ch; char* p = "hello"; char arr[20] = ""; char* pc = arr;���Խ���&ch, pch, p, arr, pc����Ϊ����
//void test(int** pptr) {
//	assert(pptr != NULL);
//	printf("num = %d\n", **pptr);
//	**pptr = 20;
//}
//void test3() {
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);//10
//	test(&p);//10
//	//ע����:&&n������д���Ǵ����
//}
//void test4_1(char** ppc) {
//	assert(ppc != NULL);
//	printf("%c\n", **ppc);
//}
//void test4() {
//	char c = 'b';
//	char* pc = &c;
//	char** ppc = &pc;
//	char* arr[10] = { "HuaWei", NULL };
//	test4_1(&pc);//b
//	test4_1(ppc);//b
//	test4_1(arr);//H
//}
//void test0() {
//	printf("hehe\n");
//}
//void test5() {
//	//����ָ��--->ָ������ָ��,��ź�����ַ��ָ��
//	printf("0X%p\n", test0);
//	printf("0X%p\n", &test0);//&test0��test0������ַ��ͬ
//	void(*pfunc1)() = test0;//ok,�����һ������ָ��
//	//void* pfunc2();//����һ����������
//	pfunc1();
//	(*pfunc1)();
//	(***pfunc1)();
//}
//int Add(int x, int y) {
//	return x + y;
//}
//void test6() {
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//	int arr[10] = { 0 };
//	int(*parr)[10] = &arr;//ȡ������ĵ�ַ
//	//parr��һ������ָ��,��������ĵ�ַ,ָ��һ������
//
//	//����ָ��---ָ������ָ��,���溯���ĵ�ַ��ָ��
//	printf("0X%p\n", &Add);//&������ȡ���ľ��Ǻ����ĵ�ַ
//	printf("0X%p\n", Add);
//	//������ != &������
//	//������ == &������
//	int(*pf)(int, int) = &Add;
//	//pf����һ������ָ�����
//	printf("%d\n", (*pf)(3, 5));
//	int(*pF)(int, int) = Add;
//	printf("%d\n", (*pF)(3, 5));
//	printf("%d\n", pF(3, 5));
//	printf("%d\n", Add(3, 5));
//	printf("%d\n", (***pF)(3, 5));
//}
//void test7() {
//	//(*(void(*)())0)();//ѡ��<C�����ȱ��>	���������˼��0��ַ����������޷���ֵ�ĺ����ĺ����������
//	//��ϸ���:
//	//1.void(*)()	һ��ָ��������޷������͵ĺ����ĺ���ָ������
//	//2.(void(*)())0	��0����ǿ������ת��Ϊ�����ĺ���ָ������,�����һ�������ĵ�ַ
//	//3.*(void(*)())0	������0��ַ���ĺ����ĵ�ַ���н�����
//	//4.(*(void(*)())0)();	һ��0��ַ��������޷������͵ĺ����ĺ����������
//
//	void(*signal(int, void(*)(int)))(int);//���������˼��һ����������signal,���������ֱ���int��,��void(*)(int)����ָ������,�����ķ���ֵ������void(*)(int)����ָ�����͵ĺ����������,��void(*)(int)�������ָ��������һ��ָ�������int����������void�ĺ����ĺ���ָ������
//	//void(*)(int) signal(int, void(*)(int));
//
//	typedef void(*pFunc)(int);//��void(*)(int)�������ָ�����ͽ���������ΪpFunc
//	pFunc signal(int, pFunc);
//}
//int main() {
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	//test5();
//	//test6();
//	//test7();
//	return 0;
//}
//#include <stdio.h>
//#include <assert.h>
//int Add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//int Mul(int x, int y) {
//	return x * y;
//}
//int Div(int x, int y) {
//	if (y) {
//		return x / y;
//	}
//	else {
//		printf("Err:Div by Zero!\n");
//		return -1;
//	}
//}
//void test1() {
//	//����ָ������--->��ź���ָ�������
//	//int(*pf1)(int, int) = Add;
//	//int(*pf2)(int, int) = Sub;
//	int(*fPArr[])(int, int) = { Add, Sub, Mul, Div };//fPArr����һ������ָ������
//	int sz = (int)(sizeof(fPArr) / sizeof(fPArr[0]));
//}
//void Menu() {
//	printf("*****************************\n");
//	printf("*****    ������С����   *****\n");
//	printf("*****  1.Add     2.Sub  *****\n");
//	printf("*****  3.Mul     4.Div  *****\n");
//	printf("*****       0.Exit      *****\n");
//	printf("*****************************\n");
//}
//void test() {
//	//ʵ��һ��������-�������ͱ����ļ�,��,��,��
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do {
//		Menu();
//		printf("����������ѡ��:>");
//		scanf("%d", &input);
//		switch (input) {
//		case 0:
//			printf("�˳�������С����!\n");
//			break;
//		case 1:
//			printf("��������Ҫ���������ֵ:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("��������Ҫ���������ֵ:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("��������Ҫ���������ֵ:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("��������Ҫ���������ֵ:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		default:
//			printf("���������������,����������!\n");
//			break;
//		}
//	} while (input);
//}
//int main() {
//	//test1();
//	//test();
//	return 0;
//}
//#include <stdio.h>
//#include <assert.h>
//int Add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//int Mul(int x, int y) {
//	return x * y;
//}
//int Div(int x, int y) {
//	if (y) {
//		return x / y;
//	}
//	else {
//		printf("Err:Div by Zero!\n");
//		return -1;
//	}
//}
//void Menu() {
//	printf("**********************************\n");
//	printf("*****       ������С����       *****\n");
//	printf("*****  1.Add          2.Sub  *****\n");
//	printf("*****  3.Mul          4.Div  *****\n");
//	printf("*****         0.Exit         *****\n");
//	printf("**********************************\n");
//}
//int main() {
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*FuncPArr[])(int, int) = { NULL, Add, Sub, Mul, Div };//FuncPArr���Ǻ���ָ������,����ָ�������Ӧ��--->ת�Ʊ�
//	int sz = (int)(sizeof(FuncPArr) / sizeof(*FuncPArr));
//	do
//	{
//		Menu();
//		printf("����������ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= sz - 1) {
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", (*FuncPArr[input])(x, y));
//		}
//		else if (input == 0){
//			printf("�˳�������С����!\n");
//		}
//		else {
//			printf("���������������,����������!\n");
//		}
//	} while (input);
//	return 0;
//}
//#include <stdio.h>
//#include <assert.h>
//int Add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//int Mul(int x, int y) {
//	return x * y;
//}
//int Div(int x, int y) {
//	if (y) {
//		return x / y;
//	}
//	else {
//		printf("Err:Div by Zero!\n");
//		return -1;
//	}
//}
//int Calc(int(*pFun)(int, int), int x, int y) {//�ص������Ż�
//	assert(pFun != NULL);
//	printf("������������������:>");
//	scanf("%d%d", &x, &y);
//	return (*pFun)(x, y);
//}
//int main() {
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	do {
//		printf("****************************\n");
//		printf("*****    ������С����    *****\n");
//		printf("***** 1.Add      2.Sub *****\n");
//		printf("***** 3.Mul      4.Div *****\n");
//		printf("*****      0.Exit      *****\n");
//		printf("****************************\n");
//		printf("����������ѡ��:>");
//		scanf("%d", &input);
//		switch (input) {
//		case 0:
//			printf("�˳�������С����!\n");
//			break;
//		case 1:
//			printf("%d\n", Calc(Add, x, y));//�ص������Ż�
//			break;
//		case 2:
//			printf("%d\n", Calc(Sub, x, y));
//			break;
//		case 3:
//			printf("%d\n", Calc(Mul, x, y));
//			break;
//		case 4:
//			printf("%d\n", Calc(Div, x, y));
//			break;
//		default:
//			printf("���������������,����������!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//#include <stdio.h>
//#include <stdbool.h>
//#include <assert.h>
//void print(int* pa, int sz) {
//	assert(pa != NULL);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", *pa++);
//	}
//	printf("\n");
//}
//void MyBubbleSort(int* pa, int sz) {
//	assert(pa != NULL);
//	int i = 0;
//	int j = 0;
//	bool flag = true;
//	for (i = 0; i < sz - 1; i++) {
//		flag = true;
//		for (j = 0; j < sz - 1 - i; j++) {
//			if (pa[j] > pa[j + 1]) {
//				int tmp = pa[j];
//				pa[j] = pa[j + 1];
//				pa[j + 1] = tmp;
//				flag = false;
//			}
//		}
//		if (flag) {
//			break;
//		}
//	}
//}
//int main() {
//	//qsort��C���Կ⺯���а����ĺ���,��quick-sort��������
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	print(arr, sz);
//	MyBubbleSort(arr, sz);//������
//	print(arr, sz);
//	return 0;
//}
//#include <stdio.h>
//#include <assert.h>
//#include <stdlib.h>
//#include <stdbool.h>
//int int_cmp(const void* px, const void* py) {
//	assert(px != NULL && py != NULL);
//	return ((*(int*)px) - (*(int*)py));
//}
//void print(int* pa, int sz) {
//	assert(pa != NULL);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", *pa++);
//	}
//	printf("\n");
//}
//void test0() {
//	//qsort��������ԭ��:void qsort(void* base, size_t num, size_t size,  int(*cmp)(const void*, const void*));	qsort������<stdlib.h>ͷ�ļ���
//	//base�д�ŵ��Ǵ����������е�һ������ĵ�ַ,num�Ǵ���������Ԫ�ظ���,size�Ǵ�����������һ��Ԫ����ռ�ֽڵĴ�С,cmp�������ָ���������Ƚϴ����������е�����Ԫ�صĺ���
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	print(arr, sz);
//	qsort(arr, sz, sizeof(arr[0]), int_cmp);
//	print(arr, sz);
//}
//int main() {
//	test0();
//	return 0;
//}
//#include <stdlib.h>
//#include <assert.h>
//#include <stdbool.h>
//#include <string.h>
//#include <stdio.h>
//void print_arr(int* arr, int sz) {
//	assert(arr != NULL);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", *arr++);
//	}
//	printf("\n");
//}
//int cmp_int(const void* e1, const void* e2) {
//	assert(e1 != NULL && e2 != NULL);
//	return -((*(int*)e1) - (*(int*)e2));//�Ž���
//}
//void test0() {
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 11, 12, 13, 14, 15 };
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	print_arr(arr, sz);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//const double Eps = 1e-6;
//int cmp_double(const void* e1, const void* e2) {
//	//if (((*(double*)e1) - (*(double*)e2)) > Eps) {
//	//	return 1;
//	//}
//	//else if (((*(double*)e1) - (*(double*)e2)) < -Eps){
//	//	return -1;
//	//}
//	//else {
//	//	return 0;
//	//}
//	double ret = (*(double*)e1) - (*(double*)e2);
//	if (ret < -Eps) {
//		return -1;
//	}
//	else if (ret > Eps) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//void test1() {
//	double d[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0, 0.0 };
//	int sz = (int)(sizeof(d) / sizeof(d[0]));
//	qsort(d, sz, sizeof(d[0]), cmp_double);
//}
//typedef struct _Stu {
//	char _name[20];
//	int _age;
//} Stu;
//int cmp_by_str(const void* e1, const void* e2) {
//	assert(e1 != NULL && e2 != NULL);
//	return strcmp((((Stu*)e1)->_name), (((Stu*)e2)->_name));
//}
//int cmp_by_age(const void* e1, const void* e2) {
//	assert(e1 != NULL && e2 != NULL);
//	return (((Stu*)e1)->_age - ((Stu*)e2)->_age);
//}
//void test2() {
//	Stu s[] = { { "zhangsan", 30 }, { "lisi", 34 }, { "wangwu", 20 } };
//	int sz = (int)(sizeof(s) / sizeof(*s));
//	qsort(s, sz, sizeof(*s), cmp_by_str);
//	qsort(s, sz, sizeof(*s), cmp_by_age);
//}
//void MySwap(char* p1, char* p2, size_t eleSize) {
//	assert(p1 != NULL && p2 != NULL);
//	while (eleSize--) {
//		char tmp = *p1;
//		*p1 = *p2;
//		*p2 = tmp;
//		p1++;
//		p2++;
//	}
//}
//void MyBubbleSort(void* base, size_t sz, size_t eleSize, int(*cmp)(const void*, const void*)) {//ģ��qsort����ʵ��һ��������������������͵������ð������
//	assert(base != NULL && cmp != NULL);
//	bool flag = true;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++) {
//		flag = true;
//		for (j = 0; j < sz - 1 - i; j++) {
//			if (cmp((char*)base + j * eleSize, (char*)base + (j + 1) * eleSize) > 0) {
//				MySwap((char*)base + j * eleSize, (char*)base + (j + 1) * eleSize, eleSize);
//				flag = false;
//			}
//		}
//		if (flag) {
//			break;
//		}
//	}
//}
//int sort_int(const void* e1, const void* e2) {
//	assert(e1 != NULL && e2 != NULL);
//	return -((*(int*)e1) - (*(int*)e2));
//}
//void test3() {
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 11, 12, 13, 14, 15, 16 };
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	MyBubbleSort(arr, sz, sizeof(arr[0]), sort_int);
//}
//void test4() {
//	Stu s[] = { { "zhangsan", 30 }, { "lisi", 34 }, { "wangwu", 20 } };
//	int sz = (int)(sizeof(s) / sizeof(*s));
//	MyBubbleSort(s, sz, sizeof(*s), cmp_by_str);
//	MyBubbleSort(s, sz, sizeof(*s), cmp_by_age);
//}
//int cmp_str(const void* e1, const void* e2) {
//	assert(e1 != NULL && e2 != NULL);
//	return strcmp(*(char**)e1, *(char**)e2);
//}
//void test5() {
//	char* cPArr[] = { "Micorsoft", "HuaWei", "Apple", "Google", "IBM" };
//	int sz = (int)(sizeof(cPArr) / sizeof(cPArr[0]));
//	MyBubbleSort(cPArr, sz, sizeof(cPArr[0]), cmp_str);
//}
//typedef struct _Emp {
//	char* _name;
//	int _age;
//} Emp;
//int sort_by_name(const void* e1, const void* e2) {
//	assert(e1 != NULL && e2 != NULL);
//	return strcmp(((Emp*)e1)->_name, ((Emp*)e2)->_name);
//}
//void test6() {
//	Emp e[] = { { "Peter", 20}, { "Eric", 18 }, { "Frank", 11 } };
//	int sz = (int)(sizeof(e) / sizeof(e[0]));
//	MyBubbleSort(e, sz, sizeof(e[0]), sort_by_name);
//}
//int main() {
//	//qsort-quicksort-C�⺯��-<stdlib.h>ͷ�ļ�,���ڿ��������������͵�����,����ԭ��:
//	//void qsort(void* base, size_t sz, size_t eleSize,											int(*cmp)(const void*, const void*));
//	//test0();
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	//test5();
//	//test6();
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//void test0() {
//	int a[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a + 0));//4/8
//	printf("%d\n", sizeof(*a));//4
//	printf("%d\n", sizeof(a + 1));//4/8
//	printf("%d\n", sizeof(a[1]));//4
//
//	printf("%d\n", sizeof(&a));//4/8
//	printf("%d\n", sizeof(*&a));//16
//	printf("%d\n", sizeof(&a + 1));//4/8
//	printf("%d\n", sizeof(&a[0]));//4/8
//	printf("%d\n", sizeof(&a[0] + 1));//4/8
//}
//void test1() {
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	//printf("%d\n", strlen(arr));//>=6�������
//	//printf("%d\n", strlen(arr + 0));//>=6�������
//	//printf("%d\n", strlen(*arr));//�Ƿ�����/��ȡ��ַ0x61������
//	//printf("%d\n", strlen(arr[1]));//�Ƿ�����/��ȡ��ַ0x62������
//	//printf("%d\n", strlen(&arr));//>=6�������
//	//printf("%d\n", strlen(&arr + 1));//>=0�������
//	//printf("%d\n", strlen(&arr[0] + 1));//>=5�������
//
//	//printf("%d\n", sizeof(arr));//6
//	//printf("%d\n", sizeof(arr + 0));//4/8
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4/8
//	//printf("%d\n", sizeof(&arr + 1));//4/8
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8
//}
//void test2() {
//	char arr[] = "abcdef";
//	//printf("%d\n", strlen(arr));//6
//	//printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//err:�Ƿ�����/��ȡ��ַ0X00000061������
//	//printf("%d\n", strlen(arr[1]));//err:�Ƿ�����/��ȡ��ַ0X00000061������
//	//printf("%d\n", strlen(&arr));//6
//	//printf("%d\n", strlen(&arr + 1));//>=0�����ֵ
//	//printf("%d\n", strlen(&arr[0] + 1));//5
//
//	//printf("%d\n", sizeof(arr));//7
//	//printf("%d\n", sizeof(arr + 0));//4/8
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4/8
//	//printf("%d\n", sizeof(&arr + 1));//4/8
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8
//}
//void test3() {
//	char* p = "abcdef";
//	//printf("%d\n", strlen(p));//6
//	//printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//err:�Ƿ�����/��ȡ��ַ0X00000061������
//	//printf("%d\n", strlen(p[0]));//err:�Ƿ�����/��ȡ��ַ0X00000061������
//	//printf("%d\n", strlen(&p));//���ֵ
//	//printf("%d\n", strlen(&p + 1));//���ֵ
//	//printf("%d\n", strlen(&p[0] + 1));//5
//
//	//printf("%d\n", sizeof(p));//4/8
//	//printf("%d\n", sizeof(p + 1));//4/8
//	//printf("%d\n", sizeof(*p));//1
//	//printf("%d\n", sizeof(p[0]));//1
//	//printf("%d\n", sizeof(&p));//4/8
//	//printf("%d\n", sizeof(&p + 1));//4/8
//	//printf("%d\n", sizeof(&p[0] + 1));//4/8
//}
//void test4() {
//	int a[3][4] = { 0 };
//	//printf("%d\n", sizeof(a));//48
//	//printf("%d\n", sizeof(a[0][0]));//4
//	//printf("%d\n", sizeof(a[0]));//16
//	//printf("%d\n", sizeof(a[0] + 1));//4/8
//	//printf("%d\n", sizeof(*(a[0] + 1)));//4
//	//printf("%d\n", sizeof(a + 1));//4/8
//	//printf("%d\n", sizeof(*(a + 1)));//16
//	//printf("%d\n", sizeof(&a[0] + 1));//4/8
//	//printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	//printf("%d\n", sizeof(*a));//16
//	//printf("%d\n", sizeof(a[3]));//16
//}
//void test() {
//	//test0();
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	//�ܽ�:������������	1.sizeof(������),�������������ʾ��������,�����������������ռ�ڴ�ռ�Ĵ�С,��λ���ֽ�
//	//					2.&������,�������������ʾ��������,ȡ��������������ĵ�ַ
//	//					3.����֮�����е�����������ʾ��Ԫ�صĵ�ַ
//}
//int main() {
//	test();
//	return 0;
//}

//#include <string.h>
//#include <stdio.h>
//void test0() {
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2 ,5
//}
//void test1() {
//	short s = 5;
//	int a = 4;
//	printf("%d\n", sizeof(s = a + 6));//2
//	printf("%d\n", s);//5
//}
//#pragma warning(disable:6066)
//void test2() {
//	struct Test {
//		int _Num;
//		char* pcName;
//		short _sDate;
//		char _cha[2];
//		short _sBa[4];
//	} *p;
//	p = (struct Test*)0X100000;//����p�ĵ�ַ��0X100000
//	printf("%p\n", p + 0x1);//00100014
//	printf("%p\n", (void*)((unsigned long)p + 0x1));//00100001
//	printf("%p\n", (unsigned int*)p + 0x1);//00100004
//}
//void test3() {
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x, %x\n", ptr1[-1], *ptr2);//4, 2000000
//}
//void test4() {
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int* p = a[0];
//	printf("%d\n", p[0]);//1
//}
//void test5() {
//	int a[5][5];
//	int(*p)[4];
//	p = (int(*)[4])a;
//	printf("%p, %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//ff ff ff fc, -4
//}
//void test6() {
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d, %d\n", *(ptr1 - 1), *(ptr2 - 1));//10, 5
//}
//void test7() {
//	char* a[] = { "work", "at", "alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);//at
//}
//void test8() {
//	char* c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	char** cp[] = { c + 3, c + 2, c + 1, c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//POINT
//	printf("%s\n", *-- * ++cpp + 3);//ER
//	printf("%s\n", *cpp[-2] + 3);//ST
//	printf("%s\n", cpp[-1][-1] + 1);//EW
//}
//void test() {
//	//test0();
//	//test1();//2,5
//	//test2();
//	//test3();
//	//test4();
//	//test5();
//	//test6();
//	//test7();
//	//test8();
//}
//int main() {
//	test();
//	return 0;
//}
//#include <stdio.h>
//#include <stdbool.h>
//#include <assert.h>
//#include <string.h>
//bool is_exist1(int(*p)[4], int row, int col, int k, int* px, int* py) {
//	assert(p != NULL && px != NULL && py != NULL);
//	int r = row - 1;
//	int c = 0;
//	while (r >= 0 && c < col) {
//		if (p[r][c] > k) {
//			r--;
//		}
//		else if (p[r][c] < k) {
//			c++;
//		}
//		else {
//			*px = r;
//			*py = c;
//			return true;
//		}
//	}
//	return false;
//}
//bool is_exist(int(*p)[4], int row, int col, int k, int* px, int* py) {
//	assert(p != NULL && px != NULL && py != NULL);
//	int r = 0;
//	int c = col - 1;
//	while ((c >= 0) && (r < row)) {
//		if (p[r][c] > k) {
//			c--;
//		}
//		else if (p[r][c] < k) {
//			r++;
//		}
//		else {
//			*px = r;
//			*py = c;
//			return true;
//		}
//	}
//	return false;
//}
//void test0() {
//	//���Ͼ�������:��һ�����־������ÿ�д������ǵ�����,������ϵ����ǵ�����,���д�����������ľ����в���ĳ�������Ƿ����,Ҫ��ʱ�临�Ӷ�С��O(N)
//	int arr[][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } };
//	int k = 0;
//	int x = 0;
//	int y = 0;
//	while (1) {
//		scanf("%d", &k);
//		int row = (int)(sizeof(arr) / sizeof(arr[0]));
//		if (is_exist1(arr, row, 4, k, &x, &y)) {
//			printf("%d�ھ����д���,��������%d,��������%d\n", k, x, y);
//		}
//		else {
//			printf("find none!\n");
//		}
//	}
//}
//void reverse(char* pl, char* pr) {
//	assert(pl != NULL && pr != NULL);
//	while (pl < pr) {
//		char t = *pl;
//		*pl = *pr;
//		*pr = t;
//		pl++;
//		pr--;
//	}
//}
//size_t MyStrlen(const char* str) {
//	assert(str != NULL);
//	const char* eos = str;
//	while (*eos++) {
//		;
//	}
//	return (eos - str - 1);
//}
//void string_left_rotate1(char* arr, int k) {
//	assert(arr != NULL);
//	int len = (int)MyStrlen(arr);
//	k %= len;
//	while (k--) {
//		char tmp = arr[0];
//		int i = 1;
//		while (i < len) {
//			arr[i - 1] = arr[i];
//			i++;
//		}
//		arr[len - 1] = tmp;
//	}
//}
//void string_left_rotate(char* arr, int k) {
//	assert(arr != NULL);
//	int len = (int)MyStrlen(arr);
//	k %= len;
//	if (k) {
//		reverse(arr, arr + k - 1);
//		reverse(arr + k, arr + len - 1);
//		reverse(arr, arr + len - 1);
//	}
//}
//void test1() {
//	char arr[] = "ABCDEFGH";
//	int k = 0;
//	scanf("%d", &k);
//	string_left_rotate(arr, k);
//	puts(arr);
//}
//int MyStrcmp(const char* s1, const char* s2) {
//	assert(s1 != NULL && s2 != NULL);
//	while (*s1 == *s2) {
//		if (*s1 == '\0')
//			return 0;
//		s1++, s2++;
//	}
//	return *s1 - *s2;
//}
//char* MyStrstr(const char* str, const char* subStr) {//�򵥵���ʵ��strstr
//	assert(str != NULL && subStr != NULL);
//	if (*subStr == '\0') {
//		return (char*)str;
//	}
//	int lenStr = (int)MyStrlen(str);
//	int lenSubStr = (int)MyStrlen(subStr);
//	if (lenStr < lenSubStr) {
//		return NULL;
//	}
//	int i = 0;
//	int j = 0;
//	for (i = 0; (i + lenSubStr) <= lenStr; i++) {
//		for (j = 0; j < lenSubStr; j++) {
//			if (str[i + j] != subStr[j]) {
//				break;
//			}
//		}
//		if (j == lenSubStr) {
//			return (char*)(str + i);
//		}
//	}
//	return NULL;
//}
//bool is_string_rotate1(char* str1, char* str2) {
//	assert(str1 != NULL && str2 != NULL);
//	if (MyStrlen(str1) != MyStrlen(str2))
//		return false;
//	int len = (int)MyStrlen(str1);
//	for (int i = 0; i < len; i++) {
//		char tmp = str1[0];
//		for (int j = 0; j < len - 1; j++) {
//			str1[j] = str1[j + 1];
//		}
//		str1[len - 1] = tmp;
//		if (!strcmp(str1, str2)) {
//			return true;
//		}
//	}
//	return false;
//}
//bool is_string_rotate(char* str1, char* str2) {
//	assert(str1 != NULL && str2 != NULL);
//	if (MyStrlen(str1) != MyStrlen(str2))
//		return false;
//	int len = (int)MyStrlen(str1);
//	strncat(str1, str1, len);
//	return strstr(str1, str2);
//	//if (strstr(str1, str2)) {
//	//	return true;
//	//}
//	//else {
//	//	return false;
//	//}
//}
//void test2() {
//	char arr1[100] = "AABCD";
//	char arr2[100] = "BCDAA";
//	if (is_string_rotate(arr1, arr2)) {
//		printf("Yes!\n");
//	}
//	else {
//		printf("No!\n");
//	}
//}
//void test3() {
//	int aa[2][5] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d, %d\n", *(ptr1 - 1), *(ptr2 - 1));
//}
//void test4() {
//	int a[5] = { 5, 4, 3, 2, 1 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d %d\n", *(a + 1), *(ptr - 1));//4	1
//}
//void Print(int* pa, int sz) {
//	assert(pa != NULL);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", *pa++);
//	}
//	printf("\n");
//}
//int cmp_int(const void* e1, const void *e2) {
//	assert(e1 != NULL && e2 != NULL);
//	return *(int*)e1 - *(int*)e2;
//}
//void MySwap(char* p1, char* p2, size_t eleSize) {
//	assert(p1 != NULL && p2 != NULL);
//	while (eleSize--) {
//		char t = *p1;
//		*p1 = *p2;
//		*p2 = t;
//		p1++;
//		p2++;
//	}
//}
//void MyBubbleSort(void* base, size_t sz, size_t eleSize, int(*cmp)(const void*, const void*)) {
//	assert(base != NULL && cmp != NULL);
//	bool flag = true;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < (int)sz - 1; i++) {
//		flag = true;
//		for (j = 0; j < (int)sz - 1 - i; j++) {
//			if (cmp((char*)base + j * eleSize, (char*)base + (j + 1) * eleSize) > 0) {
//				MySwap((char*)base + j * eleSize, (char*)base + (j + 1) * eleSize, eleSize);
//				flag = false;
//			}
//		}
//		if (flag)	break;
//	}
//}
//int cmp_str(const void* e1, const void* e2) {
//	assert(e1 != NULL && e2 != NULL);
//	return strcmp(*(char**)e1, *(char**)e2);
//}
//void test5() {
//	//int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	char* arr[] = { "Alibaba", "Baidu", "Tecent", "HuaWei", "Totik" };
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	//MyBubbleSort(arr, sz, sizeof(arr[0]), cmp_int);
//	MyBubbleSort(arr, sz, sizeof(arr[0]), cmp_str);
//	//Print(arr, sz);
//}
//void test() {
//	//test0();
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	//test5();
//}
//int main() {
//	test();
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//#include <ctype.h>
//#include <errno.h>
//size_t MyStrlen(const char* str) {
//	assert(str != NULL);
//	size_t count = 0;
//	while (*str++) {
//		count++;
//	}
//	return count;
//}
//size_t _my_strlen(const char* str) {
//	assert(str != NULL);
//	if (*str) {
//		return (1 + _my_strlen(str + 1));
//	}
//	else {
//		return 0;
//	}
//}
//size_t my_strlen(const char* str) {
//	assert(str != NULL);
//	const char* eos = str;
//	while (*eos++) {
//		;
//	}
//	return (eos - str - 1);
//}
//void test0() {
//	//char arr1[] = "abc";
//	//int len = (int)strlen(arr1);
//	//printf("len = %d\n", len);//3
//	//char arr2[] = { 'a', 'b', 'c' };
//	//printf("%d\n", strlen(arr2));//>=3�����ֵ
//	const char* str1 = "abcdef";
//	const char* str2 = "bbb";
//	if (strlen(str2) - strlen(str1) > 0) {
//		printf("str2 > str1\n");//ok
//	}
//	else {
//		printf("str1 > str2\n");
//	}
//	printf("%d\n", _my_strlen("a"));
//	printf("%d\n", my_strlen("a"));
//	printf("%d\n", MyStrlen("a"));
//}
//char* MyStrcpy(char* dest, const char* src) {
//	assert(dest != NULL && src != NULL);
//	char* cp = dest;
//	while ((*cp++ = *src++) != '\0') {
//		;
//	}
//	return (dest);
//}
//void test1() {
//	//char arr[20] = "";
//	////arr = "hello";//err:arr��������Ϊ��Ԫ�صĵ�ַ,�����ǳ���,��������ֵ
//	////char* p = "hello";//ok:�����ǽ�rodata�ε�һ�������ַ�hello\0���ַ�h�ĵ�ֵַ�����ַ�ָ�����p
//	//puts(strcpy(arr, "hello"));
//	//printf("%s\n", arr);
//
//	//char arr2[20] = "###############";
//	//puts(strcpy(arr2, "hello"));
//
//	//char arr1[1024] = "###############";
//	//char arr3[] = { 'a', 'b', 'c' };
//	//puts(strcpy(arr1, arr3));//err:Խ�����
//
//	//char arr[5] = "####";
//	//char* p = "hello world";
//	//puts(strcpy(arr, p));//err:Ŀ��ռ�̫С�޷�����Դ�ַ���,����Խ�����/��ȡ/д����ɴ���
//
//	//char arr[20] = "";
//	//puts(MyStrcpy(arr, "Tell Me Why!"));
//}
//char* MyStrcat(char* dest, const char* src) {//�ַ���׷��
//	assert(dest != NULL && src != NULL);
//	char* cp = dest;
//	while (*cp) {
//		cp++;
//	}
//	while ((*cp++ = *src++) != '\0') {
//		;
//	}
//	return (dest);
//}
//void test2() {
//	//char arr[20] = "hello ";
//	//puts(strcat(arr, "world"));
//	//puts(MyStrcat(arr, " world"));
//	//puts(arr);
//	//char arr1[20] = "hello \0##########";
//	//char arr2[] = "world";
//	//puts(MyStrcat(arr1, arr2));
//	//printf(MyStrcat(arr1, arr2));
//	//�ַ���׷�Ӻ���strcat���ܸ��Լ�׷��(����ѭ��),Ӧ��ʹ��strncat����
//	//char arr[20] = "hello";
//	//MyStrcat(arr, arr);
//}
//int MyStrcmp(const char* s1, const char* s2) {
//	assert(s1 != NULL && s2 != NULL);
//	while (*s1 == *s2) {
//		if (*s1 == '\0') {
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//void test3() {
//	//const char* p = "obc";
//	//const char* q = "abcdef";
//	//if (p > q) {//err:����Ƚϴ�С������,����Ƚϵ�������ָ��Ĵ�С,�����ǱȽϵ�ָ��ָ����ַ�����С
//	//	printf(">\n");
//	//}
//	//else {
//	//	printf("<=\n");
//	//}
//
//	//if ("obc" > "abcdef") {//err:����Ƚϴ�С������,C���ַ�������һ�㱻����Ϊָ��rodata�ε�һ�������ַ����ַ���ָ��(sizeof(�ַ�������),&�ַ�����������),�������ﻹ���ڴ��е�������ַ���бȽϴ�С
//	//	printf(">\n");
//	//}
//	//else {
//	//	printf("<=\n");
//	//}
//
//	//strcmp---string compare�ַ����ȽϺ���
//	//int ret = strcmp("abbb", "abq");
//	//printf("%d\n", ret);//<0
//
//	//int ret = strcmp("aqqq", "aaa");
//	//printf("%d\n", ret);//>0
//
//	//int ret = strcmp("aaa", "aaa");
//	//printf("%d\n", ret);//==0
//
//	if (!MyStrcmp("abc", "abc")) {
//		printf("abc == abc\n");
//	}
//	else if (MyStrcmp("abc", "abc") > 0) {
//		printf("abc >  abc\n");
//	}
//	else {
//		printf("abc <  abc\n");
//	}
//}
//void test4() {
//	const char* p = "abcdef";
//	const char* q = "abcdef";
//	int ret = MyStrcmp(p, q);
//	if (ret == 0) {
//		printf("p == q\n");
//	}
//	else if (ret > 0) {
//		printf("p >  q\n");
//	}
//	else {
//		printf("p <  q\n");
//	}
//}
//#pragma warning(disable:6053)
//char* MyStrncpy(char* dest, const char* src, size_t count) {//��ʵ��strncpy����
//	assert(dest != NULL && src != NULL);
//	char* cp = dest;
//	while (count && ((*cp++ = *src++) != '\0')) {
//		count--;
//	}
//	if (count) {
//		while (--count) {
//			*cp++ = '\0';
//		}
//	}
//	return (dest);
//}
//void test5() {
//	//char arr1[20] = "abcdef";
//	//char arr2[] = "qwer";
//	//MyStrncpy(arr1, arr2, 2);
//	//printf(arr1);//qwcdef	ע��strncpy���������\0
//	//printf("\n");
//	//char arr3[20] = "abcdefghijk";
//	//char arr4[] = "qwer";
//	//MyStrncpy(arr3, arr4, 8);
//	//printf(arr3);//qwer		ע��ͨ�����Կ��Է��ֵ�count����Դ�ַ�������ʱ,�����Ĳ��ֲ�\0
//
//	//char str1[] = "To be or not to be";//OK
//	//char str2[40];
//	//char str3[40];
//	//strncpy(str2, str1, sizeof(str2));
//	//strncpy(str3, str2, 5);
//	//str3[5] = '\0';
//	//puts(str1);
//	//puts(str2);
//	//puts(str3);
//}
//#pragma warning(disable:6001)
//char* MyStrncat(char* dest, const char* src, size_t count) {
//	assert(dest != NULL && src != NULL);
//	char* cp = dest;
//	while (*cp) {
//		cp++;
//	}
//	while (count--) {
//		if ((*cp++ = *src++) == 0) {
//			return (dest);
//		}
//	}
//	*cp = '\0';
//	return (dest);
//}
//void test6() {
//	//char arr1[20] = "hello \0xxxxxxxx";
//	//char arr2[] = "world";
//	//MyStrncat(arr1, arr2, 3);
//	//printf("%s\n", arr1);//hello wor	ע��strncat�������\0	 ���ǵ�count����Դ�ַ�������ʱ,ֱ��׷����Դ�ַ���Ȼ��ֹͣ
//
//	char str1[20];
//	char str2[20];
//	strcpy(str1, "To be ");
//	strcpy(str2, "or not to be");
//	strncat(str1, str2, 6);
//	puts(str1);
//}
//int MyStrncmp(const char* s1, const char* s2, size_t count) {
//	assert(s1 != NULL && s2 != NULL);
//	if (!count) {
//		return 0;
//	}
//	while (--count && *s1 == *s2) {//ע����--count
//		if (*s1 == '\0') {
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//void test7() {
//	char str[][5] = { "R2D2" , "C3PO" , "R2A6" };
//	int n;
//	puts("Looking for R2 astromech droids...");
//	for (n = 0; n < 3; n++) {
//		if (MyStrncmp(str[n], "R2xx", 2) == 0) {
//			printf("found %s\n", str[n]);
//		}
//	}
//	char* p = "abcdef";
//	char* q = "abcqwert";
//	int ret = strcmp(p, q);
//	printf("ret = %d\n", ret);//<0
//	ret = MyStrncmp(p, q, 3);
//	printf("ret = %d\n", ret);//==0
//	ret = MyStrncmp(p, q, 4);
//	printf("ret = %d\n", ret);//<0
//}
//char* MyStrstr(const char* str, const char* subStr) {//�򵥵���ʵ��strstr
//	assert(str != NULL && subStr != NULL);
//	if (*subStr == '\0') {
//		return (char*)str;
//	}
//	int lenStr = (int)MyStrlen(str);
//	int lenSubStr = (int)MyStrlen(subStr);
//	if (lenStr < lenSubStr) {
//		return NULL;
//	}
//	int i = 0;
//	int j = 0;
//	for (i = 0; (i + lenSubStr) <= lenStr; i++) {
//		for (j = 0; j < lenSubStr; j++) {
//			if (str[i + j] != subStr[j]) {
//				break;
//			}
//		}
//		if (j == lenSubStr) {
//			return (char*)(str + i);
//		}
//	}
//	return NULL;
//}
//void test8() {
//	//char arr1[] = "abcdef";
//	//char arr2[] = "bcd";
//	////��arr1�в����Ƿ����arr2
//	//char* pF = MyStrstr(arr1, arr2);
//	//if (pF) {
//	//	printf("Yes\n");
//	//	printf("%s\n", pF);
//	//}
//	//else {
//	//	printf("No\n");
//	//}
//
//	char str[] = "This is a simple string";
//	char* pch;
//	pch = strstr(str, "simple");
//	if (pch != NULL)
//		strncpy(pch, "sample", 6);
//	puts(str);
//}
////size_t MyStrlen(const char* str) {
////	assert(str != NULL);
////	size_t count = 0;
////	while (*str++) {
////		count++;
////	}
////	return count;
////}
////size_t _my_strlen(const char* str) {
////	assert(str != NULL);
////	if (*str) {
////		return (1 + _my_strlen(str + 1));
////	}
////	else {
////		return 0;
////	}
////}
////size_t my_strlen(const char* str) {
////	assert(str != NULL);
////	const char* eos = str;
////	while (*eos++) {
////		;
////	}
////	return (eos - str - 1);
////}
////char* MyStrcpy(char* dest, const char* src) {
////	assert(dest != NULL && src != NULL);
////	char* cp = dest;
////	while ((*cp++ = *src++) != '\0') {
////		;
////	}
////	return (dest);
////}
////char* MyStrncpy(char* dest, const char* src, size_t count) {
////	assert(dest != NULL && src != NULL);
////	char* cp = dest;
////	while (count && ((*cp++ = *dest++) != '\0')) {
////		count--;
////	}
////	if (count) {
////		while (--count) {
////			*cp++ = '\0';
////		}
////	}
////	return (dest);
////}
////char* MyStrcat(char* dest, const char* src) {
////	assert(dest != NULL && src != NULL);
////	char* cp = dest;
////	while (*cp) {
////		cp++;
////	}
////	while ((*cp++ = *src++) != '\0') {
////		;
////	}
////	return (dest);
////}
////char* MyStrncat(char* dest, const char* src, size_t count) {
////	assert(dest != NULL && src != NULL);
////	char* cp = dest;
////	while (*cp) {
////		cp++;
////	}
////	while (count--) {
////		if ((*cp++ = *src++) == 0) {
////			return (dest);
////		}
////	}
////	*cp = '\0';
////	return (dest);
////}
////int MyStrcmp(const char* s1, const char* s2) {
////	assert(s1 != NULL && s2 != NULL);
////	while (*s1 == *s2) {
////		if (*s1 == '\0') {
////			return 0;
////		}
////		s1++;
////		s2++;
////	}
////	return *s1 - *s2;
////}
////int MyStrncmp(const char* s1, const char* s2, size_t count) {
////	assert(s1 != NULL && s2 != NULL);
////	if (!count) {//ע�����
////		return 0;
////	}
////	while (--count && *s1 == *s2) {
////		if (*s1 == '\0') {
////			return 0;
////		}
////		s1++;
////		s2++;
////	}
////	return *s1 - *s2;
////}
////char* MyStrstr(const char* str, const char* subStr) {
////	assert(str != NULL && subStr != NULL);
////	if (*subStr == '\0') {
////		return (char*)str;
////	}
////	int lenStr = (int)MyStrlen(str);
////	int lenSubStr = (int)MyStrlen(subStr);
////	if (lenStr < lenSubStr) {
////		return NULL;
////	}
////	int i = 0;
////	int j = 0;
////	for (i = 0; (i + lenSubStr) <= lenStr; i++) {
////		for (j = 0; j < lenSubStr; j++) {
////			if (str[i + j] != subStr[j]) {
////				break;
////			}
////		}
////		if (j == lenSubStr) {
////			return (char*)(str + i);
////		}
////	}
////	return NULL;
////}
//void test9() {
//	//zpw@bitedu.tech��������ַ����и�Ϊ zpw(������)	bitedu(����---Ҫ�����)	tech(������׺)
//	//192.168.30.54������ʮ����IP��ַ�ַ����и�Ϊ	192 168 30 54
//	//����������Ҫʹ��strtok�������	char* strtok(char* str, const char* sep);
//	char* p = "zpw@bitedu.tech hehe";
//	char str[30] = "";
//	strcpy(str, p);//����
//	char* pc = NULL;
//	const char* sep = "@. ";
//	for (pc = strtok(str, sep); pc != NULL; pc = strtok(NULL, sep)) {
//		puts(pc);
//	}
//
//	//const char* p = "192.168.30.54";
//	//const char* sep = ".";
//	//char arr[40] = "";
//	//strcpy(arr, p);//����
//	//for (char* pc = strtok(arr, sep); pc != NULL; pc = strtok(NULL, sep)) {
//	//	puts(pc);
//	//}
//
//	//char str[] = "- This, a sample string.";
//	//char arr[30] = "";
//	//strcpy(arr, str);//����
//	//const char* sep = " -,.";
//	//for (char* pc = strtok(arr, sep); pc != NULL; pc = strtok(NULL, sep)) {
//	//	puts(pc);
//	//}
//}
//void test10() {
//	//ʹ�ÿ⺯����ʱ��,���ÿ⺯��ʧ��ʱ,�������ô�����,���������ֵ��ֵ����C����ȫ�ִ��������errno��	int errno;
//	//printf("%s\n", strerror(0));
//	//printf("%s\n", strerror(1));
//	//printf("%s\n", strerror(2));
//	//printf("%s\n", strerror(3));
//	//printf("%s\n", strerror(4));
//	//printf("%s\n", strerror(5));
//
//	FILE* fp = fopen("test.txt", "r");
//	if (NULL == fp) {
//		//printf("fopen: %s\n", strerror(errno));
//		perror("fopen");//��stdio.hͷ�ļ���
//		return;
//	}
//	//...	����ҵ���߼�
//	fclose(fp);
//	fp = NULL;
//}
//void test11() {
//	//char* strerror(errno);	strerror������string.hͷ�ļ���,	errno��C���Զ����ȫ�ִ��������,��errno.hͷ�ļ���
//	FILE* fp = fopen("txt.txt", "r");
//	if (NULL == fp) {
//		printf("fopen: %s\n", strerror(errno));
//		perror("fopen");
//		return;
//	}
//	//...����ҵ���߼�����
//	fclose(fp);
//	fp = NULL;
//}
//void test12() {
//	//�ַ����ຯ��
//	//char ch = '#';
//	////isdigit����	����������������ַ�����0,����������ַ����ط�0
//	//int ret = isdigit(ch);
//	//printf("%d\n", ret);//0
//	//ch = '0';
//	//ret = isdigit(ch);
//	//printf("%d\n", ret);
//
//	//ch = 'Z';
//	////islower����	�����������Сд��ĸ����0,�����Сд��ĸ���ط�0
//	//ret = islower(ch);
//	//printf("%d\n", ret);//0
//	//ch = 'z';
//	//ret = islower(ch);
//	//printf("%d\n", ret);//2
//	//if (ch >= 'a' && ch <= 'z') {
//	//	printf("Yes!\n");
//	//}
//
//	int i = 0;
//	char str[] = "Test String.\n";
//	char c;
//	while (str[i])
//	{
//		c = str[i];
//		if (islower(c)) c = toupper(c);
//		putchar(c);
//		i++;
//	}
//}
//void test13() {
//	//char str[] = "The C String.";
//	//int c = 0;
//	//for (int i = 0; str[i]; i++) {
//	//	c = str[i];
//	//	if (isupper(c)) {
//	//		c = tolower(c);
//	//	}
//	//	putchar(c);
//	//}
//	//printf("\n%s\n", str);
//
//	char str[20] = "";
//	fgets(str, 20, stdin);
//	str[strlen(str) - 1] = '\0';
//	for (int i = 0; str[i]; i++) {
//		if (isupper(str[i])) {
//			str[i] = tolower(str[i]);
//		}
//		putchar(str[i]);
//	}
//}
//void test() {
//	//test0();
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	//test5();
//	//test6();
//	//test7();
//	//test8();
//	//test9();
//	//test10();
//	//test11();
//	//test12();
//	//test13();
//}
//int main() {
//	test();
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//void* MyMemcpy(void* dest, const void* src, size_t num) {
//	assert(dest != NULL && src != NULL);
//	void* cp = dest;
//	char* cpCpy = (char*)cp;
//	char* srcCpy = (char*)src;
//	while (num--) {
//		*cpCpy++ = *srcCpy++;
//	}
//	return (dest);
//}
//void test0() {
//	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr2[10] = { 0 };
//	//strcpy(arr2, arr1);//��strcpy����������������������
//	//Ӧ��ʹ���ڴ濽������-memcpy-����ԭ��:void* memcpy(void* dest, const void* src, size_t num);��string.hͷ�ļ���
//	int* p = (int*)memcpy(arr2, arr1, 5 * sizeof(int));
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", *p++);
//	}
//	printf("\n");
//}
//void* MyMemmove(void* dest, const void* src, size_t num) {
//	assert(dest != NULL && src != NULL);
//	void* cp = dest;
//	char* cpCpy = (char*)cp;
//	char* srcCpy = (char*)src;
//	if (cpCpy > srcCpy) {
//		while (num--) {
//			*(cpCpy + num) = *(srcCpy + num);
//		}
//	}
//	else {
//		while (num--) {
//			*cpCpy++ = *srcCpy++;
//		}
//	}
//	return (dest);
//}
//void test1() {
//	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	MyMemmove(arr1, arr1 + 2, 5 * sizeof(int));
//}
//int MyMemcmp(const void* ptr1, const void* ptr2, size_t num) {//memcmp����ģ��ʵ��
//	assert(ptr1 != NULL && ptr2 != NULL);
//	if (!num) {
//		return 0;
//	}
//	char* p1 = (char*)ptr1;
//	char* p2 = (char*)ptr2;
//	while (--num && *p1 == *p2) {
//		p1++;
//		p2++;
//	}
//	return *p1 - *p2;
//}
//void test2() {
//	//memcmp-�ڴ�Ƚ�-ͷ�ļ�string.h-����ԭ��: int memcmp(const void* ptr1, const void* ptr2, size_t num);
//	//memcmp������strcmp/strncmp��������ֵ�ж�˼·��Ʒǳ�����
//	float arr1[] = { 1.0f, 2.0f, 3.0f, 4.0f, 5.0f };
//	float arr2[] = { 1.0f, 3.0f };
//	int ret = MyMemcmp(arr1, arr2, 1 * sizeof(float));
//	printf("%d\n", ret);//0
//	int arr3[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr4[10] = { 1, 2 };
//	ret = MyMemcmp(arr3, arr4, 2 * sizeof(int));
//	printf("%d\n", ret);
//	ret = MyMemcmp(arr3, arr4, 9);
//	printf("%d\n", ret);//>0
//}
//void* MyMemset(void* ptr, int value, size_t num) {
//	assert(ptr != NULL);
//	void* cp = ptr;
//	char* cpCpy = (char*)cp;
//	while (num--) {
//		cpCpy[num] = value;
//	}
//	return (ptr);
//}
//void test3() {
//	int arr[10] = { 0 };
//	int* p = (int*)MyMemset(arr, 1, 5 * sizeof(int));//memset���������ֽ�Ϊ��λ�����ڴ��
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", *p++);
//	}
//	printf("\n");
//}
////struct {
////	char _name[40];
////	int _age;
////} person, person_copy;
////void test4() {
////	//char myname[] = "Pierre de Fermat";
////	//memcpy(person._name, myname, strlen(myname) + 1);
////	//person._age = 46;
////	//memcpy(&person_copy, &person, sizeof(person));
////	//printf("person_copy: %s, %d\n", person_copy._name, person_copy._age);
////
////	//char str[] = "memmove can be very useful......";
////	//memmove(str + 20, str + 15, 11);
////	//puts(str);
////}
//void test() {
//	//memcpyӦ�ÿ������ص����ڴ�	memmove���Դ����ڴ��ص������
//	//test0();
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//}
//int main() {
//	test();
//	return 0;
//}
//#include <stdio.h>
////struct tag {
////	member_list;
////} variable_list;
////struct Stu {
////	char _name[20];
////	int _age;
////	char _sex[5];
////	char _id[20];
////};//�ֺŲ��ܶ�
////struct _Book {
////	char _name[20];
////	int _price;
////	char _id[12];
////} b4, b5, b6;//b4,b5,b6��ȫ�ֵĽṹ�����
//////int a, b, c;
////struct {
////	int _a;
////	char _b;
////	float _c;
////} x;
////struct {
////	int _a;
////	char _b;
////	float _c;
////} a[20], *p;
//void test0() {
//	//struct _Book b1;
//	//struct _Book b2;
//	//struct _Book b3;//b1,b2,b3�Ǿֲ��Ľṹ�����
//
//	//p = &x;//warning
//}
////struct _A {
////	char _ch;
////	short _sh;
////	int _in;
////};
////struct _B {//OK
////	char _ch;
////	struct _A _sa;
////	double _d;
////};
////struct _N {
////	int _in;
////	struct _N _n;//err
////};
////struct _Node {//ok
////	int _data;
////	struct _Node* _next;
////};
////typedef struct _Node {//OK
////	int _data;
////	struct _Node* _next;
////} Node;
//void test1() {
//	//struct _N sn;//err
//}
////struct Point {
////	int _x;
////	int _y;
////} p1;
////struct Point p2;
////struct Point p3 = { 1, 2 };
////struct _Stu {
////	char _name[15];
////	int _age;
////};
////struct _Stu s = { "zhangsan", 20 };
////struct _Node {
////	int _data;
////	struct Point p;
////	struct _Node* _next;
////} n1 = { 10, { 4, 5 }, NULL };//�ṹ��������弰Ƕ�׳�ʼ��
////struct _Node n2 = { 20, { 5, 6 }, NULL };//�ṹ��������弰Ƕ�׳�ʼ��
////struct _S {
////	char _c;
////	int _i;
////} s1, s2;
////struct _B {
////	double _d;
////	struct _S _s;
////	char _c;
////};
//void test2() {
//	//struct _B sb = { 3.14, { 'w', 100 }, 't' };
//	//struct _B* psb = &sb;
//	//printf("%.2lf, %c, %d, %c\n", sb._d, sb._s._c, sb._s._i, sb._c);
//	//printf("%.2lf, %c, %d, %c\n", psb->_d, psb->_s._c, psb->_s._i, psb->_c);
//}
////struct _S {
////	int _i;
////	char _c;
////};
////struct _SS {
////	char _c1;
////	int _i;
////	char _c2;
////};
//void test3() {
//	struct _S s = { 0 };
//	struct _SS ss = { 0 };
//	printf("%d\n", sizeof(struct _S));//8
//	printf("%d\n", sizeof(s));//8
//	//�ṹ���ڴ��������
//	printf("%d\n", sizeof(struct _SS));//12
//	printf("%d\n", sizeof(ss));//12
//}
//void test() {
//	//test0();
//	//test1();
//	//test2();
//	//test3();
//}
//int main() {
//	test();
//	return 0;
//}
//#include <stdio.h>
//#include <stddef.h>
////struct _S1 {
////	char _c1;
////	int _i;
////	char _c2;
////};
////struct _S2 {
////	char _c1;
////	char _c2;
////	int _i;
////};
////struct _S3 {
////	double _d;
////	char _c;
////	int _i;
////};
////struct _S4 {
////	char _c1;
////	struct _S3 s3;
////	double _d;
////};
////struct _S5 {
////	char _c1;
////	int _i;
////	double _d;
////};
//void test0() {
//	//printf("%d\n", sizeof(struct _S1));//12
//	//printf("%d\n", sizeof(struct _S2));//8
//	//printf("%d\n", sizeof(struct _S3));//16
//	//printf("%d\n", sizeof(struct _S4));//32
//	//struct _S5 s5;
//	//printf("%d\n", sizeof(s5));//16
//}
////#pragma pack(8)//����Ĭ�϶�����Ϊ8
////struct _S1 {
////	char _c1;//1
////	int _i;//1+3+4
////	char _c2;//1+3+4+1+3=12
////};
////#pragma pack()//ȡ�����õ�Ĭ�϶�����,��ԭΪĬ��
////#pragma pack(1)//����Ĭ�϶�����Ϊ1
////struct _S2 {
////	char _c1;//1
////	int _i;//1+4
////	char _c2;//1+4+1=6
////};
////#pragma pack()//ȡ�����õ�Ĭ�϶�����,��ԭΪĬ��
////#define MYOFFSETOF(structName, memberVariable) (size_t)(&(((structName*)0x00)->memberVariable) - 0x00)
//void test1() {
//	//printf("%d\n", sizeof(struct _S1));//12
//	//printf("%d\n", sizeof(struct _S2));//6
//	//printf("%u\n", offsetof(struct _S1, _c1));
//	//printf("%u\n", offsetof(struct _S1, _i));
//	//printf("%u\n", offsetof(struct _S1, _c2));
//	//printf("%u\n", offsetof(struct _S2, _c1));
//	//printf("%u\n", offsetof(struct _S2, _i));
//	//printf("%u\n", offsetof(struct _S2, _c2));
//	//printf("=====================================\n");
//	//printf("%u\n", MYOFFSETOF(struct _S1, _c1));
//	//printf("%u\n", MYOFFSETOF(struct _S1, _i));
//	//printf("%u\n", MYOFFSETOF(struct _S1, _c2));
//	//printf("%u\n", MYOFFSETOF(struct _S2, _c1));
//	//printf("%u\n", MYOFFSETOF(struct _S2, _i));
//	//printf("%u\n", MYOFFSETOF(struct _S2, _c2));
//}
////struct S0 {
////	char _c1;
////	int _i;
////	char _c2;
////};
//////��Ĭ�϶�������Ϊ2
////#pragma pack(2)
////struct S1 {
////	char _c1;//0
////	int _i;//2~5
////	char _c2;//6
////};
////#pragma pack()
////#pragma pack(1)
////struct S2 {
////	char _c1;
////	int _i;
////	char _c2;
////};
////#pragma pack()
//void test2() {
//	//printf("%d\n", sizeof(struct S0));//12
//	//printf("%d\n", sizeof(struct S1));//8
//	//printf("%d\n", sizeof(struct S2));//6
//}
//struct S {
//	int _data[1000];
//	int _num;
//};
//struct S s = { { 1, 2, 3, 4 }, 1000 };
//void print1(struct S s) {
//	printf("%d\n", s._num);
//}
//#include <assert.h>
//void print2(struct S* ps) {//��ַ���θ���
//	assert(ps != NULL);
//	printf("%d\n", ps->_num);
//}
//void test3() {
//	print1(s);
//	print2(&s);
//}
//void test4() {
//	struct A {
//		int _a : 2;
//		int _b : 5;
//		int _c : 10;
//		int _d : 30;
//	};
//	printf("%d\n", sizeof(struct A));//8
//	struct B {
//		char _a : 3;
//		char _b : 4;
//		char _c : 5;
//		char _d : 4;
//	};
//	struct B b = { 0 };
//	b._a = 10;
//	b._b = 12;
//	b._c = 3;
//	b._d = 4;
//	printf("%d\n", sizeof(b));//3
//}
////ö�ٵ��ŵ�:1.���Ӵ���ɶ���,��ά���� 2.�����Ͱ�ȫ���	 3.���ڵ��� 4.������һ���ķ�װ�Է�ֹ������Ⱦ 5.����һ�ζ�����ö�ٳ���,������
////ö�����;���һ������,���;�������
////����ö����������:
//enum Day {
//	_Mon,
//	_Tues,
//	_Wed,
//	_Thur,
//	_Fri,
//	_Sat,
//	_Sun
//};
//enum _Sex {
//	_MALE,
//	_FEMALE,
//	_SECRET
//};
//enum _Color {
//	_RED,// = 5,
//	_GREEN,// = 8,
//	_BLUE
//};
//void test5() {
//	enum _Color c = _BLUE;
//	//printf("%d\n", sizeof(enum _Color));//4
//	//printf("%d\n", sizeof(c));//4
//	//printf("%d\n", sizeof(_RED));//4
//	//printf("%d\n", sizeof(_GREEN));//4
//	//printf("%d\n", sizeof(_BLUE));//4
//
//	printf("%d\n", _RED);//0
//	printf("%d\n", _GREEN);//1
//	printf("%d\n", _BLUE);//2
//	//printf("%d\n", _Color::_BLUE);//::�����������
//	//c = 2;//��仰C��û������,����ʵ�����Ǵ����,c��enum Color���͵Ķ�2�����͵����Ͳ�ƥ��,��C++�лᱨ��:�޷���intת��ΪColor
//	//˵��C++�﷨�������ϸ�
//}
//void menu() {
//	printf("*******************************\n");
//	printf("****    1.add    2.sub     ****\n");
//	printf("****    3.mul    4.Div     ****\n");
//	printf("****         0.exit        ****\n");
//	printf("*******************************\n");
//}
//enum _OP {
//	_EXIT,
//	_ADD,
//	_SUB,
//	_MUL,
//	_DIV
//};
//void test6() {
//	int input = 0;
//	do {
//		menu();
//		printf("����������ѡ��:>");
//		scanf("%d", &input);
//		switch (input) {
//		case _EXIT:
//			break;
//		case _ADD:
//			break;
//		case _SUB:
//			break;
//		case _MUL:
//			break;
//		case _DIV:
//			break;
//		default:
//			break;
//		}
//	} while (input);
//}
//#include <stdbool.h>
//bool is_small_endian1() {
//	int a = 0x01;
//	return (*(char*)(&a));
//}
//bool is_small_endian() {
//	union _U {
//		char _c;
//		int _in;
//	} u;
//	u._in = 0x01;
//	return u._c;
//}
//void test7() {
//	//union Un {
//	//	char _c;
//	//	int _i;
//	//};
//	//union Un un;
//	////printf("%d\n", sizeof(union Un));//4
//	////printf("%d\n", sizeof(un));//4
//
//	//printf("0X%p\n", &(un._i));
//	//printf("0X%p\n", &(un._c));//&un._i��&un._c��ַһ��
//
//	//un._i = 0x11223344;
//	//un._c = 0x55;
//	//printf("0X%x\n", un._i);//0x11223355
//
//	//if (is_small_endian()) {
//	//	printf("С���ֽ���!\n");
//	//}
//	//else {
//	//	printf("����ֽ���!\n");
//	//}
//
//	union Un1 {
//		char _c[5];
//		int _i;
//	};
//	union Un2 {
//		short _c[7];
//		int _i;
//	};
//	printf("%d\n", sizeof(union Un1));//8
//	printf("%d\n", sizeof(union Un2));//16
//}
//void test() {
//	//test0();
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	//test5();
//	//test6();
//	test7();
//}
//int main() {
//	test();
//	return 0;
//}
//���һ��ͨѶ¼Contact 1.ͨѶ¼���ܹ����1000���˵���Ϣ,ÿ���˵���Ϣ:����+����+�Ա�+�绰+��ַ
//2.ʵ������,ɾ��,��ѯ,�޸���ϵ�˵���Ϣ
//3.����ͨѶ¼��Ϣ
//4.��ӡͨѶ¼��Ϣ
//CCODE.c��д���Դ���	Contact.h��д���Ͷ���,��������,������������ Contact.c��д����ʵ�ִ���
//#include "Contact.h"
//#pragma warning(disable:6262)
//void test() {
//	Contact con;
//	InitContact(&con);
//	int input = 0;
//	do {
//		Menu();
//		printf("����������ѡ��:>");
//		scanf("%d", &input);
//		switch (input) {
//		case _EXIT:
//			printf("�����˳�ͨѶ¼!\n");
//			break;
//		case _ADD:
//			//printf("_ADD!\n");
//			AddContact(&con);
//			break;
//		case _DEL:
//			//printf("_DEL!\n");
//			DelContact(&con);
//			break;
//		case _SEARCH:
//			//printf("_SEARCH!\n");
//			SearchContact(&con);
//			break;
//		case _MODIFY:
//			//printf("_MODIFY!\n");
//			ModifyContact(&con);
//			break;
//		case _SORT:
//			//printf("_SORT!\n");
//			SortContact(&con);
//			break;
//		case _PRINT:
//			//printf("_PRINT!\n");
//			PrintContact(&con);
//			break;
//		default:
//			printf("���������������,����������!\n");
//			break;
//		}
//	} while (input);
//	printf("���˳�ͨѶ¼!\n");
//}
//int main() {
//	test();
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//void test0() {
//	//void* malloc(size_t size);
//	//void free(void* ptr)
//	//int num = 0;
//	//scanf("%d", &num);
//	//int arr[num] = { 0 };//err
//
//	//int num = 0;
//	//scanf("%d", &num);
//	//int* ptr = (int*)malloc(num * sizeof(int));
//	//if (NULL == ptr) {
//	//	perror("malloc");
//	//	return;
//	//}
//	//int i = 0;
//	//for (i = 0; i < num; i++) {
//	//	*(ptr + i) = 0;
//	//	printf("%d ", ptr[i]);
//	//}
//	//printf("\n");
//	//free(ptr);
//	//ptr = NULL;
//
//	//���迪��10�����Ϳռ� 10*sizeof(int)
//	int arr[10] = { 0 };//arr�Ǿֲ�����,������ջ��
//	int* ptr = (int*)malloc(10 * sizeof(int));//��̬�ڴ濪�ٵ�,�ڶ���
//	if (NULL == ptr) {
//		perror("test0 malloc");
//		return;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		*(ptr + i) = i;
//	}
//	for (i = 0; i < 10; i++) {
//		printf("%d ", ptr[i]);
//	}
//	printf("\n");
//	free(ptr);
//	ptr = NULL;
//}
//void test1() {
//	//void* calloc(size_t num, size_t eleSize);
//	//int* p = (int*)calloc(10, sizeof(int));
//	//if (NULL == p) {
//	//	perror("test1 calloc");
//	//	return;
//	//}
//	//int i = 0;
//	//for (i = 0; i < 10; i++) {
//	//	printf("%d ", p[i]);
//	//}
//	//printf("\n");
//	//for (i = 0; i < 10; i++) {
//	//	p[i] = i;
//	//	printf("%d ", p[i]);
//	//}
//	//printf("\n");
//	//free(p);
//	//p = NULL;
//
//	int* p1 = (int*)malloc(10 * sizeof(int));
//	int* p2 = (int*)calloc(10, sizeof(int));
//	if (NULL == p1) {
//		perror("test1 malloc");
//		return;
//	}
//	if (NULL == p2) {
//		perror("test1 calloc");
//		return;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d		%d\n", p1[i], p2[i]);
//	}
//	free(p1);
//	free(p2);
//	p1 = NULL;
//	p2 = NULL;
//}
//#pragma warning(disable:6200)
//void test2() {
//	//void* realloc(void* ptr, size_t size);
//	//int* p = (int*)malloc(25 * sizeof(int));
//	//if (NULL == p) {
//	//	perror("test2 malloc");
//	//	return;
//	//}
//	//int i = 0;
//	//for (i = 0; i < 25; i++) {
//	//	p[i] = i;
//	//}
//	////p = (int*)realloc(p, 250 * sizeof(int));//err: realloc��������ֵ����ΪNULL,����ԭʼ�ڴ�й¶
//	//int* pt = (int*)realloc(p, 250 * sizeof(int));//ok
//	//if (NULL == pt) {
//	//	perror("test2 realloc");
//	//	free(p);
//	//	return;
//	//}
//	//p = pt;
//	//for (i = 25; i < 250; i++) {
//	//	p[i] = i;
//	//}
//	//for (i = 0; i < 250; i++) {
//	//	printf("%d ", p[i]);
//	//}
//	//printf("\n");
//	//free(p);
//	//p = NULL;
//
//	//int* p = (int*)calloc(10, sizeof(int));
//	//if (NULL == p) {
//	//	perror("test2 calloc");
//	//	return;
//	//}
//	//int i = 0;
//	//for (i = 0; i < 10; i++) {
//	//	*(p + i) = 5;
//	//}
//	//int* ptr = (int*)realloc(p, 2000 * sizeof(int));
//	//if (NULL == ptr) {
//	//	perror("test2 realloc");
//	//	free(p);
//	//	return;
//	//}
//	//p = ptr;
//	//for (i = 10; i < 20; i++) {
//	//	*(p + i) = 5;
//	//}
//	//for (i = 0; i < 20; i++) {
//	//	printf("%d ", p[i]);
//	//}
//	//printf("\n");
//	//free(p);
//	//p = NULL;
//
//	int* p = (int*)realloc(NULL, 10 * sizeof(int));//���﹦��������malloc,ֱ���ڶ�������40�ֽڵĿռ�
//}
//void test() {
//	//test0();
//	//test1();
//	//test2();
//}
//int main() {
//	test();
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <limits.h>
//#include <string.h>
//void test1() {
//	//int* p = (int*)malloc(100);
//	//if (NULL == p) {
//	//	perror("test1 malloc");
//	//	return;
//	//}
//	//��̬���ٵĿռ������ͷ�-�����ڴ�й©
//}
//void test0() {
//	//int* p = (int*)malloc(INT_MAX * sizeof(int));
//	//int i = 0;//err:Ӧ�ö�p�����пմ���,Ȼ����ʹ��,������ܻᵼ�·Ƿ������ڴ�
//	//for (i = 0; i < 10; i++) {
//	//	*(p + i) = i;
//	//}
//	//free(p);
//	//p = NULL;
//
//	//int* p = (int*)malloc(10 * sizeof(int));
//	//if (NULL == p) {
//	//	perror("test0 malloc");
//	//	return;
//	//}
//	//int i = 0;
//	//for (i = 0; i < 40; i++) {//err:Խ������ڴ�
//	//	*(p + i) = i;
//	//}
//	//free(p);
//	//p = NULL;
//
//	//int arr[10] = { 0 };
//	//int* p = arr;
//	//free(p);//err:free��ָ��Ƕ�̬���ٵ��ڴ��ָ��
//	//p = NULL;
//
//	//int* p = (int*)malloc(10 * sizeof(int));
//	//if (NULL == p) {
//	//	perror("test0 malloc");
//	//	return;
//	//}
//	//int i = 0;
//	//for (i = 0; i < 5; i++) {
//	//	*p++ = i;
//	//}
//	//free(p);//err:ʹ��free�ͷŶ�̬�ڴ��һ����,���Һ��п��ܵ����ڴ�й©
//	//p = NULL;
//
//	//int* p = (int*)malloc(100);
//	//if (NULL == p) {
//	//	perror("test0 malloc");
//	//	return;
//	//}
//	//free(p);
//	////p = NULL;
//	//free(p);//��ͬһ�鶯̬�ڴ�ռ����ͷŷ�������
//
//}
//void GetMemory1(char* p) {
//	//p = (char*)malloc(100);
//}
//void test3() {
//	//char* str = NULL;
//	//GetMemory1(str);//�ڴ�й¶��
//	//strcpy(str, "hello world");//�Ƿ�д���ڴ�
//	//printf(str);
//}
//char* GetMemory2() {
//	//char p[] = "hello world";
//	//return p;//���ؾֲ�������ַ
//}
//void test4() {
//	//char* str = NULL;
//	//str = GetMemory2();
//	//printf(str);//�Ƿ���ȡ�ڴ�
//}
//void GetMemory3(char** pp, int num) {
//	*pp = (char*)malloc(num);
//}
//void test5() {
//	char* str = NULL;
//	GetMemory3(&str, 100);
//	strcpy(str, "hello");//��ȫOK
//	printf(str);
//	free(str);
//	str = NULL;
//}
//void test6() {
//	//char* str = (char*)malloc(100);
//	//if (NULL == str) {
//	//	perror("test6 malloc");
//	//	return;
//	//}
//	//strcpy(str, "hello");
//	//free(str);
//	//if (str != NULL) {
//	//	strcpy(str, "world");//Ұָ��Ƿ������ڴ�
//	//	printf(str);
//	//}
//}
//int globalVar = 1;
//static int staticGlobalVar = 1;
//void test7() {
//	static int staticVar = 1;
//	int localVar = 1;
//	int num1[10] = { 1, 2, 3, 4 };
//	char char2[] = "abcd";
//	char* pChar3 = "abcd";
//	int* ptr1 = (int*)malloc(4 * sizeof(int));
//	int* ptr2 = (int*)calloc(4, sizeof(int));
//	int* ptr3 = (int*)realloc(ptr2, 4 * sizeof(int));
//	free(ptr1);
//	ptr1 = NULL;
//	free(ptr3);
//	ptr3 = NULL;
//}
//char* GetMemory4(char* p) {
//	p = (char*)malloc(100);
//	return p;
//}
//void test8() {
//	//const char* p = "hello world";
//	//printf(p);
//	char* str = NULL;
//	str = GetMemory4(str);
//	strcpy(str, "hello world");
//	printf(str);//��仰û����
//	free(str);
//	str = NULL;
//}
//void GetMemory(char** pp) {
//	*pp = (char*)malloc(100);
//}
//void test9() {
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//void test() {
//	//test0();
//	//test1();
//	//test3();
//	//test4();
//	//test5();
//	//test6();
//	//test7();
//	//test8();
//	//test9();
//}
//int main() {
//	test();
//	return 0;
//}
//#include "Contact1.h"
//void test() {
//	Contact con;
//	InitContact(&con);
//	int input = 0;
//	do {
//		Menu();
//		printf("������������ѡ��:>");
//		scanf("%d", &input);
//		switch (input) {
//		case _EXIT:
//			DestroyContact(&con);
//			printf("�����˳�ͨѶ¼!\n");
//			break;
//		case _ADD:
//			AddContact(&con);
//			break;
//		case _DEL:
//			DelContact(&con);
//			break;
//		case _SEARCH:
//			SearchContact(&con);
//			break;
//		case _MODIFY:
//			ModifyContact(&con);
//			break;
//		case _SORT:
//			SortContact(&con);
//			break;
//		case _PRINT:
//			PrintContact(&con);
//			break;
//		default:
//			printf("������������,��������������!\n");
//			break;
//		}
//	} while (input);
//	printf("�ɹ��˳�!\n");
//}
//int main() {
//	test();
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <assert.h>
//void test0() {
//	//��������:flexible array��ָC99�нṹ�����һ��Ԫ��������δ֪��С������,��ͽ����������Ա
//	//typedef struct st_type {
//	//	int _i;
//	//	int _a[0];//���������Ա,��С��δ֪��
//	//} type_a;
//	//��Щ�������ᱨ���޷�������Ըĳ�:
//	//typedef struct st_type {
//	//	int _i;
//	//	int _a[];//���������Ա,��С��δ֪��
//	//} type_a;
//	//����������ص�:1.�ṹ���е����������Աǰ���������һ��������Ա
//	//2.sizeof���ص����ֽṹ���С����������������ڴ�
//	//3.�������������Ա�Ľṹ����malloc���������ڴ涯̬���䲢�ҷ�����ڴ�Ӧ�ô��ڽṹ��Ĵ�С,����Ӧ���������Ԥ�ڴ�С
//	//typedef struct st_type {
//	//	int _i;
//	//	int _a[0];
//	//} type_a;
//	////printf("%d\n", sizeof(type_a));//4
//	//int i = 0;
//	//type_a* p = (type_a*)malloc(1 * sizeof(type_a) + 100 * sizeof(int));
//	//if (NULL == p) {
//	//	perror("test0 p malloc");
//	//	return;
//	//}
//	//p->_i = 100;
//	//for (i = 0; i < 100; i++) {
//	//	p->_a[i] = i;
//	//}
//	//for (i = 0; i < 100; i++) {
//	//	printf("%d ", p->_a[i]);
//	//}
//	//free(p);//һ���Ծ��ͷ����˿ռ�
//	//p = NULL;
//	//�������������Ա_a�൱�ڻ����100������Ԫ�ص������ռ�
//	//�������������:������type_a�ṹ��Ҳ�������Ϊ:
//	typedef struct st_type {
//		int _i;
//		int* p_a;
//	} type_a;
//	type_a* p = (type_a*)malloc(1 * sizeof(type_a));
//	if (NULL == p) {
//		perror("test0 p malloc");
//		return;
//	}
//	p->_i = 100;
//	p->p_a = (int*)malloc(p->_i * sizeof(int));
//	if (NULL == p->p_a) {
//		perror("test0 p->p_a malloc");
//		free(p);
//		p = NULL;
//		return;
//	}
//	int i = 0;
//	for (i = 0; i < 100; i++) {
//		p->p_a[i] = i;
//	}
//	for (i = 0; i < 100; i++) {
//		printf("%d ", p->p_a[i]);
//	}
//	free(p->p_a);
//	p->p_a = NULL;
//	free(p);//��Ҫ����ͷſռ�,���ҿ��ܻ���Ϊ�ͷ�˳������ԭ���³������
//	p = NULL;
//	//������������ͷ�����������������ͬ�Ĺ���,�������������������ô�:��һ���ô��Ƿ����ڴ��ͷ�:
//	//������ǵĴ�������һ���������õĺ�����,�����������˶����ڴ����,���������ṹ�巵�ظ��û�,�û�����free�����ͷŽṹ��,�����û�����֪������ṹ���ڵĳ�ԱҲ��Ҫfree,�����㲻��ָ���û������������,����������ǰѽṹ����ڴ��Լ����ԱҪ���ڴ�һ���Է������,�����ظ��û�һ���ṹ��,�û���һ��free�Ϳ��԰����е��ڴ�Ҳ���ͷŵ�
//	//�ڶ����ô��������ڷ����ٶ�:�������ڴ���������߷�������,Ҳ�����ڼ����ڴ���Ƭ(��ʵ�Ҹ��˸о�Ҳû���,�������ܲ���Ҫ����ƫ�����ļӷ���Ѱַ)
//}
//void test1() {
//	//���������Ա	C99��׼����ĸ���
//	//struct S1 {
//	//	int _n;
//	//	int _a[0];
//	//};
//	//struct S2 {
//	//	int _n;
//	//	int _a[];
//	//};
//
//	//struct S {
//	//	int _n;
//	//	int _a[0];
//	//};
//	////struct S s = { 0 };
//	////printf("%d\n", sizeof(s));//4
//
//	//struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
//	////���ٵ�44���ֽ���������,psָ����οռ���׵�ַ
//	//if (NULL == ps) {
//	//	perror("test1 ps malloc");
//	//	return;
//	//}
//	//ps->_n = 10;
//	//int i = 0;
//	//for (i = 0; i < 10; i++) {
//	//	ps->_a[i] = i;
//	//}
//	//for (i = 0; i < 10; i++) {
//	//	printf("%d ", ps->_a[i]);
//	//}
//	//printf("\n");
//	//struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 20 * sizeof(int));
//	//if (NULL == ptr) {
//	//	perror("test1 ptr realloc");
//	//	free(ps);
//	//	ps = NULL;
//	//	return;
//	//}
//	//ps = ptr;
//	//ps->_n = 20;
//	//for (i = 10; i < 20; i++) {
//	//	ps->_a[i] = i;
//	//}
//	//for (i = 0; i < 20; i++) {
//	//	printf("%d ", ps->_a[i]);
//	//}
//	//printf("\n");
//	//free(ps);
//	//ps = NULL;
//
//	struct S {
//		int _n;
//		int* _a;
//	};
//	struct S* ps = (struct S*)malloc(1 * sizeof(struct S));
//	if (NULL == ps) {
//		perror("test1 ps malloc");
//		return;
//	}
//	ps->_n = 10;
//	ps->_a = (int*)malloc(10 * sizeof(int));
//	if (NULL == ps->_a) {
//		perror("test1 ps->_a malloc");
//		free(ps);
//		ps = NULL;
//		return;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		ps->_a[i] = i;
//	}
//	for (i = 0; i < 10; i++) {
//		printf("%d ", ps->_a[i]);
//	}
//	printf("\n");
//	int* p = (int*)realloc(ps->_a, 20 * sizeof(int));
//	if (NULL == p) {
//		perror("test1 p realloc");
//		free(ps->_a);
//		ps->_a = NULL;
//		free(ps);
//		ps = NULL;
//		return;
//	}
//	ps->_a = p;
//	ps->_n = 20;
//	for (i = 10; i < 20; i++) {
//		ps->_a[i] = i;
//	}
//	for (i = 0; i < 20; i++) {
//		printf("%d ", ps->_a[i]);
//	}
//	printf("\n");
//	free(ps->_a);
//	ps->_a = NULL;
//	free(ps);
//	ps = NULL;
//}
//void test2() {
//	//int score = 0;
//	//int sum = 0;
//	//int min = 101;
//	//int max = -1;
//	//for (int i = 0; i < 7; i++) {
//	//	scanf("%d", &score);
//	//	sum += score;
//	//	if (min > score)	min = score;
//	//	if (max < score)	max = score;
//	//}
//	//printf("%.2lf\n", (double)(sum - min - max) / (7.0 - 2.0));
//
//	//int arr[7] = { 0 };
//	//while (~scanf("%d%d%d%d%d%d%d", &arr[0], &arr[1], &arr[2],
//	//	&arr[3], &arr[4], &arr[5], &arr[6])) {
//	//	double average = 0.0;
//	//	int s = 0;
//	//	for (int i = 0; i < 7; i++) {
//	//		s += arr[i];
//	//	}
//	//	int min = arr[0];
//	//	int max = arr[0];
//	//	for (int i = 1; i < 7; i++) {
//	//		if (min > arr[i]) min = arr[i];
//	//		if (max < arr[i]) max = arr[i];
//	//	}
//	//	s = s - min - max;
//	//	average = s / 5.0;
//	//	printf("%.2lf\n", average);
//	//}
//}
//void test3() {
//	int n = 0;
//	scanf("%d", &n);
//	int* p = (int*)malloc((n + 1) * sizeof(int));
//	if (NULL == p) {
//		perror("malloc");
//		return;
//	}
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d", p + i);
//	}
//	int m = 0;
//	scanf("%d", &m);
//	for (i = n - 1; i >= 0; i--) {
//		if (p[i] > m) {
//			p[i + 1] = p[i];
//		}
//		else {
//			break;
//		}
//	}
//	p[i + 1] = m;
//	for (i = 0; i < n + 1; i++) {
//		printf("%d ", p[i]);
//	}
//	free(p);
//	p = NULL;
//}
////size_t MyStrlen(const char* str) {
////	assert(str != NULL);
////	size_t count = 0;
////	while (*str++) {
////		count++;
////	}
////	return count;
////}
////size_t _my_strlen(const char* str) {
////	assert(str != NULL);
////	if (!*str) {
////		return 0;
////	}
////	else {
////		return (1 + _my_strlen(str + 1));
////	}
////}
////size_t my_strlen(const char* str) {
////	assert(str != NULL);
////	const char* eos = str;
////	while (*eos++) {
////		;
////	}
////	return (eos - str - 1);
////}
////char* MyStrcpy(char* dest, const char* src) {
////	assert(dest != NULL && src != NULL);
////	char* cp = dest;
////	while ((*cp++ = *src++) != '\0') {
////		;
////	}
////	return (dest);
////}
////char* MyStrcat(char* dest, const char* src) {
////	assert(dest != NULL && src != NULL);
////	char* cp = dest;
////	while (*cp) {
////		cp++;
////	}
////	while ((*cp++ = *src++) != '\0') {
////		;
////	}
////	return (dest);
////}
////int MyStrcmp(const char* s1, const char* s2) {
////	assert(s1 != NULL && s2 != NULL);
////	while (*s1 == *s2) {
////		if (*s1 == '\0') {
////			return 0;
////		}
////		s1++;
////		s2++;
////	}
////	return *s1 - *s2;
////}
////char* MyStrncpy(char* dest, const char* src, size_t count) {
////	assert(dest != NULL && src != NULL);
////	char* cp = dest;
////	while (count && ((*cp++ = *src++) != '\0')) {
////		count--;
////	}
////	if (count) {
////		while (--count) {
////			*cp++ = '\0';
////		}
////	}
////	return (dest);
////}
////char* MyStrncat(char* dest, const char* src, size_t count) {
////	assert(dest != NULL && src != NULL);
////	char* cp = dest;
////	while (*cp) {
////		cp++;
////	}
////	while (count--) {
////		if ((*cp++ = *src++) == '\0') {
////			return (dest);
////		}
////	}
////	*cp = '\0';
////	return (dest);
////}
////int MyStrncmp(const char* s1, const char* s2, size_t count) {
////	assert(s1 != NULL && s2 != NULL);
////	if (!count) {
////		return 0;
////	}
////	while (--count && *s1 == *s2) {
////		if (*s1 == '\0') {
////			return 0;
////		}
////		s1++;
////		s2++;
////	}
////	return *s1 - *s2;
////}
////char* MyStrstr(const char* str, const char* subStr) {
////	assert(str != NULL && subStr != NULL);
////	if (!*subStr) {
////		return (char*)str;
////	}
////	int lenStr = (int)MyStrlen(str);
////	int lenSubStr = (int)MyStrlen(subStr);
////	if (lenStr < lenSubStr) {
////		return NULL;
////	}
////	for (int i = 0; (i + lenSubStr) <= lenStr; i++) {
////		int j = 0;
////		for (j = 0; j < lenSubStr; j++) {
////			if (str[i + j] != subStr[j]) {
////				break;
////			}
////		}
////		if (j == lenSubStr) {
////			return (char*)(str + i);
////		}
////	}
////	return NULL;
////}
////void* MyMemcpy(void* dest, const void* src, size_t count) {
////	assert(dest != NULL && src != NULL);
////	void* cp = dest;
////	char* cpCpy = (char*)cp;
////	char* srcCpy = (char*)src;
////	while (count--) {
////		*cpCpy++ = *srcCpy++;
////	}
////	return (dest);
////}
////void* MyMemmove(void* dest, const void* src, size_t count) {
////	assert(dest != NULL && src != NULL);
////	void* cp = dest;
////	char* cpCpy = (char*)cp;
////	char* srcCpy = (char*)src;
////	if (cpCpy < srcCpy) {
////		while (count--) {
////			*cpCpy++ = *srcCpy++;
////		}
////	}
////	else {
////		while (count--) {
////			cpCpy[count] = srcCpy[count];
////		}
////	}
////	return (dest);
////}
////void* MyMemset(void* ptr, int value, size_t count) {
////	assert(ptr != NULL);
////	void* ret = ptr;
////	char* p = (char*)ptr;
////	while (count--) {
////		p[count] = value;
////	}
////	return (ret);
////}
////int MyMemcmp(const void* p1, const void* p2, size_t count) {
////	assert(p1 != NULL && p2 != NULL);
////	if (!count) {
////		return 0;
////	}
////	char* ptr1 = (char*)p1;
////	char* ptr2 = (char*)p2;
////	while (--count && *ptr1 == *ptr2) {
////		ptr1++;
////		ptr2++;
////	}
////	return *ptr1 - *ptr2;
////}
//void test4() {
//	struct S {
//		char b;
//		int c[];
//	};
//	printf("%d\n", sizeof(struct S));//4	Ϊʲô?
//}
//void test5() {
//	//unsigned char puc[4];
//	//struct tagPim {
//	//	unsigned char ucPim1;
//	//	unsigned char ucData0 : 1;
//	//	unsigned char ucData1 : 2;
//	//	unsigned char ucData2 : 3;
//	//} *pstPimData;
//	//pstPimData = (struct tagPim*)puc;
//	//memset(puc, 0, 4);
//	//pstPimData->ucPim1 = 2;
//	//pstPimData->ucData0 = 3;
//	//pstPimData->ucData1 = 4;
//	//pstPimData->ucData2 = 5;
//	//printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);//02 29 00 00
//
//	//union Un {
//	//	short s[7];
//	//	int n;
//	//};
//	//printf("%d\n", sizeof(union Un));//16
//
//	//union {
//	//	short k;
//	//	char i[2];
//	//} *s, a;
//	//s = &a;
//	//s->i[0] = 0x39;
//	//s->i[1] = 0x38;
//	//printf("%x\n", a.k);//3839
//
//	//typedef struct {
//	//	int a;
//	//	char b;
//	//	short c;
//	//	short d;
//	//} AA_t;
//	//printf("%d\n", sizeof(AA_t));
//
//	//int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	//int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	//int tmp = 0;
//	//for (int i = 0; i < sz; i++) {
//	//	tmp ^= arr[i];
//	//}
//	//printf("tmp = %d\n", tmp);//5
//
//	//int arr[] = { 1, 2, 3, 4, 5, 6, 1, 2, 3, 4 };
//	//int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	//int pos = 0;
//	//int tmp = 0;
//	//int res1 = 0;
//	//int res2 = 0;
//	//for (int i = 0; i < sz; i++) {
//	//	tmp ^= arr[i];
//	//}
//	//for (int i = 0; i < 32; i++) {
//	//	if ((1 << i) & tmp) {
//	//		pos = i;
//	//		break;
//	//	}
//	//}
//	//for (int i = 0; i < sz; i++) {
//	//	if ((1 << pos) & arr[i]) {
//	//		res1 ^= arr[i];
//	//	}
//	//	else {
//	//		res2 ^= arr[i];
//	//	}
//	//}
//	//printf("res1 = %d, res2 = %d\n", res1, res2);
//}
//void Find1(int* pa, int sz, int* px, int* py) {
//	assert(pa != NULL && px != NULL && py != NULL);
//	*px = 0;
//	*py = 0;
//	int tmp = 0;
//	int pos = 0;
//	for (int i = 0; i < sz; i++)	tmp ^= pa[i];
//	for (int i = 0; i < 32; i++) {
//		if ((1 << i) & tmp) {
//			pos = i;
//			break;
//		}
//	}
//	for (int i = 0; i < sz; i++) {
//		if ((1 << pos) & pa[i]) (*py) ^= pa[i];
//		else (*px) ^= pa[i];
//	}
//}
//void Find2(int* pa, int sz, int* res, int resSize) {
//	assert(pa != NULL && res != NULL);
//	res[0] = 0;
//	res[1] = 0;
//	int tmp = 0;
//	int pos = 0;
//	for (int i = 0; i < sz; i++)	tmp ^= pa[i];
//	for (int i = 0; i < 32; i++) {
//		if ((1 << i) & tmp) {
//			pos = i;
//			break;
//		}
//	}
//	for (int i = 0; i < sz; i++) {
//		if ((1 << pos) & pa[i])	res[1] ^= pa[i];
//		else res[0] ^= pa[i];
//	}
//}
//int* Find(int* pa, int sz, int size) {
//	assert(pa != NULL);
//	int tmp = 0;
//	int pos = 0;
//	int* p = (int*)malloc(size * sizeof(int));
//	if (NULL == p) {
//		perror("Find malloc");
//		return NULL;
//	}
//	p[0] = 0;
//	p[1] = 0;
//	for (int i = 0; i < sz; i++)	tmp ^= pa[i];
//	for (int i = 0; i < 32; i++) {
//		if ((1 << i) & tmp) {
//			pos = i;
//			break;
//		}
//	}
//	for (int i = 0; i < sz; i++) {
//		if ((1 << pos) & pa[i])	p[1] ^= pa[i];
//		else p[0] ^= pa[i];
//	}
//	return p;
//}
//void test6() {
//	//int arr[] = { 1, 2, 3, 4, 5, 6, 1, 2, 3, 4 };
//	//int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	//int x = 0;
//	//int y = 0;
//	//Find1(arr, sz, &x, &y);
//	//printf("x = %d, y = %d\n", x, y);
//	//int res[2] = { 0 };
//	//Find2(arr, sz, res, 2);
//	//printf("%d, %d\n", res[0], res[1]);
//
//	//int* p = Find(arr, sz, 2);
//	//printf("%d, %d\n", p[0], p[1]);
//	//free(p);
//	//p = NULL;
//}
//void test() {
//	//test0();
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	//test5();
//	//test6();
//}
//int main() {
//	test();
//	return 0;
//}
//#include <stdio.h>
//#include <assert.h>
//void test0() {
//	//FILE* fp = fopen("F:\\CODE\\CCODE\\CCODE\\test.dat", "r");
//	//if (NULL == fp) {
//	//	perror("test0 fp fopen");
//	//	return;
//	//}
//	//fclose(fp);//������ر��ļ��ᵼ�º�����ļ��򲻿���,��Ϊ�ļ���һ����Դ,��һ������һ�������ܴ򿪵��ļ����������޵�
//	//fp = NULL;
//
//	//FILE* fp = fopen("myfile.txt", "w");
//	//if (NULL == fp) {
//	//	perror("test0 fp fopen");
//	//	return;
//	//}
//	//fputs("fopen example", fp);//myfile.txt�ļ�����fopen example�ַ���
//	////fputs("fopen example", stdout);//����ʱ����̨��ӡfopen example�ַ���
//	//fclose(fp);
//	//fp = NULL;
//}
//void test1_1() {
//	FILE* fp = fopen("test.dat", "w");
//	if (NULL == fp) {
//		perror("test1_1 fp fopen");
//		return;
//	}
//	//fputc('t', fp);
//	//fputc('z', fp);
//	//fputc('h', fp);
//	fclose(fp);
//	fp = NULL;
//}
//void test1_2() {
//	fputc('t', stdout);
//	fputc('z', stdout);
//	fputc('h', stdout);
//}
//void test1_3() {
//	FILE* fp = fopen("test.dat", "r");
//	if (NULL == fp) {
//		perror("test1_3 fp fopen");
//		return;
//	}
//	int ch = 0;
//	while (~(ch = fgetc(fp))) {//fgetc���ļ����ж�ȡ����
//		fputc(ch, stdout);
//	}
//	//while (~(ch = fgetc(stdin))) {
//	//	putchar(ch);
//	//}
//	fclose(fp);
//	fp = NULL;
//}
//void test1_4() {
//	int ch = 0;
//	while (~(ch = fgetc(stdin))) {//fgetc�ӱ�׼�������ж�ȡ����
//		fputc(ch, stdout);
//	}
//}
//void test1() {
//	//test1_1();
//	//test1_2();
//	//test1_3();
//	//test1_4();
//}
//void test2_1() {
//	FILE* fp = fopen("test.dat", "w");
//	if (NULL == fp) {
//		perror("test2_1 fp fopen");
//		return;
//	}
//	fputs("abcdefg\n", fp);
//	fputs("qrstuvw\n", fp);
//	fclose(fp);
//	fp = NULL;
//	fputs("I love �˲���չ�\n", stdout);
//	fputs("I love �˲����ٹ�\n", stdout);
//}
//void test2_2() {
//	FILE* fp = fopen("test.dat", "r");
//	if (NULL == fp) {
//		perror("test2_2 fp fopen");
//		return;
//	}
//	int ret = 0;
//	char buff[1024] = "";
//	ret = fgets(buff, 1024, fp);
//	fputs(buff, stdout);
//	fclose(fp);
//	fp = NULL;
//}
//void test2() {
//	//test2_1();
//	//test2_2();
//}
//void test3_1() {
//	struct S {
//		char _arr[10];
//		int _num;
//		float _sc;
//	};
//	FILE* fp = fopen("test.dat", "w");
//	if (NULL == fp) {
//		perror("test3_1 fp fopen");
//		return;
//	}
//	struct S s = { "abcdef", 10, 5.5f };
//	//fprintf(stdout, "%s		%d		%.1lf\n", s._arr, s._num, s._sc);
//	fprintf(fp, "%s %d %.1f\n", s._arr, s._num, s._sc);//�Ը�ʽ�������ݽ���д�ļ�
//	fclose(fp);
//	fp = NULL;
//}
//void test3_2() {
//	struct S {
//		char _arr[10];
//		int _num;
//		float _sc;
//	};
//	FILE* fp = fopen("test.dat", "r");
//	if (NULL == fp) {
//		perror("test3_2 fp fopen");
//		return;
//	}
//	struct S s = { 0 };
//	fscanf(stdin, "%s%d%f", s._arr, &s._num, &s._sc);
//	fprintf(stdout, "%s %d %.1f\n", s._arr, s._num, s._sc);
//	fscanf(fp, "%s%d%f", s._arr, &s._num, &s._sc);
//	fprintf(stdout, "%s %d %.1f\n", s._arr, s._num, s._sc);
//	fclose(fp);
//	fp = NULL;
//}
//void test3() {
//	//test3_1();//д��
//	//test3_2();
//}
//void test4_1() {
//	struct S {
//		char _arr[10];
//		int _num;
//		float _sc;
//	};
//	struct S s = { "abcdef", 10, 5.5f };
//	FILE* fp = fopen("test.dat", "wb");
//	if (NULL == fp) {
//		perror("test4_1 fp fopen");
//		return;
//	}
//	fwrite(&s, sizeof(struct S), 1, fp);
//	fclose(fp);
//	fp = NULL;
//}
//void test4_2() {
//	struct S {
//		char _arr[10];
//		int _num;
//		float _sc;
//	};
//	struct S s = { 0 };
//	FILE* fp = fopen("test.dat", "rb");
//	if (NULL == fp) {
//		perror("test4_2 fp fopen");
//		return;
//	}
//	fread(&s, sizeof(struct S), 1, fp);
//	fprintf(stdout, "%s %d %.1f\n", s._arr, s._num, s._sc);
//	fclose(fp);
//	fp = NULL;
//}
//void test4_3() {
//	struct S {
//		char _arr[10];
//		int _num;
//		float _sc;
//	};
//	struct S s = { "abcde", 10, 5.5f };
//	FILE* fp = fopen("test.dat", "wb");
//	if (NULL == fp) {
//		perror("test4_3 fp fopen");
//		return;
//	}
//	fwrite(&s, sizeof(s), 1, fp);
//	fclose(fp);
//	fp = NULL;
//}
//void test4_4() {
//	struct S {
//		char _arr[10];
//		int _num;
//		float _sc;
//	};
//	struct S s = { 0 };
//	FILE* fp = fopen("test.dat", "rb");
//	if (NULL == fp) {
//		perror("test4_4 fp fopen");
//		return;
//	}
//	fread(&s, sizeof(struct S), 1, fp);
//	fprintf(stdout, "%s %d %.1f\n", s._arr, s._num, s._sc);
//	fclose(fp);
//	fp = NULL;
//}
//void test4() {
//	//test4_1();//��������ʽд���ļ�
//	//test4_2();//��������ʽ��ȡ�ļ�
//	//test4_3();
//	//test4_4();
//}
//void test() {
//	//�ڴ��г���--д��/���-->Ӳ���е��ļ�
//	//�ڴ��г���<--��ȡ/����--Ӳ���е��ļ�
//	//���Ǹ߶ȳ���ĸ���,C������ֻҪ��������,��Ĭ�ϴ���3����,stdin��׼������,stdout��ע�����,stderr��׼������,������������FILE*���͵�
//	//test0();
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//}
//int main() {
//	test();
//	return 0;
//}
//#include "Contact2.h"
//void test() {
//	int input = 0;
//	Contact con;
//	InitContact(&con);
//	do {
//		Menu();
//		printf("������������ѡ��:>");
//		scanf("%d", &input);
//		switch (input) {
//		case _EXIT:
//			DestroyContact(&con);
//			printf("�����˳�ͨѶ¼!\n");
//			break;
//		case _ADD:
//			AddContact(&con);
//			break;
//		case _DEL:
//			DelContact(&con);
//			break;
//		case _SEARCH:
//			SearchContact(&con);
//			break;
//		case _MODIFY:
//			ModifyContact(&con);
//			break;
//		case _SORT:
//			SortContact(&con);
//			break;
//		case _PRINT:
//			PrintContact(&con);
//			break;
//		default:
//			printf("���������������,����������!\n");
//			break;
//		}
//	} while (input);
//	printf("���˳�ͨѶ¼!\n");
//}
//int main() {
//	test();
//	return 0;
//}
//#include <stdio.h>
//#include <windows.h>
//void test0() {
//	struct S {
//		char _arr[10];
//		int _age;
//		float _f;
//	};
//	struct S s = { "hello", 20, 5.5f };
//	struct S s2 = { 0 };
//	char buff[100] = "";
//	//sprintf��һ����ʽ��������ת��Ϊ�ַ���
//	sprintf(buff, "%s %d %f", s._arr, s._age, s._f);//д���ַ���ʱ�������һ��,������滹ԭ������������
//	printf("%s\n", buff);//�ַ�����ӡ
//	//sscanf��buff�ַ����л�ԭ��һ���ṹ������
//	sscanf(buff, "%s %d %f", s2._arr, &s2._age, &s2._f);
//	printf("%s %d %f\n", s2._arr, s2._age, s2._f);//�ַ��� ���� ��������ϴ�ӡ
//}
//void test1_1() {
//	//int fseek(FILE* stream, long int offset, int origin);���һ��������ʼλ��������
//	//SEEK_CUR, SEEK_SET, SEEK_END�ֱ��ǵ�ǰλ��,��ʼλ��,�յ�λ��
//	FILE* fp = fopen("test.txt", "r");
//	if (NULL == fp) {
//		perror("test1_1 fp fopen");
//		return;
//	}
//	int ch = 0;
//	ch = fgetc(fp);
//	printf("%c\n", ch);//a
//	fseek(fp, -1, SEEK_CUR);
//	ch = fgetc(fp);
//	printf("%c\n", ch);//a
//	ch = fgetc(fp);
//	printf("%c\n", ch);//b
//	fseek(fp, 2, SEEK_CUR);
//	ch = fgetc(fp);
//	printf("%c\n", ch);//e
//	ch = fgetc(fp);
//	printf("%c\n", ch);//f
//	fseek(fp, -2, SEEK_END);
//	ch = fgetc(fp);
//	printf("%c\n", ch);//e
//	ch = fgetc(fp);
//	printf("%c\n", ch);//f
//	long ret = ftell(fp);
//	printf("%ld\n", ret);//6
//	rewind(fp);
//	ch = fgetc(fp);
//	putchar(ch);//a
//	fclose(fp);
//	fp = NULL;
//}
//void test1_2() {
//	FILE* pFile = fopen("example.txt", "wb");
//	if (NULL == pFile) {
//		perror("test1_2 pFile fopen");
//		return;
//	}
//	fputs("This is an apple.", pFile);
//	fseek(pFile, 9, SEEK_SET);
//	fputs(" sam", pFile);
//	fclose(pFile);
//	pFile = NULL;
//}
//void test1_3() {
//	//ftell���������ļ�ָ���������ʼλ�õ�ƫ����	����ԭ��:long int ftell(FILE* stream);
//	long size = 0;
//	FILE* pFile = fopen("myfile.txt", "rb");
//	if (NULL == pFile) {
//		perror("test1_3 pFile fopen");
//		return;
//	}
//	fseek(pFile, 0, SEEK_END);
//	size = ftell(pFile);
//	fclose(pFile);
//	pFile = NULL;
//	printf("Size of myfile.txt: %ld bytes.\n", size);//���ļ��е��ֽ���
//}
//void test1_4() {
//	//rewind�������ļ�ָ���λ�ûص��ļ�����ʼλ��		����ԭ���� void rewind(FILE* stream);
//	int n = 0;
//	char buff[27] = "";
//	FILE* fp = fopen("myfile.txt", "w+");
//	for (n = 'A'; n <= 'Z'; n++) {
//		fputc(n, fp);
//	}
//	rewind(fp);
//	fread(buff, 1, 26, fp);
//	fclose(fp);
//	fp = NULL;
//	buff[26] = '\0';
//	puts(buff);
//}
//void test1() {
//	//�ļ������д
//	test1_1();
//	//test1_2();
//	//test1_3();
//	//test1_4();
//}
//void test2() {
//	//�ı��ļ���������ļ�		�ڴ��е������������ľ�����������д��Ӳ���ļ�����Ƕ������ļ�,���ı��༭����������,����Ч�ʸ߿��Բ���ת��Ҳ��ʡ�ռ�	   ���ڴ��е�������ת��ΪASSCII��ֵȻ��д��Ӳ���ļ�������ı��ļ�,���ı��༭�����ܿ��ö�,������ΪҪת��Ч�ʵͶ���ռ�ÿռ����
//	int a = 10000;
//	FILE* fp = fopen("test1.txt", "wb");
//	if (NULL == fp) {
//		perror("test2 fp fopen");
//		return;
//	}
//	fwrite(&a, sizeof(int), 1, fp);//������д��,ֱ��д���ڴ�����,�ı��༭����ʾ����
//	fclose(fp);
//	fp = NULL;
//	FILE* pf = fopen("test2.txt", "w");
//	if (NULL == pf) {
//		perror("test2 pf fopen");
//		return;
//	}
//	int n = 10000;
//	fprintf(pf, "%d", n);//�ı�д��,д���Ӧ�������ַ�,�ı��༭����ʾ10000
//	fclose(pf);
//	pf = NULL;
//}
//void test3_1() {
//	FILE* fp = fopen("test.txt", "r");
//	if (!fp) {
//		perror("test3_1 fp fopen");
//		return;
//	}
//	int c = 0;
//	while (~(c = fgetc(fp))) {
//		putchar(c);
//	}
//	printf("\n");
//	if (ferror(fp)) {
//		puts("I/O error when reading");
//	}
//	else if (feof(fp)){
//		puts("End of file reached successfully");
//	}
//	if (feof(fp)) {
//		puts("EOF");
//	}
//	else {
//		puts("Error");
//	}
//	fclose(fp);
//	fp = NULL;
//}
//void test3_2() {
//	enum {
//		SIZE = 5
//	};
//	double a[SIZE] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
//	double b = 0.0;
//	size_t ret_code = 0;
//	FILE* fp = fopen("test.bin", "wb");
//	fwrite(a, sizeof(*a), SIZE, fp);
//	fclose(fp);
//	fp = NULL;
//	fp = fopen("test.bin", "rb");
//	while (fread(&b, sizeof(double), 1, fp)) {
//		printf("%lf\n", b);
//	}
//	if (feof(fp)) {
//		printf("Error reading test.bin: unexpected end of file\n");
//	}
//	else  if (ferror(fp)){
//		perror("Error reading test.bin");
//	}
//}
//void test3_3() {
//	FILE* fp1 = fopen("test.txt", "r");
//	if (NULL == fp1) {
//		perror("test3_3 fp1 fopen");
//		return;
//	}
//	FILE* fp2 = fopen("test0.txt", "w");
//	if (NULL == fp2) {
//		perror("test3_3 fp2 fopen");
//		fclose(fp1);
//		fp1 = NULL;
//		return;
//	}
//	int ch = 0;
//	while (~(ch = fgetc(fp1))) {
//		putchar(fputc(ch, fp2));
//	}
//	if (feof(fp1)) {
//		printf("\n����:��ȡ���ļ�������־���¶�ȡ����!\n");
//	}
//	else if (ferror(fp1)) {
//		printf("\n�쳣:��ȡ�ļ������¶�ȡ����!\n");
//	}
//	fclose(fp1);
//	fp1 = NULL;
//	fclose(fp2);
//	fp2 = NULL;
//}
//void test3() {
//	//fgetc�����ڶ�ȡ������ʱ��᷵��EOF,������ȡ��ʱ�򷵻ص��Ƕ�ȡ�����ַ���ASSCII��ֵ
//	//fgets�����ڶ�ȡ������ʱ��᷵��NULL,������ȡ��ʱ�򷵻ص��Ǵ���ַ����Ŀռ����ʼ��ַ
//	//fread�����ڶ�ȡ��ʱ�򷵻ص���ʵ�ʶ�ȡ����������Ԫ�صĸ���,������ֶ�ȡ����������Ԫ�صĸ���С��ָ����Ԫ�ظ���,��������һ�ζ�ȡ��
//	//��ʹ����������������ȡ�ļ�������,������feof��������ֵ�����ж϶�ȡ����ԭ���Ƕ�ȡ���ļ�ĩβEOF���¶�ȡ����,���Ƕ�ȡ�������ļ���ȡ����
//	//test3_1();//�ı��ļ�������
//	//test3_2();//�����Ƶ�����
//	//test3_3();
//}
//void test4() {
//	//�����ļ�ϵͳ
//	FILE* fp = fopen("test9.txt", "w");
//	if (NULL == fp) {
//		perror("test4 fp fopen");
//		return;
//	}
//	fputs("abcdef", fp);//�Ƚ�����ŵ����������(Ҳ�����ڴ�)
//	printf("˯��10��-�Ѿ�д������,��test9.txt,�����ļ�û������\n");
//	Sleep(10000);
//	printf("ˢ�»�����\n");
//	fflush(fp);//ˢ�»�����ʱ,���ܽ����������������д���ļ�(Ӳ��)
//	//ע��:fflush�ڸ߰汾VS�в���ʹ��
//	printf("��˯��10��-��ʱ,�ٴδ�test9.txt�ļ�,�ļ���������\n");
//	Sleep(10000);
//	fclose(fp);//ע��:fclose�ڹر��ļ���ʱ��,Ҳ��ˢ�»�����(Ҳ�����ڴ�)
//	fp = NULL;
//}
//void test() {
//	//printf	��Ա�׼������ĸ�ʽ��������	- stdout
//	//fprintf	�������������ĸ�ʽ��������   - stdout/�ļ���
//	//sprintf	��һ����ʽ������ת��Ϊ�ַ���
//	//scanf		��Ա�׼�������ĸ�ʽ���������   - stdin
//	//fscanf	��������������ĸ�ʽ���������   - stdin/�ļ���
//	//sscanf	���ַ����ж�ȡһ����ʽ������
//	//test0();
//	//test1();
//	//test2();
//	//test3();
//	test4();
//}
//int main() {
//	test();
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//void test0() {
//	//printf("file: %s\n", __FILE__);//Ԥ�������--->���б����Դ�ļ�
//	//printf("line: %d\n", __LINE__);//Ԥ�������--->�ļ���ǰ���к�
//	//printf("date: %s\n", __DATE__);//Ԥ�������--->�ļ������������
//	//printf("time: %s\n", __TIME__);//Ԥ�������--->�ļ��������ʱ��
//	//printf("func: %s\n", __FUNCTION__);//Ԥ�������--->��ǰ�ĺ�����
//	//printf("stdc: %d\n", __STDC__);//err:__STDC__�����������ѭANSI C��ֵΪ1,����δ����,VS2019��û�ж��嵼�±������,gcc�ж�����������Ż��ӡ1,˵��VS2019��֧�����ANSI C��׼,��gcc֧�����ANSI C��׼
//	//��Щ���Ŷ����������õ�,��ЩԤ������ŵ�Ӧ��֮һ����д��־
//	FILE* fp = fopen("log.txt", "a+");//log��־,a+�ķ�ʽ��׷��,û�ļ��ʹ����ļ�,׷�Ӷ�д
//	if (NULL == fp) {
//		perror("test0 fp fopen");
//		return;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		fprintf(fp, "%s %d %s %s %s %d\n", __FILE__, __LINE__, __DATE__, __TIME__, __FUNCTION__, i);//д����־
//		printf("%d\n", i);
//	}
//	fclose(fp);
//	fp = NULL;
//}
////#define M 1000
////#define reg register
////#define do_forever for(;;)
//void test1() {
//	//int m = M;
//	//printf("%d\n", m);
//	//register int a = 10;
//	//reg int b = 20;
//	//do_forever;//��ѭ��
//}
////#define CASE break;case
//void test2() {
//	//int n = 0;
//	//scanf("%d", &n);
//	//switch (n) {
//	//case 1:
//	//CASE 2:
//	//CASE 3:
//	//}
//}
////#define DEBUG_PRINT printf("file:%s line:%d date:%s time:%s function: %s\n",\
////__FILE__,__LINE__, __DATE__, __TIME__, __FUNCTION__)
//void test3() {
//	//DEBUG_PRINT;//\���з�
//}
////#define M 1000;//������;���ܵ��º���д�����������
//void test4() {
//	//int m = M;//int m = 1000; ;
//	int a = 10;
//	int b = 0;
//	//if (a > 10)
//	//	b = M;//err: b = 1000; ;���³���
//	//else
//	//	b = -M;
//}
////#define SQUARE(X) ((X)*(X))
////#define DOUBLE(X) ((X)+(X))
//void test5() {
//	//printf("%d\n", SQUARE(3 + 1));
//	//printf("%d\n", 10 * DOUBLE(4));
//	//printf("%d\n", 10 * (4) + (4));
//	//printf("%d\n", 3 * 3);
//	//printf("%d\n", 3 + 1 * 3 + 1);
//}
////#define M 100
////#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))
//void test6() {
//	//int max = MAX(101, M);
//	//printf("max = %d\n", max);
//	//printf("M = %d\n", M);
//}
////void print(int x) {
////	printf("the value of x is %d\n", x);
////}
//void test7() {
//	//printf("hello world\n");//hello world
//	//printf("hello " "world\n");//hello world
//
//	//int a = 10;
//	//print(a);
//	////the value of a is 10
//	//int b = 20;
//	//print(b);
//	////the value of b is 20
//	//int c = 30;
//	//print(c);
//	//the value of c is 30
//}
////#define PRINTF(X,FORMAT) printf("the value of "#X" is "FORMAT"\n", X)
//void test8() {						//����ʹ�÷�ʽֻ�к��в���ʹ��
//	//int a = 10;
//	////the value of a is 10
//	//int b = 20;
//	////the value of b is 20
//	//int c = 30;
//	////the value of c is 30
//	//float f = 5.5f;
//	////the value of f is 5.50
//	////����������ӡ����Ҫ�Ľ��,ʹ�ú���������,����ʹ�ú����#
//	//PRINTF(a, "%d");//printf("the value of ""a"" is ""%d""\n", a);
//	//PRINTF(b, "%d");//printf("the value of ""b"" is ""%d""\n", b);
//	//PRINTF(c, "%d");//printf("the value of ""c"" is ""%d""\n", c);
//	//PRINTF(f, "%.2f");//printf("the value of ""f"" is ""%.2f""\n", f);
//}
////#define CAT(X, Y) (X##Y)
////#define CATS(X, Y, Z) (X##Y##Z)//##ֻ�ں궨���в���ʹ��
//void test9() {
//	//int class101 = 100;
//	//printf("%d\n", CAT(class, 101));//��ӡ100,����:class##101--->class101,##�ϲ���������Ϊһ������
//	//printf("%d\n", class101);//100
//
//	//int class101101 = 10;
//	//printf("%d\n", CATS(class, 101, 101));//��ӡ10,����:class##101##101--->class101101,##�ϲ���������Ϊһ������
//	//printf("%d\n", class101101);//10
//}
//void test10() {
//#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))
//	int a = 5;
//	int b = 8;
//	int m = MAX(a++, b++);
//	printf("a = %d, b = %d, m = %d\n", a, b, m);//6 10 9
//}
//int Max(int x, int y) {
//	return (x > y) ? x : y;
//}
//void test11() {
////#define MAX(X, Y) (((X) >(Y)) ? (X) : (Y))
////	int a = 5;
////	int b = 8;
////	//int m = MAX(a, b);
////	int m = (((a) > (b)) ? (a) : (b));
////	m = Max(a, b);
//}
//#define MALLOC(num, type) (type*)malloc(num * sizeof(type))
//void test12() {
//	int* p1 = (int*)malloc(10 * sizeof(int));
//	if (NULL == p1) {
//		perror("test12 p1 malloc");
//		return;
//	}
//	int* p2 = MALLOC(10, int);
//	if (NULL == p2) {
//		perror("test12 p2 malloc");
//		free(p1);
//		p1 = NULL;
//		return;
//	}
//	free(p1);
//	p1 = NULL;
//	free(p2);
//	p2 = NULL;
//}
//void test13() {
////#define M 100
////	int a = M;
////	printf("a = %d\n", a);//100
////#undef M
////#define M 1000
////	a = M;
////	printf("a = %d\n", a);//1000
////#undef M
////#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))
////	//int a = 3;
////	//int b = 5;
////	//printf("%d\n", MAX(a, b));
////#undef MAX
////	//int a = 3;
////	//int b = 5;
////	//printf("%d\n", MAX(a, b));//err
//}
////#define PRINT
//void test14() {
////#ifdef PRINT
////	printf("hehe\n");
////#endif
//}
//void test15() {
////#define __DEBUG__
////	int i = 0;
////	int arr[10] = { 0 };
////	for (i = 0; i < 10; i++) {
////		arr[i] = i;
////#ifdef __DEBUG__//�����Դ���,ɾ����ϧ,�����ְ���,���ǽ���ѡ���Ա���
////		printf("%d ", arr[i]);//Ϊ�˹۲������Ƿ�ֵ�ɹ�
////#endif//__DEBUG__
////	}
//}
//void test16() {
////#if 1
////	printf("hehe\n");//��ӡ
////#endif
////#if 0
////	printf("haha\n");//����ӡ
////#endif
////#if 1-2
////	printf("hhhh\n");//��ӡ
////#endif
////
////#define FLAG 1
////#if FLAG//#if 1
////	printf("Good\n");//��ӡ
////#endif
//}
//void test17() {
////#if 1==2
////	printf("hehe\n");
////#elif 2==3
////	printf("haha\n");
////#else
////	printf("heihei\n");
////#endif
//}
//void test18() {
////#define TEST 0//ok,������ӡtest
////#ifdef TEST//���TEST������,�������������
////	printf("test\n");
////#endif
//
////#define HEHE 1
////#ifndef HEHE//���HEHEû�ж���,���������������
////	printf("hehe\n");
////#endif//!HEHE
//}
//void test19() {
////#define TEST
////#define HEHE
////	//���TEST������,1,2�������
////#ifdef TEST//1
////	printf("test1\n");
////#endif//TEST
////#if defined(TEST)//2
////	printf("test2\n");
////#endif//TEST
////
////	//���HEHE������,����������
////#ifndef HEHE//3
////	printf("hehe1\n");
////#endif//!HEHE
////#if !defined(HEHE)//4
////	printf("hehe2\n");
////#endif//!HEHE
////	//1��2��˼��һ����,3��4��˼��һ����,1��3���෴����˼,2��4���෴����˼
//}
//void test20() {
////#include <stdio.h>//���ļ�����,C���Կ����ṩ�ĺ�����ͷ�ļ�ʹ��<>
////#include "add.h"//�����ļ�����,�Զ���ĺ�����ͷ�ļ�ʹ��""
////<>��""����ͷ�ļ��ı���������:���Ҳ��Ե�����
////"":����Դ�ļ�Ŀ¼�²���,����ҵ�����ʹ��,û�ҵ���ȥϵͳ��ͷ�ļ�Ŀ¼�²���,�ҵ�����ʹ��,��û�ҵ���ᵼ�±������
////<>:ֱ����ϵͳͷ�ļ�Ŀ¼�²���,����ҵ�����ʹ��,û�ҵ����±������
//}
//void test() {
//	//#define�Ƕ�����źͺ��
//	//test0();
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	//test5();
//	//test6();
//	//test7();
//	//test8();
//	//test9();
//	//test10();
//	//test11();
//	//test12();
//	//test13();
//	//��������ָ��Ҳ��Ԥ����ָ��,Ԥ����׶δ����
//	//test14();
//	//test15();
//	//test16();
//	//test17();
//	//test18();
//	//test19();
//	//test20();
////#pragma once
////#pragma pack(4)
////#pragma pack()
////#pragma comment(lib, "xxx.lib")
////#pragma warning(disable:6031)
//}
//int main() {
//	//test();
//	return 0;
//}
//#include <stdio.h>
//#include <stddef.h>
//void test0() {
////#define SWAPODDEVEN(N) (((N & 0x55555555) << 1) | ((N & 0xaaaaaaaa) >> 1))
////	int a = 0;
////	scanf("%d", &a);
////	printf("%d\n", SWAPODDEVEN(a));
//}
//void test1() {
//#define MYOFFSETOF(s, m) (size_t)((int)(&(((s*)0x00)->m)) - 0x00)
//	struct S {
//		char _c;
//		int _i;
//		double _d;
//		short _s;
//	};
//	printf("%d\n", sizeof(struct S));//24
//	printf("%d, %d\n", (int)MYOFFSETOF(struct S, _c), (int)offsetof(struct S, _c));
//	printf("%d, %d\n", (int)MYOFFSETOF(struct S, _i), (int)offsetof(struct S, _i));
//	printf("%d, %d\n", (int)MYOFFSETOF(struct S, _d), (int)offsetof(struct S, _d));
//	printf("%d, %d\n", (int)MYOFFSETOF(struct S, _s), (int)offsetof(struct S, _s));
//}
//void test() {
//	//test0();
//	//test1();
//}
//int main() {
//	test();
//	return 0;
//}
//#include <stdio.h>
//#include <assert.h>
//#include <stdlib.h>
//#include <limits.h>
//void test0() {
//	char* p = "1234";
//	int ret = atoi(p);
//	printf("ret = %d\n", ret);
//}
//int my_atoi(const char* str) {
//	assert(str != NULL);
//	int flag = 1;
//	long long num = 0;
//	while (*str != '\0' && *str == ' ')	str++;
//	if (*str != '\0') {
//		if (*str == '-') {
//			flag = -1;
//			str++;
//		}
//		else if (*str == '+') {
//			flag = 1;
//			str++;
//		}
//	}
//	while (*str != '\0' && *str <= '9' && *str >= '0') {
//		num = num * 10 + (flag * (*str - '0'));
//		if (num > INT_MAX) {
//			return INT_MAX;
//		}
//		else if (num < INT_MIN) {
//			return INT_MIN;
//		}
//		str++;
//	}
//	return (int)(num);
//}
//void test1() {
//	const char* p = "-1234";
//	int ret = my_atoi(p);
//	printf("ret = %d\n", ret);
//}
//void test() {
//	//test0();
//	test1();
//}
//int main() {
//	test();
//	return 0;
//}
#endif