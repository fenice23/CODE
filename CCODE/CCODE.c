#define _CRT_SECURE_NO_WARNINGS 1//放在代码的第一行
#pragma warning(disable:6031)
#if 0
//IDE中代码大都是依托于项目工程的,一个解决方案包含多个项目工程,一个项目工程包含多个.c,.h文件,但是一个项目工程有且只有一个main函数
//写代码
//1.写出主函数即main函数
//100~500行代码
//如何执行呢?--->C语言是从主函数的第一行开始执行的
//所以C语言代码中得有main函数(入口),C语言一个工程中main函数有且只有一个
//写个代码在屏幕上打印:C语言
//printf--->是一个库函数--->在屏幕上打印信息
//printf的使用也得打招呼(引用名为头文件的stdio.h)
//#include <stdio.h>
//int main()
//{
//	printf("C Lanuage\n");
//	return 0;
//}
//编译+链接+运行代码 VS这个IDE用快捷键ctrl + f5/fn + ctrl + f5/[调试窗口]->[开始执行不调试]即可搞定
//vs2013程序执行太快,要设置一下vs2013的属性,vs2019不用设置就可以看到结果
//#include <stdio.h>
//int main()
//{
//	printf("Hello World!!!\n");//ctrl+F5运行程序
//	return 0;
//}
//int main()//err:C语言一个工程中main函数有且只有一个
//{
//	printf("hehe\n");
//	printf("hello bit!\n");
//	return 0;
//}
//数据类型
//计算机语言 ---> 写程序 ---> 解决生活中的问题 ---> 必须有能力描述生活中的问题
//购物商城	---> 上架商品, 价格 ---> 15.6元 ---> 小数 1.56*10^1
//年龄 - 50
//C语言 - 浮点型	- 整型
//a
//'a' ---> 字符a
//int main()
//{
//	//字符数据类型
//	char ch = 'a';
//	int age = 20;//整型
//	short num = 10;//短整型
//	long l = 10l;//长整型
//	long long ll = 10ll;//长长整型
//
//	float weight = 55.5f;//单精度浮点型
//	double d = 0.0;//双精度浮点型
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("hehe\n");
//	printf("C语言\n");
//	printf("%d\n", 100);
//
//	//sizeof是一个关键字,也是一个操作符,返回值类型是size_t型,用来计算一个类型或者一个变量所占空间的大小,单位是字节
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4/8 C标准规定sizeof(long) >= sizeof(int)
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	printf("%d\n", sizeof(long double));//8/10/12
//	/*
//	计算机中的单位:
//	bit ---> 比特位, 计算机识别二进制,存储0和1,8进制组成是0~7,10进制组成是0~9,2进制组成是0和1
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
//	//生活中的一些数据:有些数据不能改变:血型,性别,圆周率
//	//有些数据可以改变:年龄,工资,体重
//	//C语言怎么描述?常量:不可以改变的量,变量:能被改变的量
//
//	//创建一个变量: 类型 变量名 = 0;//推荐
//	//类型 变量名;//语法允许,但是不推荐
//	int age = 20;
//	double weight = 75.3;
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%lf\n", weight);//%lf是打印double类型,%f是打印float类型
//	//%d-整型	%lf-double	%f-float
//	return 0;
//}
//#include <stdio.h>
//int a = 100;//这里的变量a是全局变量,他是{}外部定义的变量
//int global = 2019;
//void test()
//{
//	int local = 2018;
//	int global = 2020;
//	printf("global = %d\n", global);//2020
//}
//int main()
//{
//	//变量分为局部变量和全局变量
//	int a = 10;//这里的变量a是局部变量,他是{}内部定义的变量
//	printf("%d\n", a);//10,当局部变量和全局变量名字冲突的情况下,局部优先
//	//当然我们写代码的时候不建议把局部变量和全局变量名字写成一样的
//	test();
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//写一个代码求2个整数的和,scanf是标准输入函数
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d%d", &a, &b);
//	sum = a + b;
//	printf("sum = %d", sum);
//	return 0;
//}
//变量的作用于和生命周期
//作用域
//局部变量的作用域就是局部变量所在的局部范围
//全局变量的作用域就是整个项目工程
//#include <stdio.h>
//int main()
//{
//	printf("hehe!\n");
//	int a = 10;
//	printf("a = %d\n", a);
//	return 0;
//}
//#include <stdio.h>
//int g_val = 2022;//全局变量
////g_val = 20;//err:多次初始化,变量赋值必须放到{}内部
////printf("g_val = %d\n", g_val);//err:这是一个函数调用,但是没有函数调用这个函数调用,函数调用代码得写到函数里面去
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
//	//printf("g_var = %d\n", g_var);//err:add.c中的全局变量在CODE.c使用前没有进行声明外部符号导致出错
//	extern int g_var;//extern只能修饰全局变量或者函数声明,且可以写多个也可以省略,并且声明全局变量时不能同时初始化
//	printf("g_var = %d\n", g_var);//ok,2020
//	//printf("g_variable = %d\n", g_variable);//err
//	extern int g_variable;
//	printf("g_variable = %d\n", g_variable);//2
//	return 0;
//}
//int g_variable = 2;
//生命周期:Duration	变量的生命周期:变量的创建到销毁这一时间段
//局部变量的生命周期:进入局部范围生命周期开始,出局部范围生命周期结束
//全局变量的生命周期:就是整个main函数生命周期,也就是程序生命周期
//#include <stdio.h>
////定义两个名字相同的全局变量是不可能出现
//int main()
//{
//	{
//		int a = 10;
//		printf("a = %d\n", a);//10
//	}
//	//printf("a = %d\n", a);//err
//	return 0;
//}
//常量
//#include <stdio.h>
//enum _Sex
//{
//	_MALE,//枚举常量
//	_FEMALE,//枚举常量
//	_SECRET//枚举常量
//};
//int main()
//{
//	3.14;//字面常量
//	1000;//字面常量
//	const float pai = 3.14f;//C中是const修饰的常变量
//	//pai = 5.14f;//err
//	#define MAX 100//#define定义的标识符常量
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
//	//1.字面常量
//	//3.14;//浮点字面常量
//	//10;//整型字面常量
//	//'a';//字符字面常量
//	//"abcdef";//字符串字面常量
//	//...
//
//	//2.const修饰的常变量
//	//int num = 10;//变量
//	//num = 20;
//	//printf("num = %d\n", num);
//	//const int n = 10;//n就是const修饰的常变量---具有常属性(不能被改变的属性),但是本质还是变量
//	////n = 20;//err
//	//int arr1[10] = { 0 };//ok
//	////int arr2[n];//err,说明这里的n是变量,但是有的编译器(gcc)这样可以通过(C99变长数组)
//	////int arr2[n] = { 0 };//err,所有C标准中这里全部不能编译通过,C++中可以编译通过
//
//	//3.#define定义的标识符常量
//	int n = MAX;
//	printf("n = %d\n", n);
//	//MAX = 1;//err:MAX是常量,不能被修改
//	
//	return 0;
//}
//#include <stdio.h>
//enum _Sex
//{
//	//这种枚举类型的变量的未来可能取值
//	//枚举常量
//	_MALE = 3,//赋初值	//0
//	_FEMALE,//1
//	_SECRET//2
//};//枚举常量保存在代码段,枚举变量保存在栈
//int main()
//{
//	//4.枚举常量,可以一一列举的常量
//	enum _Sex s = _MALE;
//	printf("s = %d\n", _MALE);//0
//	s = _FEMALE;
//	printf("s = %d\n", _FEMALE);//1
//	s = _SECRET;
//	printf("s = %d\n", _SECRET);//2
//
//	//_MALE = 2;//err:不能对常量赋值
//	printf("sizeof(enum _Sex) = %d\n", sizeof(enum _Sex));//4
//	printf("sizeof(s) = %d\n", sizeof(s));//4
//	printf("sizeof(_FEMALE) = %d\n", sizeof(_FEMALE));//4
//	printf("sizeof(_MALE) = %d\n", sizeof(_MALE));//4
//	printf("sizeof(_SECRET) = %d\n", sizeof(_SECRET));//4
//	return 0;
//}
//字符串
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
//	printf("%s\n", arr2);//bit乱码
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
//	//字符串就是用双引号引起来的一串字符
//	//"abcdef";
//	//"hello bit";
//
//	//字符数组---数组是一组相同类型的元素
//	//其实字符串在结尾的位置隐藏了一个\0的转义字符
//	//\0是字符串的结束标志,
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
//	////printf("%s\n", arr2);//abc乱码
//	////printf("%s\n", arr3);//abc
//
//	////求一下字符串的长度---strlen(); string-length
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
//转义字符--->转义字符转变了它原来的意思
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
//	//printf("(are you ok??)\n");//vc6.0中会打印(are you ok],三字母词问题,??)--->]
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
//	//printf函数在打印数据的时候可以指定打印的格式
//	//printf("%d\n", 100);//100
//	//printf("%c\n", 'a');//a
//	//printf("%s\n", "abc");//abc
//
//	//printf("c:\\test\\test.c");
//	//printf("\a\a\a\a");//\a蜂鸣
//	//printf("abc");
//	//printf("\b");//\b退格键
//
//	//printf("%c\n", '\130');//X ---> 88ASSCII码表对应的字符
//	//printf("%d\n", '\130');//88
//  //ASSCI码表:每一个字符都有一个值,ASSCII码值,计算机存储落实到底层全是二进制数字,@!ER1... A-65 B-66 a-97 b-98
//	//printf("%c--->%d\n", '\101', '\101');//'A' ---> 65 ---> 101
//	//printf("%c--->%d\n", '\x30', '\x30');//0--->48
//
//	//printf("%d\n", (int)strlen("abc"));//3
//	//printf("%d\n", (int)strlen("c:\test\328\test.c"));//14
//	return 0;
//}
//注释:代码中有不需要的代码可以直接删除,也可以注释掉,代码中有些代码比较难懂可以加一下注释文字,即注释是用来解释复杂代码的,eg.
//注释有两种风格:1.C语言风格的注释/*xxxxxxxxxxxx*/	缺陷:不能嵌套注释		可以用条件编译代替之
//2.C++风格注释 //xxxxxxxxxxxxx	可以注释一行,也可以一行一行注释
//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
/////*C语言风格注释
//int Sub(int x, int y)
//{
//	return x - y;
//}
//*/
//int main()
//{
//	//C++风格的注释
//	//int a = 10;
//	//调用Add函数完成加法并打印到屏幕
//	printf("%d\n", Add(1, 2));
//
//	//int a = 10;//C++注释风格
//	/*
//	int b = 0;//C语言注释风格,缺陷是不支持嵌套注释
//	*/
//	return 0;
//}
//选择语句
//#include <stdio.h>
//int main()
//{
//	int coding = 0;
//	printf("你会去敲代码吗? (选择1 or 0) :>");
//	scanf("%d", &coding);
//	if (1 == coding)
//	{
//		printf("坚持,你会有好offer\n");
//	}
//	else
//	{
//		printf("放弃,回家卖红薯\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int input = 0;//输入的值
//	printf("加入比特:>\n");
//	printf("你要好好学习吗?(1 or 0):>");
//	scanf("%d", &input);
//	if (1 == input)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//	return 0;
//}
//循环语句	while  for  do...while
//#include <stdio.h>
//int main()
//{
//	printf("加入比特\n");
//	int line = 0;
//	while (line <= 200000)
//	{
//		line++;
//		printf("%d我要努力敲代码\n", line);
//	}
//	if (line > 200000)
//		printf("赢取白富美\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	while (line < 100000)
//	{
//		printf("写代码:%d\n", line);
//		line++;
//	}
//	if (100000 == line)
//	{
//		printf("好offer\n");
//	}
//	return 0;
//}
//函数--->特点就是简化代码,代码复用
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
//	//printf("输入两个操作数:>");
//	//scanf("%d%d", &num1, &num2);
//	//sum = num1 + num2;
//	//printf("sum = %d\n", sum);
//
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("请输入两个操作数:>");
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
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &num1, &num2);
//	//sum = num1 + num2;
//
//	//函数的方式解决
//	sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//	return 0;
//}
//数组--->一组相同类型元素的集合
//#include <stdio.h>
//int main()
//{
//	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//定义一个整型数组,最多放10个元素
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
//	//数组是一组相同数据类型的元素的集合
//	//10个整型1~10储存起来,数组使用下标来访问,从下标0开始
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	printf("\n");
//	//char ch[5] = { 'a', 'b', 'c' };//不完全初始化,剩余的默认为0
//	return 0;
//}
//操作符:
//#include <stdio.h>
//int main()
//{
//	//算术操作符+ - * / %
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
//	//a = 9 % 2;//% -> 取模(取余)
//	//printf("a = %d\n", a);//1
//
//	//移位操作符:>>  <<
//	//int a = 2;
//	//int b = a << 1;//左移操作符移动的是二进制位
//	//printf("a = %d, b = %d\n", a, b);//2, 4
//	//int c = b >> 2;//右移操作符移动的是二进制位
//	//printf("c = %d, b = %d\n", c, b);//1, 4
//
//	//位操作符:&按位与 |按位或 ^按位异或
//	//printf("%d\n", 3 & 5);//1
//	//printf("%d\n", 3 | 5);//7
//	//printf("%d\n", 3 ^ 5);//6
//
//	//赋值操作符:= += -= *= /= %= &= |= >>= <<=
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
//	//1 + 2;//+有两个操作数,+是双目操作符
//
//	//单目操作符:只有一个操作数的操作符
//	//!-->逻辑取反	C语言中0表示假,非零表示真
//	//int a = 10;
//	//printf("%d\n", !a);//0
//	//printf("%d\n", !!a);//1
//	//printf("%d\n", !!!a);//0
//	//a = 0;
//	//printf("%d\n", !a);//1
//	//printf("%d\n", !!a);//0
//	////!应用场景
//	//if (a)
//	//{
//	//	//如果a为真,做事
//	//}
//	//if (!a)
//	//{
//	//	//如果a为假,做事
//	//}
//
//	//正值,负值操作符都是单目操作符,只有一个操作数
//	//int a = -5;
//	//printf("a = %d\n", a);//-5
//	//a = -a;
//	//printf("a = %d\n", a);//5
//	//a = +a;
//	//printf("a = %d\n", a);//5
//
//	//sizeof操作符/关键字,是单目操作符,计算类型/变量所占内存空间大小,单位是字节
//	//int a = 10;
//	//printf("%d\n", sizeof(int));//4,sizeof(int)编译通过里面是类型说明这不是函数,因为函数传参不可能传类型
//	//printf("%d\n", sizeof(a));//4
//	//printf("%d\n", sizeof a);//ok,4,sizeof a编译通过说明这不是函数,因为函数调用不能去掉()函数调用操作符
//	////printf("%d\n", sizeof int);//err
//	int arr[10] = { 0 };//10*4 = 40;
//	printf("%d\n", sizeof(arr));//40,计算的是数组的总大小单位字节
//	printf("%d\n", sizeof(arr[0]));//4
//	int len = (int)(sizeof(arr) / sizeof(arr[0]));
//	printf("len = %d\n", len);//10
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);//~按二进制位取反:把所有二进制位中数字1变成0,0变成1
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111	因为整数数据在内存中存储的是补码
//	//一个整数的二进制表示由三种,原码,反码,补码,正整数原反补码相同,负整数要取反加1得到补码
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//int a = 10;
//	//int b = ++a;//前置++		先加加后使用
//	//printf("a = %d, b = %d\n", a, b);//11 11
//
//	//int a = 10;
//	//int b = a++;//后置++		先使用后加加
//	//printf("a = %d, b = %d\n", a, b);//11 10
//
//	int a = 1;
//	int b = (++a) + (++a) + (++a);//不建议写这种代码,这种代码写出来是浪费时间没有意义
//	printf("b = %d\n", b);//12但是不唯一,不同编译器结果不同
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//int a = 3.14;//warning初始化从double转换到int可能丢失数据
//	//int aa = (int)3.14;//(类型)--->强制类型转换操作符
//	//printf("%d, %d\n", a, aa);//3 3
//	//关系操作符 > < >= <= == !=
//	//逻辑操作符 && ||
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
//	//条件操作符---三目操作符	exp1 ? exp2 : exp3
//	//int a = 0;
//	//int b = 3;
//	//int max = 0;
//	//if (a > b) max = a;
//	//else max = b;
//	//printf("max = %d\n", max);//3
//	//max = a > b ? a : b;
//	//printf("max = %d\n", max);//3
//
//	//逗号操作符---双目操作符	逗号表达式--->逗号隔开的一串表达式	逗号表达式也称顺序求值表达式,整个表达式的结果是最后一个逗号表达式的结果
//	//int a = (2, 4 + 5, 6);
//	//printf("a = %d\n", a);//6
//	//int a = 0;
//	//int b = 3;
//	//int c = 5;
//	//int d = (a = b + 2, c = a - 4, b = c + 2);
//	//printf("d = %d\n", d);//3
//
//	//[]--->下标引用操作符
//	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//printf("%d\n", arr[5]);//6
//
//	//函数调用操作符
//	printf("hehe\n");//调用函数的时候,函数名后边的()就是函数调用操作符
//	printf("%d\n", 100);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//C语言提供的关键字	是C语言提供的,不能自己创建关键字		不能把C语言关键字用做变量名,函数名
//	//int char;//err
//	//auto break case char const continue default do double else enum extern float for goto if int long register return short signed sizeof static struct switch typedef union unsigned void volatile while
//	//auto	自动的	每个非静态非寄存器局部变量都是auto修饰的
//	//{
//	//	auto int a = 10;//这里的变量a是自动创建,自动销毁的变量,也称自动变量,临时变量,局部变量
//	//	//这里的auto可以省略	auto在C++11中可以进行自动类型推导
//	//}
//	//extern是用来声明外部符号的
//	//register寄存器关键字	编译器建议将register修饰的变量放在寄存器中
//	//register int a = 10;
//	//printf("%p", &a);//err,寄存器变量不存储在内存中,&寄存器变量地址打印出错
//	//register int num = 100;//编译器建议将变量num存放在寄存器中
//	//我们建议将大量频繁被使用的变量用register修饰,放到寄存器中提高效率
//	//signed 有符号的		unsigned int无符号的		static静态的		union共用体	void空/无	volatile	define不是关键字而是预处理指令	include也不是关键字而是预处理指令
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//typedef意思是类型定义--->不准确应该是类型重命名
//	typedef unsigned int u_int;
//	unsigned int num = 100;
//	u_int a = 100;//num和a这两个变量类型是一样的
//	return 0;
//}
//#include <stdio.h>
//void test1() {
//	int a = 1;//a是局部变量
//	a++;
//	printf("%d ", a);
//}
//void test2() {
//	static int a = 1;//初始化语句只执行一次
//	a++;			 //static修饰局部变量改变了局部变量的生命周期(本质上改变了变量的存储位置)
//	printf("%d ", a);
//}
//int main() {
//	//static静态的	1.static修饰局部变量	2.static修饰全局变量	3.static修饰函数
//	int i = 0;
//	while (i < 10) {
//		//test1();//打印10个2
//		test2();//2 3 4 5 6 7 8 9 10 11
//		i++;
//	}
//	return 0;
//}
//#include <stdio.h>
//extern int g_val;//extern声明外部符号
//extern int g_variable;
//int main() {
//	printf("g_val = %d\n", g_val);//全局变量在整个工程中都可以使用
//	//printf("g_variable = %d\n", g_variable);//err,因为add.c文件中g_variable全局变量被static修饰了,其全局作用域变为了所谓的文件作用域(这个说法不准确)
//	//static修饰全局变量使得这个全局变量只能在自己所在的源文件中使用,其他源文件不能使用
//	//全局变量在其他源文件内部能够使用是因为全局变量具有外部链接属性,被static修饰后就变成了内部链接属性了,此时其他源文件就不能链接到这个静态的全局变量了
//	return 0;
//}
//#include <stdio.h>
//extern int Add(int x, int y);//函数声明
//extern int Sub(int x, int y);
//int main() {
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//30
//	printf("sum = %d\n", sum);
//	printf("%d\n", Sub(a, b));//err:因为Sub函数被static修饰了,只能在它所在的源文件中使用,不能在其他源文件中使用
//	//static修饰函数使得函数只能在自己所在的源文件内部使用,不能在其他源文件内部使用,本质上static修饰函数是将函数的外部链接属性变成了内部链接属性(和static修饰全局变量类似)
//	return 0;
//}
//#include <stdio.h>
////define是预处理指令	1.define定义符号		2.define定义宏函数
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
//	//int num = 10;//变量都有地址
//	//&num;//取出num的地址
//	//printf("%p\n", &num);//打印地址,%p---以地址的形式打印
//
//	//int num = 10;
//	//int* p = NULL;//p为一个指针变量
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
//	//结论:指针32位平台所占空间大小是4字节,64位平台是8字节
//	return 0;
//}
//#include <stdio.h>
//struct Stu
//{
//	char _name[20];//名字
//	int _age;//年龄
//	char _sex[5];//性别
//	char _id[15];//学号
//};
//int main() {
//	struct Stu s = { "张三", 24, "男", "20189985" };
//	printf("name = %s, age = %d, sex = %s, id = %s\n", s._name, s._age, s._sex, s._id);
//	struct Stu* ps = &s;
//	printf("name = %s, age = %d, sex = %s, id = %s\n", ps->_name, ps->_age, ps->_sex, ps->_id);
//	printf("name = %s, age = %d, sex = %s, id = %s\n", (*ps)._name, (*ps)._age, (*ps)._sex, (*ps)._id);
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	//内存是电脑上特别重要的存储器,计算机中所有程序的运行都是在内存中进行的.所以为了有效的使用内存,就把内存划分为一个个小的内存单元,每个内存单元的大小都市1个字节.为了能够有效的访问到内存的每个单元,就给内存单元进行了编号,这些编号被称为内存单元的地址
//	//int a = 10;
//	//printf("0X%p\n", &a);//%p专门用来打印地址的
//	//int* pa = &a;//pa是用来存放地址的,C语言中pa叫指针变量
//	////*说明pa是指针变量,前面的int说明pa指向的对象是int类型的
//
//	//char ch = 'w';
//	//char* pc = &ch;
//	//printf("0X%p, 0X%p\n", pc, &ch);
//
//	//int* p = NULL;
//	//p = (int*)&p;//ok,但是不推荐这样写
//	//int* pp = &pp;//ok,但是不推荐这样写
//
//	//int a = 10;
//	//int* pa = &a;
//	//*pa = 20;
//	////这里的*是解引用操作,*pa就是通过pa存的a的地址找到a
//	//printf("%d\n", a);//20
//	//指针就是地址
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
////结构体关键字可以用来创建一个新的类型
//struct Stu//创建一个学生类型
//{
//	char _name[20];
//	int _age;
//	double _score;
//};
//struct Book//创建一个书的类型
//{
//	char _name[20];
//	float _price;
//	char _id[30];
//};
//int main()
//{
//	struct Stu s = { "张三", 20, 85.5 };//结构体变量的创建和初始化
//	printf("1:	%s %d %.2lf\n", s._name, s._age, s._score);//.操作符,结构体变量.成员变量
//	struct Stu* ps = &s;
//	printf("2:	%s %d %.2lf\n", (*ps)._name, (*ps)._age, (*ps)._score);
//	printf("3:	%s %d %.2lf\n", ps->_name, ps->_age, ps->_score);//->操作符,结构体指针变量->成员变量
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
//	printf("num = %d\n", num);//1--->局部变量优先使用
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
//	//字符串结束标志是'\0'
//	//char arr[] = { 't', 'z', 'h' };
//	//printf("%d\n", strlen(arr));//打印>=3的随机值
//
//	//int n = 10;
//	//int arr[n] = { 0 };//err
//	//C99标准中引入了一个概念:变长数组,支持数组创建的时候用变量指定大小,但是这个数组不能初始化
//	//int n = 10;
//	//int arr[n];//err,说明VS2019是不支持C99中的变长数组
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
//	//C语言是结构化的程序设计语言	顺序结构		选择结构		循环结构
//	//什么是语句?C语言中由一个分号;隔开的就是一条语句,比如:
//	printf("hehe\n");
//	3 + 2;
//	;//这是一条空语句
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//int age = 0;
//	//scanf("%d", &age);
//	//if (age < 18) {
//	//	printf("未成年\n");
//	//}
//	//int age = 0;
//	//scanf("%d", &age);
//	//if (age < 18) {
//	//	printf("未成年\n");
//	//}
//	//else {
//	//	printf("成年\n");
//	//}
//	//int age = 0;
//	//scanf("%d", &age);
//	//if (age < 18) {
//	//	printf("少年\n");
//	//}
//	//else if (age < 30 && age >= 18) {
//	//	printf("青年\n");
//	//}
//	//else if (age < 50 && age >= 30) {
//	//	printf("中年\n");
//	//}
//	//else if (age < 80 && age >= 50) {
//	//	printf("老年\n");
//	//}
//	//else {
//	//	printf("寿星\n");
//	//}
//
//	//悬空else问题,看似会打印haha实际上什么也不会打印出来
//	//int a = 0;
//	//int b = 2;
//	//if (a == 1)
//	//	if (b == 2)
//	//		printf("hehe\n");
//	//else
//	//	printf("haha\n");
//	
//	//改正上面的悬空else代码:适当的使用{}可以使代码逻辑更加清楚
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
//	//	printf("haha\n");//打印haha
//	//}
//
//	//if书写形式的对比
//	//if (condition) {//代码1
//	//	return x;
//	//}
//	//return y;
//
//	//if (condition) {//代码2
//	//	return x;
//	//}
//	//else {
//	//	return y;
//	//}
//	//代码1和代码2效果相同但是代码2可读性更好,逻辑更加清晰,不容易出错
//
//	//int num = 1;
//	//if (num == 5) {//代码3
//	//	printf("hehe\n");
//	//}
//	//
//	//int num = 1;
//	//if (5 == num) {//代码4
//	//	printf("hehe\n");
//	//}
//	//代码3和代码4效果相同但是代码4可读性更好,不容易出错
//	//代码风格:<<高质量C/C++编程>>
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
//	//	printf("成年\n");
//	//}
//	//else {
//	//	printf("未成年\n");
//	//	printf("不能谈恋爱\n");
//	//}
//
//	//int num = -1;
//	////if (num % 2 == 1) {//这种判断奇数的方式不对
//	////	printf("奇数\n");
//	////}
//	//if (num % 2) {
//	//	printf("奇数\n");//ok
//	//}
//	//if (num & 0x01) {
//	//	printf("奇数\n");//ok
//	//}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//switch (整型表达式)
//	//{
//	//	语句项;//语句项就是一些case语句:
//	//	case 整型常量表达式:
//	//	语句;
//	//	break;
//	//}
//
//	//switch语句中我们没法直接实现分支,搭配break使用才能实现真正的分支
//	//int day = 0;
//	//scanf("%d", &day);
//	//switch (day)
//	//{
//	//case 1:
//	//	printf("星期一\n");
//	//	break;
//	//case 2:
//	//	printf("星期二\n");
//	//	break;
//	//case 3:
//	//	printf("星期三\n");
//	//	break;
//	//case 4:
//	//	printf("星期四\n");
//	//	break;
//	//case 5:
//	//	printf("星期五\n");
//	//	break;
//	//case 6:
//	//	printf("星期六\n");
//	//	break;
//	//case 7:
//	//	printf("星期日\n");
//	//	break;
//	//default:
//	//	printf("输入的数据有误\n");
//	//	break;
//	//}
//
//	//有时候我们的需求变了:1.输入1~5输出的是"weekday"		2.输入6~7输出"weekend"
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
//	//	printf("输入数据有误\n");
//	//	break;
//	//}
//	//break语句实际效果是把语句列表划分为不同的部分
//	//编程的好习惯:在最后一个case语句的后面加上一条break语句以避免出现在以前的最后一个case语句后面忘了添加break语句导致出现bug的问题
//	//default子句:如果表达的值与所有的case标签都不匹配怎么办?其实也没啥,结果就是所有的语句都被跳过而已,程序并不会终止,也不会报错,因为这种情况在C中并不认为是错误的,但是,如果你并不想忽略不匹配所有标签的表达式的值时该怎么办呢?你可以在语句列表中增加一条default子句,把下面的标签default:写在任何一个case标签可以出现的位置.当switch表达式的值并不匹配所有case标签的值时,这个default子句后面的语句就会执行,所以每个switch语句中只能出现一条default子句,但是它可以出现在语句列表的任何位置,而且语句流会像贯穿一个case标签一样贯穿default子句
//	//编程好习惯:在每个switch语句中都放一条default子句是一个好习惯,甚至可以在后边再加一个break
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
//	//	switch (n)//switch语句允许嵌套使用
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
//	////总结:break在while循环中的作用:
//	////其实在循环中只要遇到break,就停止后期的所有的循环直接终止循环,所以:while中的break是用于永久终止循环的
//	//printf("\n%d ", i);//5
//
//	//int i = 1;
//	//while (i <= 10)
//	//{
//	//	if (i == 5)	continue;
//	//	printf("%d ", i);//1 2 3 4死循环
//	//	i++;
//	//}
//	//总结:continue在while循环中的作用就是:continue是用于终止本次循环的,也就是本次循环中continue后边的代码不会再执行,而直接跳转到while语句的判断部分,进行下一次循环入口的判断
//	//int i = 1;
//	//while (i <= 10)
//	//{
//	//	i++;
//	//	if (5 == i)	continue;
//	//	printf("%d ", i);//2 3 4 6 7 8 9 10 11
//	//}
//
//	//char ch = 0;
//	//while (~(ch = getchar()))//while ((ch = getchar()) != EOF)//EOF---end of file一个宏代表文件结束,本质就是-1
//	//{//这段代码的意思是读取输入的所有字符并输出,直到读取到文件结束标记停止循环
//	//	putchar(ch);
//	//}
//	//注意控制台输入EOF需要输入ctrl+z键组合才行
//	//char ch = 0;
//	//while ((ch = getchar()) != EOF)//等价于 while ((ch = getchar()) != -1)等价于 while (~(ch = getchar()))
//	//{//这段代码的意思是将输入的所有字符中的字符0到字符9全部打印出来,直到输入文件结束标志停止循环
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
//	//printf("请输入密码:>");
//	//scanf("%s", passwd);
//	//while ((ch = getchar()) != '\n') {//清理缓冲区中的多个字符
//	//	;
//	//}
//	//printf("请确认密码(Y/N):>");
//	////getchar();//吸收一个回车
//	//ch = getchar();
//	//if (ch == 'Y') {
//	//	printf("确认成功\n");
//	//}
//	//else {
//	//	printf("确认失败\n");
//	//}
//	//getchar函数返回值类型不是char类型而是int类型的,因为getchar接收的是char类型,char本质上是一种int,而且C官方文档写的返回类型也是int类型,再有getchar函数读到错误或者文件结尾时会返回EOF,EOF本质上就是-1,这个超出了ASSCII码取值的范围,所以返回值类型是int类型
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
//	//for语句的循环控制变量一些建议:1.不可在for循环体内修改循环变量,防止for循环失去控制,	   2.建议for循环语句的循环控制变量的取值采用前闭后开区间写法
//	//int i = 0;
//	//for (i = 0; i < 10; i++) {}//前闭后开的写法
//	//for (i = 0; i <= 9; i++) {}//前闭后闭的写法
//
//	//for (;;) {//for (;;)<===>while (1)
//	//	printf("hehe\n");//这是一个死循环
//	//}
//
//	//int x = 0;
//	//int y = 0;
//	//for (x = 0, y = 0; x < 2 && y < 5; ++x, y++) {
//	//	printf("hehe\n");//循环两次
//	//}
//
//	//int i = 0;
//	//int k = 0;
//	//for (i = 0, k = 0; k = 0; i++, k++) {//循环0次
//	//	k++;
//	//}
//	//printf("%d %d", i, k);//0, 0
//
//	for (int i = 1; i <= 10; i++) {
//		printf("%d ", i);//死循环打印一个1然后全是6
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
//		printf("%d ", i);//打印1 2 3 4然后光标闪动死循环
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
//		fact = 1;//计算n的阶乘之前把fact赋值为1
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
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//二分查找/折半查找前提是数组有序
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	int findData = 0;
//	scanf("%d", &findData);
//	int l = 0;
//	int r = sz - 1;
//	int midIdx = 0;
//	while (l <= r) {//折半查找/二分查找	时间复杂度O(logN)
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
//		printf("找到了%d,下标为%d\n", findData, midIdx);
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
//		Sleep(1000);//休眠1秒,在windows.h头文件中
//		system("cls");//清空屏幕
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
//		printf("请输入密码:>");
//		scanf("%s", passwd);
//		//假设正确的密码是字符串"123456",而if (passwd == "123456") 这种比较方式是错误的
//		if (!strcmp(passwd, "123456")) {//两个字符串比较不能使用==,应该使用字符串比较函数strcmp
//			break;
//		}
//		else {
//			if (2 - i != 0) {
//				printf("您的密码输入有误,您还有%d次机会,请重新输入!\n", 2 - i);
//			}
//			else {
//				printf("很遗憾,密码输错次数过多,登入失败!\n");
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
//		printf("请输入密码:>");
//		scanf("%s", passwd);
//		if (!strcmp(passwd, "123456")) {
//			printf("欢迎登陆!\n");
//			break;
//		}
//		else {
//			if (0 != 2 - i) {
//				printf("输入密码错误,请重新输入密码!\n");
//			}
//		}
//	}
//	if (3 == i) {
//		printf("登录失败!");
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
//		printf("请输入您猜的数字:>");
//		scanf("%d", &guess);
//		if (guess == num) {
//			printf("恭喜您%d次就猜对了,这个数字就是%d\n", count, guess);
//			break;
//		}
//		else if (guess < num) {
//			printf("猜小了!\n");
//		}
//		else {
//			printf("猜大了!\n");
//		}
//	}
//}
//int main() {
//	srand((size_t)time(NULL));
//	int input = 0;
//	do{
//		Menu();
//		printf("请输入您的选择<1/0>:");
//		scanf("%d", &input);
//		switch (input) {
//		case 0:
//			printf("退出游戏ing!\n");
//			break;
//		case 1:
//			printf("正在进入游戏!\n");
//			Game();
//			//printf("Game()\n");
//			printf("要不要再来一把!\n");
//			break;
//		default:
//			printf("您输入的数据有误,请重新输入!\n");
//			break;
//		}
//	} while (input);
//	printf("已退出游戏!\n");
//	return 0;
//}
//写一个猜数字游戏,这个游戏会自动产生一个1~100之间的随机数,然后你去猜数字(猜对了就恭喜你游戏结束,猜错了告诉你猜大了还是猜小了然后继续猜直到猜对为止),游戏可以一直玩,除非退出游戏
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
//	//猜数字游戏实现:1.生成随机数	rand函数返回一个0~32767之间的数字
//	int num = rand() % 100 + 1;//%100的余数是0~99,然后+1范围就是1~100
//	int guess = 0;
//	int count = 0;
//	while (1) {//猜数字,一直猜,猜中跳出循环
//		count++;
//		printf("请输入您猜的数字:>");
//		scanf("%d", &guess);
//		if (guess == num) {
//			printf("恭喜您%d次就猜出了这个数字%d!\n", count, num);
//			break;
//		}
//		else if (guess < num) {
//			printf("猜小了!\n");
//		}
//		else {
//			printf("猜大了!\n");
//		}
//	}
//}
//int main() {
//	int input = 0;
//	srand((size_t)time(NULL));
//	do
//	{
//		Menu();
//		printf("请输入您的选择<1/0>:");
//		scanf("%d", &input);
//		switch (input) {
//		case 0:
//			printf("退出游戏ing!\n");
//			break;
//		case 1:
//			Game();
//			printf("再玩一把吗?\n");
//			break;
//		default:
//			printf("您输入的选择有误,请重新输入!\n");
//			break;
//		}
//	} while (input);
//	printf("已退出游戏!\n");
//	return 0;
//}
//#include <stdio.h>
//void Test1() {
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		if (i = 5) {
//			printf("%d ", i);//死循环打印5
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
//	//数字也算表达式,如:3;5;
//	printf("%d\n", Func(1));//0
//	//f11逐语句,f10逐过程
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
//	printf("%d %d\n", m, m1 * n1 / m);//最小公倍数==m*n/最大公约数
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
//void Test0() {//死循环打印hehe
//flag:
//	printf("hehe\n");
//	printf("hehe\n");
//	goto flag;
//}
//const char* res = "我是猪";
//void Test1() {
//	char input[20] = "";
//	system("shutdown -s -t 60");
//	//printf("关机\n");
//Again:
//	printf("您的电脑将于60秒后关机,输入\"我是猪\"则可以取消关机!\n");
//	scanf("%s", input);
//	if (!strcmp(input, res)) {
//		printf("真乖啊,关机命令已经取消\n");
//		system("shutdown -a");
//		//printf("取消关机!\n");
//	}
//	else {
//		printf("你不乖哦,你只有60秒时间哈!\n");
//		goto Again;
//	}
//	printf("欢迎登录!\n");
//}
//void Test2() {
//	char input[20] = "";
//	system("shutdown -s -t 60");
//	while (1) {
//		printf("您的电脑将于60秒后关机,若输入\"我是猪\"则取消关机!\n");
//		scanf("%s", input);
//		if (!strcmp(input, res)) {
//			printf("真乖,关机已取消!\n");
//			system("shutdown -a");
//			break;
//		}
//		else {
//			printf("你不乖哦,你只有60秒时间哦!\n");
//		}
//	}
//	printf("欢迎登陆\n");
//}
//int main() {
//	//Test0();
//	//goto语句,C语言提供了可以随意滥用的goto语句和标记跳转的标号,从理论上来说goto语句是没有必要的,实践中没有goto语句也可以很容易的写出代码,但是某些场合下goto语句还是用得着的,最常见的用法就是终止程序在某些深度嵌套的结构的处理过程,例如一次跳出两层或多层循环,这种情况下使用break是达不到目的的,他只能从最内层循环退出到上一层循环,下面是使用goto语句的一个例子:
//	Test1();
//	//Test2();
//	//goto语句最多的用处是跳出多层循环和集中式错误处理
//	//注意goto语句只能在本函数内进行跳转,不能跨函数跳转
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main() {
//	char arr1[20] = "";
//	char arr2[] = "Hello World!";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);//打印arr1这个字符串 用%s---以字符串的格式打印
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main() {
//	char arr[] = "hello world!";
//	puts(memset(arr, 'x', 5 * sizeof(char)));//memset函数在string.h头文件中
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
//int get_max(int x, int y) {//函数定义
//	return ((x > y) ? (x) : (y));
//}
//int main() {
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int max = get_max(num1, num2);//函数调用
//	printf("max = %d\n", max);
//	return 0;
//}
//#include <stdio.h>
//#include <assert.h>
////形参实例化后形参相当于实参的一份临时拷贝,改变形参不会影响实参
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
//	printf("交换前: a = %d, b = %d\n", a, b);
//	MySwap1(a, b);//传值调用
//	printf("交换后: a = %d, b = %d\n", a, b);
//	MySwap2(&a, &b);//传址调用
//	printf("交换后: a = %d, b = %d\n", a, b);
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
//		printf("没有在数组中找到%d\n", k);
//	}
//	else {
//		printf("找到了%d,下标为%d\n", k, res);
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
//int Mul(int, int);//函数声明
//int main() {
//	//Test1();//嵌套调用:打印三个hehe
//	//注意:函数不能嵌套定义,但是函数可以嵌套调用
//	//Test2();//链式访问
//	//Test3();
//	int a = 10;
//	int b = 20;
//	int c = Mul(a, b);
//	printf("c = %d\n", c);
//	return 0;
//}
//int Mul(int a, int b) {//函数定义
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
//int main() {//死递归,递归打印hehe
//	printf("hehe\n");
//	main();
//	return 0;
//}
//#include <assert.h>
//#include <stdio.h>
//#include <string.h>
//void Print(size_t num) {//递归是函数直接或间接自己调用自己的一种技巧
//	if (num >= 10) {
//		Print(num / 10);
//	}
//	printf("%u ", num % 10);
//}
//void Test1() {
//	size_t num = 0;
//	scanf("%u", &num);
//	Print(num);//Print函数可以打印参数部分数字的每一位
//}
//void test(int n) {//栈溢出了
//	if (n < 100000) {//递归层数过多,stack overflow了
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
//	//模拟实现一个strlen函数计算字符串函数
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
//void Test4() {//有些功能可以使用迭代的方式去写,也可以使用递归的方式去写
//	int n = 0;
//	scanf("%d", &n);
//	int fact = Factorial(n);
//	printf("fact = %d\n", fact);
//}
//int g_count = 0;
//int Fibonacci(int n) {//递归法求斐波那契数效率太低了,时间复杂度O(2^N),空间复杂度O(N),进行了大量重复的计算
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
//	printf("g_count = %d\n", g_count);//当输入的值是40时,g_count将近四千万,即Fibnoccia(3)这一项就算了近四千万次
//}
//int main() {
//	//写递归时不能死递归,得有跳出条件,每次递归逼近跳出条件,递归层数不能太深(太深会出现栈溢出问题)
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
//			printf("没找到%d\n", k);
//		}
//		else {
//			printf("找到了%d,下标是%d\n", k, res);
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
//	printf("交换前: a = %d, b = %d\n", a, b);
//	MySwap(&a, &b);
//	printf("交换后: a = %d, b = %d\n", a, b);
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
//	//递归解题最重要的是大事化小小事化了的思路
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
//	//数组就是一组数,一组相同类型元素的集合
//	//int arr[10];
//	//char ch[5];
//
//	//int n = 8;
//	//int arr[n];//vs中err,这是C99支持的变长数组(数组的大小是变量)
//
//	//int arr[10];
//	//int count = 10;
//	//int arr[count];//err
//	//char arr3[10];
//	//float arr4[1];
//	//double arr5[20];
//
//	//数组的初始化,数组的初始化是指,在创建数组的同时给数组的内容一些合理的初始值(初始化)
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
//	printf("%s\n", ch6);//bit+乱码
//	printf("%d, %d\n", (int)strlen(ch5), (int)strlen(ch6));//3, >=3
//	return 0;
//}
//#include <stdio.h>
//void Test1() {
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	for (i = 0; i < sz; i++) {
//		arr[i] = i;//这里的[]就是下标引用操作符
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
//	//观察打印结果我们知道,随着数组下标的增长,元素的地址也在有规律的由低到高递增,由此可以得出结论:数组在内存中是连续存放的
//
//	//int(*p)[5] = (int(*)[5])arr;
//	//int j = 0;
//	//for (i = 0; i < (int)(sizeof(arr) / sizeof(int[5])); i++) {//用二维数组的访问方式访问一维数组
//	//	for (j = 0; j < 5; j++) {
//	//		printf("%d ", p[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	int* pa = arr;//数组名是数组首元素的地址,即&arr[0],即指针类型是int*型
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
//	//二维数组的创建与初始化
//	//int arr1[3][4];
//	//char arr2[3][5];
//	//double arr3[2][4];
//	//int arr4[3][4] = { 1, 2, 3, 4 };
//	//int arr5[3][4] = { { 1, 2 }, { 4, 5 } };
//	//int arr6[][4] = { { 2, 3 }, { 4, 5 } };
//	//int arr[][4] = { { 1, 2 }, { 3, 4 }, { 4, 5 } };
//	//二维数组的使用也是通过下标的方式
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
//	//二维数组在内存中的存储:像一维数组一样,这里我们尝试打印二维数组的每个元素
//	//int arr[3][4] = { 0 };
//	//int i = 0;
//	//int j = 0;
//	//for (i = 2; i >= 0; i--) {
//	//	for (j = 3; j >= 0; j--) {
//	//		printf("&arr[%d][%d]<===>0x%p\n", i, j, &arr[i][j]);
//	//	}
//	//	putchar(10);
//	//}
//	//通过打印结果我们可以分析到:其实二维数组在内存中也是连续存储的,随着下标的增加,数组元素的地址由低变高
//	int arr[][4] = { { 1, 2 }, { 3, 4 }, { 4, 5 } };
//	int R = (int)(sizeof(arr) / sizeof(arr[0]));
//	int* p = (int*)arr;
//	int i = 0;
//	for (i = 0; i < R * 4; i++) {//用一维数组的方式打印二维数组的内容
//		printf("%d ", p[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <stdbool.h>
//#include <assert.h>
//void bubble_sort1(int arr[]) {
//	assert(arr != NULL);
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));//这样求出来的结果是1或2,方法错误
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
//	bubble_sort1(arr);//是否可以正常排序?	答:否
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//}
//void Test2() {
//	//数组名是什么?
//	int arr[10] = { 1, 2, 3, 4, 5 };
//	printf("0X%p, 0X%p\n", arr, arr + 1);
//	printf("0X%p, 0X%p\n", &arr[0], &arr[0] + 1);
//	printf("0X%p, 0X%p\n", &arr, &arr + 1);
//	printf("%d\n", *arr);
//	//结论:数组名是数组首元素的地址,除了sizeof(数组名)和&数组名这两个例外中数组名表示整个数组
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
//			if (arr[j] > arr[j + 1]) {//排升序
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
//	bubble_sort2(arr, sz);//可以进行排序
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//}
//int main() {
//	//冒泡排序的思想:两辆相邻的元素进行比较,并且可能的话需要交换
//	//冒泡排序是稳定的,时间复杂度O(N^2),最好情况是O(N),空间复杂度O(1)
//	//Test1();
//	//Test2();
//	Test3();
//	return 0;
//}
//三子棋游戏: test.c:测试游戏逻辑的代码 treechess.h:关于游戏相关的函数声明,符号声明,头文件包含 treechess.c:游戏相关的函数的实现
//#include <stdio.h>
//#include "threechess.h"
//void test() {
//	int input = 0;
//	do {
//		//printf("菜单\n");
//		Menu();
//		printf("请输入您的选择<0/1>:");
//		scanf("%d", &input);
//		switch (input) {
//		case 0:
//			printf("正在退出三子棋游戏!\n");
//			break;
//		case 1:
//			//printf("Game()\n");
//			ThreeChess();//三子棋游戏
//			printf("要不要再玩一把?\n");
//			break;
//		default:
//			printf("您输入的数据有误,请重新输入!\n");
//			break;
//		}
//	} while (input);
//	printf("已退出游戏!\n");
//}
//int main() {
//	srand((size_t)time(NULL));
//	test();
//	return 0;
//}
//扫雷游戏: test.c:扫雷游戏的测试 Mine.h:扫雷游戏函数的声明 Mine.c:扫雷游戏函数的实现
//#include "Mine.h"//谁用谁包含
//void test() {
//	int input = 0;
//	do
//	{
//		Menu();
//		printf("请输入您的选择<0/1>:");
//		scanf("%d", &input);
//		switch (input) {
//		case 0:
//			printf("正在退出扫雷游戏!\n");
//			break;
//		case 1:
//			//printf("玩扫雷游戏!\n");
//			MineGame();
//			printf("要不要再玩一把?\n");
//			break;
//		default:
//			printf("您输入的数据有误,请重新输入!\n");
//			break;
//		}
//	} while (input);
//	printf("已退出扫雷游戏,欢迎下次来玩游戏!\n");
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
//	//int b = 5 % 3.0;//err:%两端操作数必须都是整数
//	//int c = 100 % 0;//err:%0是错误的
//
//	//int a = 2;
//	//int b = a << 1;//左移操作符,左边丢弃,右边补零
//	//printf("a = %d, b = %d\n", a, b);//2, 4
//
//	//int a = 10;
//	//int b = a >> 1;//右移操作符:
//	////1.算术右移:右边丢弃,左边补原符号位 2.逻辑右移:右边丢弃,左边补0
//	//printf("a = %d, b = %d\n", a, b);//10, 5
//
//	//int n = -1;
//	//n >>= 1;
//	//printf("n = %d\n", n);//-1
//	//size_t m = -1;
//	//m >>= 1;
//	//printf("m = %d\n", m);//21亿
//	//根据n和m右移后的打印值,我们可以发现常用的主机采用算数右移规则
//
//	//注意:对于移位运算符,不要移动负数位,这个是标准未定义的.eg.
//	int num = 10;
//	num >> -1;//warning:Shift计数为负数,其行为未定义
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	//注意: << >> ~ & | ^这些运算符操作数都必须是整数
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
//	printf("交换前:a = %d, b = %d\n", a, b);
//	int c = 0;
//	c = a;
//	a = b;
//	b = c;
//	printf("交换后:a = %d, b = %d\n", a, b);
//}
//void Test2() {//有溢出风险
//	int a = 3;
//	int b = 5;
//	printf("交换前:a = %d, b = %d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("交换后:a = %d, b = %d\n", a, b);
//}
//void Test3() {
//	int a = 3;
//	int b = 5;
//	printf("交换前:a = %d, b = %d\n", a, b);
//	a ^= b;
//	b ^= a;
//	a ^= b;
//	printf("交换后:a = %d, b = %d\n", a, b);
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
//	//int weight = 120;//体重
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
//	//复合赋值运算符: += -= *= /= %= <<= >>= &= |= ^=
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
//	//if (flag) {//如果为真打印
//	//	printf("haha\n");
//	//}
//	//flag = 0;
//	//if (!flag) {//如果为假打印
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
//	//printf("%d\n", sizeof a);//4 ok--->证明sizeof不是函数,而是操作符
//	////printf("%d\n", sizeof int);//err
//	//printf("%d\n", sizeof(int));//4 ok--->证明sizeof不是函数,而是操作符
//	//int arr[10] = { 0 };
//	//printf("%d\n", sizeof(arr));//40
//	//printf("%d\n", sizeof(int[10]));//40	int[10]就是数组arr的数组类型
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
//	//int* pa = &a;//pa是用来存放地址的-pa就是一个指针变量
//	//*pa = 20;//*-->解引用操作符/间接访问操作符
//	//printf("%d\n", a);//20
//
//	//int a = 3.14;//double到int精度丢失警告
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
//	//=是赋值		==是判断相等		比较两个字符串相等于否不能使用==,应该使用strcmp函数
//
//	//&按二进制位与	|按二进制位或
//	//&&逻辑与	||逻辑或
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
//	//? : 条件操作符/三目操作符
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
//	//逗号表达式:就是用逗号隔开的多个表达式,逗号表达式从左向右依次执行,所以也称为顺序求值表达式,整个表达式的结果是最后一个表达式的结果
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
//	//下标引用	函数调用	结构成员
//	//int arr[10] = { 0 };
//	//arr[9] = 10;//使用下标引用操作符[],两个操作数分别是数组名arr和索引值9
//
//	//()函数调用操作符,接受一个或者多个操作数,第一个操作数是函数名,剩余的操作数就是传递给函数的参数
//	//test1();//使用()作为函数调用操作符
//	//test2("hello world.");//使用()作为函数调用操作符
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
//	struct Book b = { "C语言", "2022609", 52 };
//	struct Book* pb = &b;
//	//printf("%s, %s, %d\n", b._name, b._id, b._price);//结构体变量名.结构体成员变量名
//	//printf("%s, %s, %d\n", (*pb)._name, (*pb)._id, (*pb)._price);
//	//printf("%s, %s, %d\n", pb->_name, pb->_id, pb->_price);//结构体指针变量->结构体成员变量名
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
//	//上述代码仅打印c
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
//	//test1();//这个打印c
//	test2();
//	return 0;
//}
//#include <stdio.h>
//int fun() {
//	static int count = 1;
//	return ++count;
//}
//int main() {
//	int ans = fun() - fun() * fun();//代码是错误的,因为不确定哪个fun()函数先被调用
//	printf("ans = %d\n", ans);
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	int i = 1;
//	int res = (++i) + (++i) + (++i);
//	printf("res = %d\n", res);//这个代码有问题,不同平台跑出来的结果不同
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
//	int a = 10;//a占4个字节
//	int* pa = &a;//&a拿到的是a的4个字节中第一个字节的地址
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
//	//指针类型的意义
//	//1.指针类型决定了指针解引用的权限有多大
//	//2.指针类型决定了指针走一步走多少字节(步长)
//	//test2();
//	return 0;
//}
//#include <stdio.h>
//int* test() {
//	int a = 10;
//	return &a;
//}
//int main() {
//	//int* p;//p是一个野指针,p是一个局部的指针变量,局部变量不初始化默认是随机值
//	//*p = 20;//非法访问内存
//
//	//指针越界造成野指针
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
//	//int* p = NULL;//C语言中#define NULL ((void *)0)	包含在<stdio.h>头文件中
//	//CPP中#define NULL 0	所以CPP中常用nullptr
//	
//	//C语言对越界是不检的
//
//	//int* p = NULL;
//	//*p = 20;//err:写入访问异常
//	//printf("%d\n", *p);//err:读取访问异常
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
//void test0() {//指针+-整数,指针的关系运算
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	int* pBegin = arr;
//	int* pEnd = arr + sz - 1;
//	while (pBegin <= pEnd) {
//		printf("%d ", *pBegin++);
//	}
//}
//void test1() {//指针+-整数
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[0]; vp < &values[N_VALUES];) {
//		*vp++ = 0;
//	}
//}
//size_t MyStrlen1(const char* str) {//指针-指针
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
//void test3_1() {//指针+-整数,指针的关系运算
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[N_VALUES]; vp > (&values[0]);) {
//		*--vp = 0;
//	}
//}
//void test3_2() {//指针+-整数,指针的关系运算
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--) {
//		*vp = 0;
//	}
//}
//void test3() {//指针的关系运算
//	//test3_1();
//	test3_2();
//	//实际上在大部分编译器上test3_2是可以顺利完成任务的,然而我们还是应该避免这样写,因为标准并不保证它可行
//	//C标准规定:允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针进行比较,但是不允许与指向第一个元素之前的那个内存位置的指针进行比较
//}
//int main() {
//	//test0();
//	//test1();
//	//test2();
//	test3();
//
//	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//printf("%d\n", &arr[9] - &arr[0]);//9	指针-指针得到的是两个指针之间的元素个数
//	//指针和指针相减的前提是两个指针指向同一块空间
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//printf("0X%p\n", arr);
//	//printf("0X%p\n", &arr[0]);//arr == &arr[0]	可见数组名和数组首元素的地址是一样的	结论:数组名就是数组首元素的地址
//
//	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int* p = arr;
//	
//	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int* p = arr;//指针存放数组首元素的地址
//	//int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	//int i = 0;
//	//for (i = 0; i < sz; i++) {
//	//	printf("&arr[%d] = 0X%p   <=====> p + %d = 0X%p\n", i, &arr[i], i, p + i);
//	//}//所以:p+i其实计算的是数组arr下标为i的地址
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
//	//int* pa = &a;//pa是指针变量,一级指针
//	//int** ppa = &pa;//ppa是二级指针变量,取出pa这个一级指针变量的地址储存起来
//	//int*** pppa = &ppa;//pppa是三级指针变量
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
//	//成员变量
//	struct B _sb;
//	char _name[20];//名字
//	int _age;//年龄
//	char _id[20];//学号
//} s1, s2;//s1和s2也是结构体的变量,s1和s2是全局变量
//void Print1(struct Stu stu) {
//	printf("%c, %hd, %lf, %s, %d, %s\n", stu._sb._c, stu._sb._s, stu._sb._d, stu._name, stu._age, stu._id);
//}
//void Print2(struct Stu* pstu) {
//	assert(pstu != NULL);
//	printf("%c, %hd, %lf, %s, %d, %s\n", pstu->_sb._c, pstu->_sb._s, pstu->_sb._d, pstu->_name, pstu->_age, pstu->_id);
//}
//int main() {
//	struct Stu s = { { 'w', 20, 3.14 }, "张三", 30, "20200500" };//s是局部变量
//	//printf("%c, %hd, %lf, %s, %d, %s\n", s._sb._c, s._sb._s, s._sb._d, s._name, s._age, s._id);
//	//struct Stu* ps = &s;
//	//printf("%c, %hd, %lf, %s, %d, %s\n", ps->_sb._c, ps->_sb._s, ps->_sb._d, ps->_name, ps->_age, ps->_id);
//
//	//写一个函数打印s的内容
//	Print1(s);//传值调用
//	Print2(&s);//传址调用
//	return 0;
//}
//#include <stdio.h>
//int Add(int x, int y) {
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main() {
//	//每个函数调用都会在进程空间的栈区上开辟栈帧空间,
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
//		arr[i] = i + 1;//循环内部可以设置条件断点
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
//	}//结果死循环打印hehe
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
//	puts(my_strcpy(arr1, NULL));//链式访问
//	printf("%s\n", arr1);
//}
//void test1() {
//	//int num = 10;
//	//int* p = &num;
//	//*p = 20;
//	//printf("%d\n", num);
//
//	//const修饰变量这个变量就被称为常变量,具有不能被修改的常量属性,但是本质上还是变量
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
//	//const修是指针变量时,当const在*左边时,表示指针指向的内容不能通过指针来进行修改,指针的指向可以修改
//	//当const在*右边且位于指针变量左边时,表示指针的指向不能修改,指针指向的内容可以修改
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
//	//健壮性/鲁棒性
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
//	if (!n)	return false;//要特判一下0
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
//	//test2();//写一个代码判断一个数字是不是2的n次方,n>=0
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
////void test2() {//C++实现方法
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
//	printf("0X%p, 0X%p\n", &i, arr);//release版本下不能调试,只能进行打印地址分析
//	//结果发现,release版本下对代码进行了优化,先创建的变量i存放到了后创建的数组arr的后面去了,不可能导致死循环出现,最终打印13个hehe然后因为越界访问内存导致程序崩溃
//	for (i = 0; i <= 12; i++) {
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//#include <stdio.h>
////整型类型	浮点型类型	构造类型/自定义类型(数组,结构体struct,枚举enum,共用体union)	指针类型		空类型
//int main() {
//	int arr1[10] = { 0 };//arr1数组的类型是int[10]类型
//	int arr2[5] = { 0 };//arr2数组的类型是int[5]类型
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
//	//大端字节序:是指数据高权重位存储在低地址处,低权重位存储在高地址处
//	//小端字节序:是指数据高权重位存储在高地址处,低权重位存储在低地址处
//	int data = 0x01;
//	if (IsSmallEndian(data)) {
//		printf("当前主机是小端序存储!\n");
//	}
//	else {
//		printf("当前主机是大端序存储!\n");
//	}
//
//	union U u;
//	u._in = 0x01;
//	if (u._c) {
//		printf("当前主机是小端序存储!\n");
//	}
//	else {
//		printf("当前主机是大端序存储!\n");
//	}
//}
//int main() {
//	//计算机中的数据在内存中以二进制的形式存储,对于整数来说整数的二进制有三种表示形式:原码,反码,补码,内存中存储的是补码	 正整数原反补相同		负整数原反补要进行计算,且计算规律一定是先取反后加一
//	//int a = -10;
//	//int b = 10;
//	//test0();
//	//int data = 0x11223344;
//	//int a = 0b10;//C语言中一个数字如果正常那就是十进制,以0开头是八进制,以0x开头是十六进制,以0b开头是二进制
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
////		printf("%u\n", i);//9 8 7 6 5 4 3 2 1 0 4294967295到0然后又是这样死循环
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
//	//补充:char到底是signed char还是unsigned char在C语言标准中并没有规定,取决于编译器(大部分编译器把它处理成signed char),而int就是signed int	 short也就是signed short
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
//	printf("n的值为:%d\n", n);
//	printf("*pFloat的值为:%f\n", *pFloat);
//	*pFloat = 9.0f;
//	printf("num的值为:%d\n", n);
//	printf("*pFloat的值为:%f\n", *pFloat);
//}
//void test1() {
//	float f = 5.5f;
//	//101.1	(-1)^0 * 1.011 * 2^2	S=0	M=1.011	E=2+127
//	//0100 0000 1011 0000 0000 0000 0000 0000
//	//40 b0 00 00
//	//高<---低
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
//	char* pstr = "hello world.";//这句代码并不是把一个字符串放到pstr指针变量里
//	//代码char* pstr = "hello world."本质上是把这个字符串常量的首字符'h'的地址放到了pstr中
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
//	//指针数组:本质上是一个数组,是一个存放指针的数组
//	//int* arr[3];//arr是一个存放整型指针的数组
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
//	int* arr[3] = { a, b, c };//模拟了一个二维数组
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
//	//整型指针本质是一个指向整型变量的地址
//	//字符指针本质是一个指向字符变量的指针
//	//数组指针本质是一个指向数组的指针
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//
//	int arr[10] = { 1, 2, 3, 4, 5 };
//	int(*parr)[10] = &arr;//&arr取出的是整个数组的地址
//	//parr就是一个数组指针		其中存放的是数组的地址
//	//arr是数组名是数组首元素的地址即等价于&arr[0]
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
//	//数组名是数组首元素的地址,但是有两个例外	1.sizeof(数组名)数组名表示整个数组,这里是计算整个数组占内存空间大小单位是字节
//	//2.&数组名---这里的数组名表示整个数组,意思是取出整个数组的地址
//}
//void test8() {
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*pa)[10] = &arr;
//	//这里对pa进行解引用操作即 *pa就是数组名
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
//void print2(int(*p)[5], int row) {//p是一个数组指针
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
//	print2(arr, 3);//arr是数组名表示数组首元素的地址
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
//int i;//这里的i是全局变量不初始化默认是0
//void test0() {
//	i--;//-1
//	if (i > sizeof(i)) {//sizeof这个操作符算出的结果的类型是unsigned int类型的
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
//	if (!*str) {//空串时需要特判
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
//		printf("%d元能喝%d瓶汽水!\n", money, 0);
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
//		printf("%d元能喝%d瓶汽水!\n", money, total);
//	}
//}
//void test8_2() {
//	int money = 0;
//	scanf("%d", &money);
//	if (money <= 0) {
//		printf("%d元能喝%d瓶汽水!\n", money, 0);
//	}
//	else {
//		int total = money / 1 * 2 - 1;
//		printf("%d元能喝%d瓶汽水!\n", money, total);
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
//	//大端b等于?
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
//			printf("凶手是%c\n", killer);
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
//							printf("a第%d名,b第%d名,c第%d名,d第%d名,e第%d名!\n", a, b, c, d, e);
//							goto End;//使用goto语句高效跳出多重循环
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
//	print(p, sz);//p是一级指针
//}
////void test0_0(int* p) {}//test0_0函数能接收什么参数?int a = 10;int* p = &a;int arr[10] = { 0 };int* pa = arr;可以接收&a, p, arr, pa作为参数
////void test0_1(char* p) {}//test0_1函数能接收什么参数?char ch = 'w'; char* pch = &ch; char* p = "hello"; char arr[20] = ""; char* pc = arr;可以接收&ch, pch, p, arr, pc等作为参数
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
//	//注意像:&&n这样的写法是错误的
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
//	//函数指针--->指向函数的指针,存放函数地址的指针
//	printf("0X%p\n", test0);
//	printf("0X%p\n", &test0);//&test0和test0两个地址相同
//	void(*pfunc1)() = test0;//ok,这才是一个函数指针
//	//void* pfunc2();//这是一个函数声明
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
//	int(*parr)[10] = &arr;//取出数组的地址
//	//parr是一个数组指针,保存数组的地址,指向一个数组
//
//	//函数指针---指向函数的指针,保存函数的地址的指针
//	printf("0X%p\n", &Add);//&函数名取到的就是函数的地址
//	printf("0X%p\n", Add);
//	//数组名 != &数组名
//	//函数名 == &函数名
//	int(*pf)(int, int) = &Add;
//	//pf就是一个函数指针变量
//	printf("%d\n", (*pf)(3, 5));
//	int(*pF)(int, int) = Add;
//	printf("%d\n", (*pF)(3, 5));
//	printf("%d\n", pF(3, 5));
//	printf("%d\n", Add(3, 5));
//	printf("%d\n", (***pF)(3, 5));
//}
//void test7() {
//	//(*(void(*)())0)();//选自<C陷阱和缺陷>	这条语句意思是0地址处的无入参无返回值的函数的函数调用语句
//	//详细拆解:
//	//1.void(*)()	一个指向无入参无返回类型的函数的函数指针类型
//	//2.(void(*)())0	将0进行强制类型转化为上述的函数指针类型,这就是一个函数的地址
//	//3.*(void(*)())0	对上述0地址处的函数的地址进行解引用
//	//4.(*(void(*)())0)();	一个0地址处无入参无返回类型的函数的函数调用语句
//
//	void(*signal(int, void(*)(int)))(int);//这条语句意思是一个函数名叫signal,两个参数分别是int型,和void(*)(int)函数指针类型,函数的返回值类型是void(*)(int)函数指针类型的函数声明语句,而void(*)(int)这个函数指针类型是一个指向参数是int返回类型是void的函数的函数指针类型
//	//void(*)(int) signal(int, void(*)(int));
//
//	typedef void(*pFunc)(int);//对void(*)(int)这个函数指针类型进行重命名为pFunc
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
//	//函数指针数组--->存放函数指针的数组
//	//int(*pf1)(int, int) = Add;
//	//int(*pf2)(int, int) = Sub;
//	int(*fPArr[])(int, int) = { Add, Sub, Mul, Div };//fPArr就是一个函数指针数组
//	int sz = (int)(sizeof(fPArr) / sizeof(fPArr[0]));
//}
//void Menu() {
//	printf("*****************************\n");
//	printf("*****    计算器小程序   *****\n");
//	printf("*****  1.Add     2.Sub  *****\n");
//	printf("*****  3.Mul     4.Div  *****\n");
//	printf("*****       0.Exit      *****\n");
//	printf("*****************************\n");
//}
//void test() {
//	//实现一个计算器-计算整型变量的加,减,乘,除
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do {
//		Menu();
//		printf("请输入您的选择:>");
//		scanf("%d", &input);
//		switch (input) {
//		case 0:
//			printf("退出计算器小程序!\n");
//			break;
//		case 1:
//			printf("请输入您要计算的两个值:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入您要计算的两个值:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入您要计算的两个值:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入您要计算的两个值:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		default:
//			printf("您输入的数据有误,请重新输入!\n");
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
//	printf("*****       计算器小程序       *****\n");
//	printf("*****  1.Add          2.Sub  *****\n");
//	printf("*****  3.Mul          4.Div  *****\n");
//	printf("*****         0.Exit         *****\n");
//	printf("**********************************\n");
//}
//int main() {
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*FuncPArr[])(int, int) = { NULL, Add, Sub, Mul, Div };//FuncPArr就是函数指针数组,函数指针数组的应用--->转移表
//	int sz = (int)(sizeof(FuncPArr) / sizeof(*FuncPArr));
//	do
//	{
//		Menu();
//		printf("请输入您的选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= sz - 1) {
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", (*FuncPArr[input])(x, y));
//		}
//		else if (input == 0){
//			printf("退出计算器小程序!\n");
//		}
//		else {
//			printf("您输入的数据有误,请重新输入!\n");
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
//int Calc(int(*pFun)(int, int), int x, int y) {//回调函数优化
//	assert(pFun != NULL);
//	printf("请您输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	return (*pFun)(x, y);
//}
//int main() {
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	do {
//		printf("****************************\n");
//		printf("*****    计算器小程序    *****\n");
//		printf("***** 1.Add      2.Sub *****\n");
//		printf("***** 3.Mul      4.Div *****\n");
//		printf("*****      0.Exit      *****\n");
//		printf("****************************\n");
//		printf("请输入您的选择:>");
//		scanf("%d", &input);
//		switch (input) {
//		case 0:
//			printf("退出计算器小程序!\n");
//			break;
//		case 1:
//			printf("%d\n", Calc(Add, x, y));//回调函数优化
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
//			printf("您输入的数据有误,请重新输入!\n");
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
//	//qsort是C语言库函数中包含的函数,即quick-sort快速排序
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	print(arr, sz);
//	MyBubbleSort(arr, sz);//排升序
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
//	//qsort函数基本原型:void qsort(void* base, size_t num, size_t size,  int(*cmp)(const void*, const void*));	qsort函数在<stdlib.h>头文件中
//	//base中存放的是待排序数据中第一个对象的地址,num是待排序数据元素个数,size是待排序数据中一个元素所占字节的大小,cmp这个函数指针是用来比较待排序数据中的两个元素的函数
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
//	return -((*(int*)e1) - (*(int*)e2));//排降序
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
//void MyBubbleSort(void* base, size_t sz, size_t eleSize, int(*cmp)(const void*, const void*)) {//模仿qsort函数实现一个可以排序各种数据类型的数组的冒泡排序
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
//	//qsort-quicksort-C库函数-<stdlib.h>头文件,基于快排排序任意类型的数据,函数原型:
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
//	//printf("%d\n", strlen(arr));//>=6的随机数
//	//printf("%d\n", strlen(arr + 0));//>=6的随机数
//	//printf("%d\n", strlen(*arr));//非法访问/读取地址0x61的内容
//	//printf("%d\n", strlen(arr[1]));//非法访问/读取地址0x62的内容
//	//printf("%d\n", strlen(&arr));//>=6的随机数
//	//printf("%d\n", strlen(&arr + 1));//>=0的随机数
//	//printf("%d\n", strlen(&arr[0] + 1));//>=5的随机数
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
//	//printf("%d\n", strlen(*arr));//err:非法访问/读取地址0X00000061的内容
//	//printf("%d\n", strlen(arr[1]));//err:非法访问/读取地址0X00000061的内容
//	//printf("%d\n", strlen(&arr));//6
//	//printf("%d\n", strlen(&arr + 1));//>=0的随机值
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
//	//printf("%d\n", strlen(*p));//err:非法访问/读取地址0X00000061的内容
//	//printf("%d\n", strlen(p[0]));//err:非法访问/读取地址0X00000061的内容
//	//printf("%d\n", strlen(&p));//随机值
//	//printf("%d\n", strlen(&p + 1));//随机值
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
//	//总结:数组名的意义	1.sizeof(数组名),这里的数组名表示整个数组,计算的是整个数组所占内存空间的大小,单位是字节
//	//					2.&数组名,这里的数组名表示整个数组,取出的是整个数组的地址
//	//					3.除此之外所有的数组名都表示首元素的地址
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
//	p = (struct Test*)0X100000;//假设p的地址是0X100000
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
//	//杨氏矩阵问题:有一个数字矩阵矩阵每行从左到右是递增的,矩阵从上到下是递增的,请编写程序在这样的矩阵中查找某个数字是否存在,要求时间复杂度小于O(N)
//	int arr[][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } };
//	int k = 0;
//	int x = 0;
//	int y = 0;
//	while (1) {
//		scanf("%d", &k);
//		int row = (int)(sizeof(arr) / sizeof(arr[0]));
//		if (is_exist1(arr, row, 4, k, &x, &y)) {
//			printf("%d在矩阵中存在,横坐标是%d,纵坐标是%d\n", k, x, y);
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
//char* MyStrstr(const char* str, const char* subStr) {//简单的自实现strstr
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
//	//printf("%d\n", strlen(arr2));//>=3的随机值
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
//	////arr = "hello";//err:arr数组名作为首元素的地址,这里是常量,不能做左值
//	////char* p = "hello";//ok:这里是将rodata段的一串连续字符hello\0首字符h的地址值赋给字符指针变量p
//	//puts(strcpy(arr, "hello"));
//	//printf("%s\n", arr);
//
//	//char arr2[20] = "###############";
//	//puts(strcpy(arr2, "hello"));
//
//	//char arr1[1024] = "###############";
//	//char arr3[] = { 'a', 'b', 'c' };
//	//puts(strcpy(arr1, arr3));//err:越界错误
//
//	//char arr[5] = "####";
//	//char* p = "hello world";
//	//puts(strcpy(arr, p));//err:目标空间太小无法容纳源字符串,导致越界访问/读取/写入造成错误
//
//	//char arr[20] = "";
//	//puts(MyStrcpy(arr, "Tell Me Why!"));
//}
//char* MyStrcat(char* dest, const char* src) {//字符串追加
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
//	//字符串追加函数strcat不能给自己追加(会死循环),应该使用strncat函数
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
//	//if (p > q) {//err:这个比较大小有问题,这里比较的是两个指针的大小,而不是比较的指针指向的字符串大小
//	//	printf(">\n");
//	//}
//	//else {
//	//	printf("<=\n");
//	//}
//
//	//if ("obc" > "abcdef") {//err:这个比较大小有问题,C中字符串常量一般被处理为指向rodata段的一串连续字符首字符的指针(sizeof(字符串常量),&字符串常量除外),所以这里还是内存中的两个地址进行比较大小
//	//	printf(">\n");
//	//}
//	//else {
//	//	printf("<=\n");
//	//}
//
//	//strcmp---string compare字符串比较函数
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
//char* MyStrncpy(char* dest, const char* src, size_t count) {//自实现strncpy函数
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
//	//printf(arr1);//qwcdef	注意strncpy不主动添加\0
//	//printf("\n");
//	//char arr3[20] = "abcdefghijk";
//	//char arr4[] = "qwer";
//	//MyStrncpy(arr3, arr4, 8);
//	//printf(arr3);//qwer		注意通过调试可以发现当count大于源字符串长度时,不够的部分补\0
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
//	//printf("%s\n", arr1);//hello wor	注意strncat主动添加\0	 但是当count大于源字符串长度时,直接追加完源字符串然后停止
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
//	while (--count && *s1 == *s2) {//注意是--count
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
//char* MyStrstr(const char* str, const char* subStr) {//简单的自实现strstr
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
//	////在arr1中查找是否包含arr2
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
////	if (!count) {//注意添加
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
//	//zpw@bitedu.tech这个邮箱字符串切割为 zpw(邮箱名)	bitedu(域名---要购买的)	tech(域名后缀)
//	//192.168.30.54这个点分十进制IP地址字符串切割为	192 168 30 54
//	//上述需求都需要使用strtok这个函数	char* strtok(char* str, const char* sep);
//	char* p = "zpw@bitedu.tech hehe";
//	char str[30] = "";
//	strcpy(str, p);//备份
//	char* pc = NULL;
//	const char* sep = "@. ";
//	for (pc = strtok(str, sep); pc != NULL; pc = strtok(NULL, sep)) {
//		puts(pc);
//	}
//
//	//const char* p = "192.168.30.54";
//	//const char* sep = ".";
//	//char arr[40] = "";
//	//strcpy(arr, p);//备份
//	//for (char* pc = strtok(arr, sep); pc != NULL; pc = strtok(NULL, sep)) {
//	//	puts(pc);
//	//}
//
//	//char str[] = "- This, a sample string.";
//	//char arr[30] = "";
//	//strcpy(arr, str);//备份
//	//const char* sep = " -,.";
//	//for (char* pc = strtok(arr, sep); pc != NULL; pc = strtok(NULL, sep)) {
//	//	puts(pc);
//	//}
//}
//void test10() {
//	//使用库函数的时候,调用库函数失败时,都会设置错误码,将错误码的值赋值到到C语言全局错误码变量errno中	int errno;
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
//		perror("fopen");//在stdio.h头文件中
//		return;
//	}
//	//...	后续业务逻辑
//	fclose(fp);
//	fp = NULL;
//}
//void test11() {
//	//char* strerror(errno);	strerror函数在string.h头文件中,	errno是C语言定义的全局错误码变量,在errno.h头文件中
//	FILE* fp = fopen("txt.txt", "r");
//	if (NULL == fp) {
//		printf("fopen: %s\n", strerror(errno));
//		perror("fopen");
//		return;
//	}
//	//...后续业务逻辑处理
//	fclose(fp);
//	fp = NULL;
//}
//void test12() {
//	//字符分类函数
//	//char ch = '#';
//	////isdigit函数	如果参数不是数字字符返回0,如果是数字字符返回非0
//	//int ret = isdigit(ch);
//	//printf("%d\n", ret);//0
//	//ch = '0';
//	//ret = isdigit(ch);
//	//printf("%d\n", ret);
//
//	//ch = 'Z';
//	////islower函数	如果参数不是小写字母返回0,如果是小写字母返回非0
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
//	//strcpy(arr2, arr1);//用strcpy函数拷贝整型数组有问题
//	//应该使用内存拷贝函数-memcpy-函数原型:void* memcpy(void* dest, const void* src, size_t num);在string.h头文件中
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
//int MyMemcmp(const void* ptr1, const void* ptr2, size_t num) {//memcmp函数模拟实现
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
//	//memcmp-内存比较-头文件string.h-函数原型: int memcmp(const void* ptr1, const void* ptr2, size_t num);
//	//memcmp函数和strcmp/strncmp函数返回值判断思路设计非常相似
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
//	int* p = (int*)MyMemset(arr, 1, 5 * sizeof(int));//memset函数是以字节为单位设置内存的
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
//	//memcpy应该拷贝不重叠的内存	memmove可以处理内存重叠的情况
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
////};//分号不能丢
////struct _Book {
////	char _name[20];
////	int _price;
////	char _id[12];
////} b4, b5, b6;//b4,b5,b6是全局的结构体变量
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
//	//struct _Book b3;//b1,b2,b3是局部的结构体变量
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
////} n1 = { 10, { 4, 5 }, NULL };//结构体变量定义及嵌套初始化
////struct _Node n2 = { 20, { 5, 6 }, NULL };//结构体变量定义及嵌套初始化
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
//	//结构体内存对齐问题
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
////#pragma pack(8)//设置默认对齐数为8
////struct _S1 {
////	char _c1;//1
////	int _i;//1+3+4
////	char _c2;//1+3+4+1+3=12
////};
////#pragma pack()//取消设置的默认对齐数,还原为默认
////#pragma pack(1)//设置默认对齐数为1
////struct _S2 {
////	char _c1;//1
////	int _i;//1+4
////	char _c2;//1+4+1=6
////};
////#pragma pack()//取消设置的默认对齐数,还原为默认
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
//////把默认对齐数改为2
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
//void print2(struct S* ps) {//传址传参更优
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
////枚举的优点:1.增加代码可读性,可维护性 2.有类型安全检查	 3.便于调试 4.可以有一定的封装性防止命名污染 5.可以一次定义多个枚举常量,更方便
////枚举类型就是一种类型,整型就是整型
////声明枚举类型如下:
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
//	//printf("%d\n", _Color::_BLUE);//::作用域操作符
//	//c = 2;//这句话C中没有问题,但是实际上是错误的,c是enum Color类型的而2是整型的类型不匹配,在C++中会报错:无法从int转换为Color
//	//说明C++语法检查更加严格
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
//		printf("请输入您的选择:>");
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
//	//printf("0X%p\n", &(un._c));//&un._i和&un._c地址一样
//
//	//un._i = 0x11223344;
//	//un._c = 0x55;
//	//printf("0X%x\n", un._i);//0x11223355
//
//	//if (is_small_endian()) {
//	//	printf("小端字节序!\n");
//	//}
//	//else {
//	//	printf("大端字节序!\n");
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
//完成一个通讯录Contact 1.通讯录中能够存放1000个人的信息,每个人的信息:名字+年龄+性别+电话+地址
//2.实现增加,删除,查询,修改联系人的信息
//3.排序通讯录信息
//4.打印通讯录信息
//CCODE.c中写测试代码	Contact.h中写类型定义,函数声明,符号声明代码 Contact.c中写函数实现代码
//#include "Contact.h"
//#pragma warning(disable:6262)
//void test() {
//	Contact con;
//	InitContact(&con);
//	int input = 0;
//	do {
//		Menu();
//		printf("请输入您的选择:>");
//		scanf("%d", &input);
//		switch (input) {
//		case _EXIT:
//			printf("正在退出通讯录!\n");
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
//			printf("您输入的数据有误,请重新输入!\n");
//			break;
//		}
//	} while (input);
//	printf("已退出通讯录!\n");
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
//	//假设开辟10个整型空间 10*sizeof(int)
//	int arr[10] = { 0 };//arr是局部变量,开辟在栈区
//	int* ptr = (int*)malloc(10 * sizeof(int));//动态内存开辟的,在堆区
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
//	////p = (int*)realloc(p, 250 * sizeof(int));//err: realloc函数返回值可能为NULL,导致原始内存泄露
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
//	int* p = (int*)realloc(NULL, 10 * sizeof(int));//这里功能类似于malloc,直接在堆区开辟40字节的空间
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
//	//动态开辟的空间忘记释放-导致内存泄漏
//}
//void test0() {
//	//int* p = (int*)malloc(INT_MAX * sizeof(int));
//	//int i = 0;//err:应该对p进行判空处理,然后再使用,否则可能会导致非法访问内存
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
//	//for (i = 0; i < 40; i++) {//err:越界访问内存
//	//	*(p + i) = i;
//	//}
//	//free(p);
//	//p = NULL;
//
//	//int arr[10] = { 0 };
//	//int* p = arr;
//	//free(p);//err:free了指向非动态开辟的内存的指针
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
//	//free(p);//err:使用free释放动态内存的一部分,并且很有可能导致内存泄漏
//	//p = NULL;
//
//	//int* p = (int*)malloc(100);
//	//if (NULL == p) {
//	//	perror("test0 malloc");
//	//	return;
//	//}
//	//free(p);
//	////p = NULL;
//	//free(p);//对同一块动态内存空间多次释放发生错误
//
//}
//void GetMemory1(char* p) {
//	//p = (char*)malloc(100);
//}
//void test3() {
//	//char* str = NULL;
//	//GetMemory1(str);//内存泄露了
//	//strcpy(str, "hello world");//非法写入内存
//	//printf(str);
//}
//char* GetMemory2() {
//	//char p[] = "hello world";
//	//return p;//返回局部变量地址
//}
//void test4() {
//	//char* str = NULL;
//	//str = GetMemory2();
//	//printf(str);//非法读取内存
//}
//void GetMemory3(char** pp, int num) {
//	*pp = (char*)malloc(num);
//}
//void test5() {
//	char* str = NULL;
//	GetMemory3(&str, 100);
//	strcpy(str, "hello");//完全OK
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
//	//	strcpy(str, "world");//野指针非法访问内存
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
//	printf(str);//这句话没问题
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
//		printf("请您输入您的选择:>");
//		scanf("%d", &input);
//		switch (input) {
//		case _EXIT:
//			DestroyContact(&con);
//			printf("正在退出通讯录!\n");
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
//			printf("您的输入有误,请重新输入数据!\n");
//			break;
//		}
//	} while (input);
//	printf("成功退出!\n");
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
//	//柔性数组:flexible array是指C99中结构体最后一个元素允许是未知大小的数组,这就叫柔性数组成员
//	//typedef struct st_type {
//	//	int _i;
//	//	int _a[0];//柔性数组成员,大小是未知的
//	//} type_a;
//	//有些编译器会报错无法编译可以改成:
//	//typedef struct st_type {
//	//	int _i;
//	//	int _a[];//柔性数组成员,大小是未知的
//	//} type_a;
//	//柔性数组的特点:1.结构体中的柔性数组成员前面必须至少一个其他成员
//	//2.sizeof返回的这种结构体大小不包括柔性数组的内存
//	//3.包含柔性数组成员的结构体用malloc函数进行内存动态分配并且分配的内存应该大于结构体的大小,以适应柔性数组的预期大小
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
//	//free(p);//一次性就释放完了空间
//	//p = NULL;
//	//上述柔性数组成员_a相当于获得了100个整形元素的连续空间
//	//柔性数组的优势:上述的type_a结构体也可以设计为:
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
//	free(p);//需要多次释放空间,而且可能会因为释放顺序错误的原因导致程序崩溃
//	p = NULL;
//	//上述柔性数组和非柔性数组可以完成相同的功能,但是柔性数组有两个好处:第一个好处是方便内存释放:
//	//如果我们的代码是在一个给别人用的函数中,你在里面做了二次内存分配,并把整个结构体返回给用户,用户调用free可以释放结构体,但是用户并不知道这个结构体内的成员也需要free,所以你不能指望用户来发现这个事,所以如果我们把结构体的内存以及其成员要的内存一次性分配好了,并返回给用户一个结构体,用户做一次free就可以把所有的内存也给释放掉
//	//第二个好处是有利于访问速度:连续的内存有益于提高访问数组,也有益于减少内存碎片(其实我个人感觉也没多高,反正你跑不了要用做偏移量的加法来寻址)
//}
//void test1() {
//	//柔性数组成员	C99标准引入的概念
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
//	////开辟的44个字节是连续的,ps指向这段空间的首地址
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
//	printf("%d\n", sizeof(struct S));//4	为什么?
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
//	//fclose(fp);//如果不关闭文件会导致后面的文件打不开了,因为文件是一种资源,而一个进程一个程序能打开的文件数量是有限的
//	//fp = NULL;
//
//	//FILE* fp = fopen("myfile.txt", "w");
//	//if (NULL == fp) {
//	//	perror("test0 fp fopen");
//	//	return;
//	//}
//	//fputs("fopen example", fp);//myfile.txt文件中有fopen example字符串
//	////fputs("fopen example", stdout);//运行时控制台打印fopen example字符串
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
//	while (~(ch = fgetc(fp))) {//fgetc从文件流中读取数据
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
//	while (~(ch = fgetc(stdin))) {//fgetc从标准输入流中读取数据
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
//	fputs("I love 八部金刚功\n", stdout);
//	fputs("I love 八部长寿功\n", stdout);
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
//	fprintf(fp, "%s %d %.1f\n", s._arr, s._num, s._sc);//对格式化的数据进行写文件
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
//	//test3_1();//写入
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
//	//test4_1();//二进制形式写入文件
//	//test4_2();//二进制形式读取文件
//	//test4_3();
//	//test4_4();
//}
//void test() {
//	//内存中程序--写入/输出-->硬盘中的文件
//	//内存中程序<--读取/输入--硬盘中的文件
//	//流是高度抽象的概念,C语言中只要运行起来,就默认打开了3个流,stdin标准输入流,stdout标注输出流,stderr标准错误流,这三种流都是FILE*类型的
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
//		printf("请您输入您的选择:>");
//		scanf("%d", &input);
//		switch (input) {
//		case _EXIT:
//			DestroyContact(&con);
//			printf("正在退出通讯录!\n");
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
//			printf("您输入的数据有误,请重新输入!\n");
//			break;
//		}
//	} while (input);
//	printf("已退出通讯录!\n");
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
//	//sprintf把一个格式化的数据转换为字符串
//	sprintf(buff, "%s %d %f", s._arr, s._age, s._f);//写入字符串时不能黏在一起,否则后面还原出来会有问题
//	printf("%s\n", buff);//字符串打印
//	//sscanf从buff字符串中还原出一个结构体数据
//	sscanf(buff, "%s %d %f", s2._arr, &s2._age, &s2._f);
//	printf("%s %d %f\n", s2._arr, s2._age, s2._f);//字符串 整型 浮点型组合打印
//}
//void test1_1() {
//	//int fseek(FILE* stream, long int offset, int origin);最后一个参数起始位置有三种
//	//SEEK_CUR, SEEK_SET, SEEK_END分别是当前位置,起始位置,终点位置
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
//	//ftell函数返回文件指针相对于起始位置的偏移量	函数原型:long int ftell(FILE* stream);
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
//	printf("Size of myfile.txt: %ld bytes.\n", size);//算文件中的字节数
//}
//void test1_4() {
//	//rewind函数让文件指针的位置回到文件的起始位置		函数原型是 void rewind(FILE* stream);
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
//	//文件随机读写
//	test1_1();
//	//test1_2();
//	//test1_3();
//	//test1_4();
//}
//void test2() {
//	//文本文件与二进制文件		内存中的数据是怎样的就怎样将数据写入硬盘文件这就是二进制文件,用文本编辑器打开是乱码,但是效率高可以不用转换也节省空间	   将内存中的数据先转换为ASSCII码值然后写入硬盘文件这就是文本文件,用文本编辑器打开能看得懂,但是因为要转换效率低而且占用空间更多
//	int a = 10000;
//	FILE* fp = fopen("test1.txt", "wb");
//	if (NULL == fp) {
//		perror("test2 fp fopen");
//		return;
//	}
//	fwrite(&a, sizeof(int), 1, fp);//二进制写入,直接写入内存数据,文本编辑器显示乱码
//	fclose(fp);
//	fp = NULL;
//	FILE* pf = fopen("test2.txt", "w");
//	if (NULL == pf) {
//		perror("test2 pf fopen");
//		return;
//	}
//	int n = 10000;
//	fprintf(pf, "%d", n);//文本写入,写入对应的数字字符,文本编辑器显示10000
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
//		printf("\n正常:读取到文件结束标志导致读取结束!\n");
//	}
//	else if (ferror(fp1)) {
//		printf("\n异常:读取文件错误导致读取结束!\n");
//	}
//	fclose(fp1);
//	fp1 = NULL;
//	fclose(fp2);
//	fp2 = NULL;
//}
//void test3() {
//	//fgetc函数在读取结束的时候会返回EOF,正常读取的时候返回的是读取到的字符的ASSCII码值
//	//fgets函数在读取结束的时候会返回NULL,正常读取的时候返回的是存放字符串的空间的起始地址
//	//fread函数在读取的时候返回的是实际读取到的完整的元素的个数,如果发现读取到的完整的元素的个数小于指定的元素个数,这就是最后一次读取了
//	//当使用上述三个函数读取文件结束后,可以用feof函数返回值进行判断读取结束原因是读取到文件末尾EOF导致读取结束,还是读取错误导致文件读取结束
//	//test3_1();//文本文件的例子
//	//test3_2();//二进制的例子
//	//test3_3();
//}
//void test4() {
//	//缓冲文件系统
//	FILE* fp = fopen("test9.txt", "w");
//	if (NULL == fp) {
//		perror("test4 fp fopen");
//		return;
//	}
//	fputs("abcdef", fp);//先将代码放到输出缓冲区(也属于内存)
//	printf("睡眠10秒-已经写数据了,打开test9.txt,发现文件没有内容\n");
//	Sleep(10000);
//	printf("刷新缓冲区\n");
//	fflush(fp);//刷新缓冲区时,才能将输出缓冲区的数据写到文件(硬盘)
//	//注意:fflush在高版本VS中不能使用
//	printf("再睡眠10秒-此时,再次打开test9.txt文件,文件有内容了\n");
//	Sleep(10000);
//	fclose(fp);//注意:fclose在关闭文件的时候,也会刷新缓冲区(也属于内存)
//	fp = NULL;
//}
//void test() {
//	//printf	针对标准输出流的格式化输出语句	- stdout
//	//fprintf	针对所有输出流的格式化输出语句   - stdout/文件流
//	//sprintf	将一个格式化数据转化为字符串
//	//scanf		针对标准输入流的格式化输入语句   - stdin
//	//fscanf	针对所有输入流的格式化输入语句   - stdin/文件流
//	//sscanf	从字符串中读取一个格式化数据
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
//	//printf("file: %s\n", __FILE__);//预定义符号--->进行编译的源文件
//	//printf("line: %d\n", __LINE__);//预定义符号--->文件当前的行号
//	//printf("date: %s\n", __DATE__);//预定义符号--->文件被编译的日期
//	//printf("time: %s\n", __TIME__);//预定义符号--->文件被编译的时间
//	//printf("func: %s\n", __FUNCTION__);//预定义符号--->当前的函数名
//	//printf("stdc: %d\n", __STDC__);//err:__STDC__如果编译器遵循ANSI C其值为1,否则未定义,VS2019中没有定义导致编译出错,gcc中定义了这个符号会打印1,说明VS2019不支持这个ANSI C标准,而gcc支持这个ANSI C标准
//	//这些符号都是语言内置的,这些预定义符号的应用之一就是写日志
//	FILE* fp = fopen("log.txt", "a+");//log日志,a+的方式是追加,没文件就创建文件,追加读写
//	if (NULL == fp) {
//		perror("test0 fp fopen");
//		return;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		fprintf(fp, "%s %d %s %s %s %d\n", __FILE__, __LINE__, __DATE__, __TIME__, __FUNCTION__, i);//写入日志
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
//	//do_forever;//死循环
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
//	//DEBUG_PRINT;//\续行符
//}
////#define M 1000;//这后面的;可能导致后续写代码出现问题
//void test4() {
//	//int m = M;//int m = 1000; ;
//	int a = 10;
//	int b = 0;
//	//if (a > 10)
//	//	b = M;//err: b = 1000; ;导致出错
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
//void test8() {						//这种使用方式只有宏中才能使用
//	//int a = 10;
//	////the value of a is 10
//	//int b = 20;
//	////the value of b is 20
//	//int c = 30;
//	////the value of c is 30
//	//float f = 5.5f;
//	////the value of f is 5.50
//	////想让上述打印出想要的结果,使用函数做不到,可以使用宏里的#
//	//PRINTF(a, "%d");//printf("the value of ""a"" is ""%d""\n", a);
//	//PRINTF(b, "%d");//printf("the value of ""b"" is ""%d""\n", b);
//	//PRINTF(c, "%d");//printf("the value of ""c"" is ""%d""\n", c);
//	//PRINTF(f, "%.2f");//printf("the value of ""f"" is ""%.2f""\n", f);
//}
////#define CAT(X, Y) (X##Y)
////#define CATS(X, Y, Z) (X##Y##Z)//##只在宏定义中才能使用
//void test9() {
//	//int class101 = 100;
//	//printf("%d\n", CAT(class, 101));//打印100,解释:class##101--->class101,##合并两个符号为一个符号
//	//printf("%d\n", class101);//100
//
//	//int class101101 = 10;
//	//printf("%d\n", CATS(class, 101, 101));//打印10,解释:class##101##101--->class101101,##合并两个符号为一个符号
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
////#ifdef __DEBUG__//调试性代码,删除可惜,保留又碍事,我们进行选择性编译
////		printf("%d ", arr[i]);//为了观察数组是否赋值成功
////#endif//__DEBUG__
////	}
//}
//void test16() {
////#if 1
////	printf("hehe\n");//打印
////#endif
////#if 0
////	printf("haha\n");//不打印
////#endif
////#if 1-2
////	printf("hhhh\n");//打印
////#endif
////
////#define FLAG 1
////#if FLAG//#if 1
////	printf("Good\n");//打印
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
////#define TEST 0//ok,照样打印test
////#ifdef TEST//如果TEST定义了,下面代码参与编译
////	printf("test\n");
////#endif
//
////#define HEHE 1
////#ifndef HEHE//如果HEHE没有定义,则下面代码参与编译
////	printf("hehe\n");
////#endif//!HEHE
//}
//void test19() {
////#define TEST
////#define HEHE
////	//如果TEST定义了,1,2参与编译
////#ifdef TEST//1
////	printf("test1\n");
////#endif//TEST
////#if defined(TEST)//2
////	printf("test2\n");
////#endif//TEST
////
////	//如果HEHE不定义,下面参与编译
////#ifndef HEHE//3
////	printf("hehe1\n");
////#endif//!HEHE
////#if !defined(HEHE)//4
////	printf("hehe2\n");
////#endif//!HEHE
////	//1和2意思是一样的,3和4意思是一样的,1和3是相反的意思,2和4是相反的意思
//}
//void test20() {
////#include <stdio.h>//库文件包含,C语言库中提供的函数的头文件使用<>
////#include "add.h"//本地文件包含,自定义的函数的头文件使用""
////<>和""包含头文件的本质区别是:查找策略的区别
////"":先在源文件目录下查找,如果找到了则使用,没找到则去系统的头文件目录下查找,找到了则使用,再没找到则会导致编译错误
////<>:直接在系统头文件目录下查找,如果找到了则使用,没找到则导致编译错误
//}
//void test() {
//	//#define是定义符号和宏的
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
//	//条件编译指令也是预处理指令,预处理阶段处理掉
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