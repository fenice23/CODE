#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>//cin cout endl
//#include <cstdio>//scanf printf
////using namespace std;
//int main()
//{
//	//cout << "Hello World!" << endl;
//	//cout << "I'm Tzh!" << endl;
//	std::cout << "Hello World!" << std::endl;
//	std::cout << "I'm Tzh!" << std::endl;
//	return 0;
//}
//#include <iostream>
//#include <string>
//#include <cstdio>
//using namespace std;
//#pragma warning(disable:6031)
//#pragma warning(disable:26451)
//int main()
//{
//	cout << (char)('A' + 2) << endl;
//	//cout << 'A' + 2 << endl;
//	//int a = 6;
//	//float b = 1.3f;
//	//cout << a * b << endl;
//	//cout << 5 % -2 << endl;//1
//	//cout << -5 % -2 << endl;//-1
//	//cout << -5 % 2 << endl;//-1
//	//cout << 5 % 2 << endl;//1
//	//cout << 5 / 2 << endl;
//	//cout << 5.0 / 2.0 << endl;
//	//long long a = 0ll;
//	//long long b = 0ll;
//	//scanf("%lld%lld", &a, &b);
//	//printf("%lld, %lld\n", a, b);
//	//double a = 0.0;
//	//double b = 0.0;
//	//scanf("%lf%lf", &a, &b);
//	//printf("%lf, %lf\n", a, b);
//	//char a = 0;
//	//char b = 0;
//	//scanf(" %c %c", &a, &b);
//	//printf("%c %c\n", a, b);
//	//float a = 0.0f;
//	//float b = 0.0f;
//	//scanf("%f%f", &a, &b);
//	//printf("a + b = %.2f\na * b = %.3f\n", a + b, a * b);
//	//int a = 0;
//	//int b = 0;
//	//scanf("%d%d", &a, &b);
//	//printf("a + b = %d\na * b = %d\n", a + b, a * b);
//	//int a = 5;
//	//int b, c = a, d = 10 / 2;
//	//bool char int float double
//	//bool真假,true真,false假
//	//int a, b;
//	//cin >> a >> b;
//	//cout << a + b << endl;
//
//	//string str;
//	//cin >> str;
//	//cout << str;
//
//	//int a, b;
//	//string str;
//	//cin >> a;
//	//cin >> b >> str;
//	//cout << str << " !!! " << a + b << endl;
//
//	//int a = 6 + 3 * 4 / 2 - 2;
//	//cout << a << endl;//10
//	//int b = a * 10 + 5 / 2;
//	//cout << b << endl;//102
//
//	//float x = 1.5f;
//	//float y = 3.2f;
//	//cout << x * y << ' ' << x + y << endl;//4.8 4.7
//	//cout << x - y << ' ' << x / y << endl;//-1.7 0.46875
//
//	//int a = 1;
//	//int b = a++;
//	//cout << a << ' ' << b << endl;//2 1
//	//int c = ++a;
//	//cout << a << ' ' << c << endl;//3 3
//
//	//float x = 123.12f;
//	////int y = int(x);
//	////int y = (int)x;
//	//int y = static_cast<int>(x);
//	//cout << x << ' ' << y << endl;//123.12 123
//
//	//int a, b, c;
//	//cin >> a >> b >> c;
//	//cout << b << endl;
//
//	//int a, b, c;
//	//cin >> a >> b >> c;
//	//cout << (a + b) * c << endl;
//
//	//int a, b;
//	//cin >> a >> b;
//	//int c = a / b, d = a % b;
//	//cout << c << ' ' << d << endl;
//
//	//int n = 0;
//	//cin >> n;
//	//int a = n % 10;
//	//n = n / 10;
//	//int b = n % 10;
//	//n = n / 10;
//	//int c = n;
//	//cout << a << b << c << endl;
//
//	//int a = 0;
//	//int b = 0;
//	//int tmp = 0;
//	//cout << "请输入整数a,b的值:>";
//	//cin >> a >> b;
//	//cout << a << ' ' << b << endl;
//	//tmp = a;
//	//a = b;
//	//b = tmp;
//	//cout << a << ' ' << b << endl;
//
//	//int a = 0;
//	//int b = 0;
//	//cout << "请输入a,b两个整数的值:>";
//	//cin >> a >> b;
//	//cout << a << ' ' << b << endl;
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//cout << a << ' ' << b << endl;
//
//	//int a = 0;
//	//int b = 0;
//	//cout << "请输入a,b两个整数的值:>";
//	//cin >> a >> b;
//	//cout << a << ' ' << b << endl;
//	//a ^= b;
//	//b ^= a;
//	//a ^= b;
//	//cout << a << ' ' << b << endl;
//
//	//char ch = 0;
//	//cin >> ch;
//	//cout << "  " << ch << endl;
//	//cout << " " << ch << ch << ch << endl;
//	//cout << ch << ch << ch << ch << ch << endl;
//	//cout << " " << ch << ch << ch << endl;
//	//cout << "  " << ch << endl;
//
//	//double d = 1.1;
//	//d++;
//	//cout << d << endl;//2.1
//
//	//int a = 5;
//	//float b = (float)a;
//	//cout << b << endl;
//	//printf("%f\n", b);
//
//	//float a = 5.23;
//	//int b = (int)a;
//	//printf("%d\n", b);
//	//cout << b << endl;
//
//	//int t = 97;
//	//char c = (char)t;
//	//cout << c << endl;
//	//printf("%c\n", c);
//
//	//char ch = 'a';
//	//int t = (int)ch;
//	//cout << t << endl;
//	//printf("%d\n", t);
//
//	//char c = 'A';
//	//cout << (char)(c + 33) << endl;
//	return 0;
//}
//#include <cstdio>
//#include <iostream>
//using namespace std;
//#pragma warning(disable:6031)
//int main()
//{
//	//printf("Hello World!\n");
//	//int float double char 回车也是一个字符用'\n'表示
//	//%d  %f    %lf    %c
//
//	//int a = 3;
//	//float b = 3.12345678f;
//	//double c = 3.12345678;
//	//char d = 'y';
//
//	//printf("%d\n", a);
//	//printf("%f\n", b);
//	//printf("%lf\n", c);
//	//printf("%c\n", d);
//
//	//int a = 3;
//	//float b = 3.12345678f;
//	//double c = 3.12345678;
//	//char d = 'y';
//	//printf("int a = %d, float b = %f, double c = %lf, char d = %c\n", a, b, c, d);
//
//	//char ch = 0;
//	//cin >> ch;
//	//cout << "  " << ch << endl;
//	//cout << " " << ch << ch << ch << endl;
//	//cout << ch << ch << ch << ch << ch << endl;
//	//cout << " " << ch << ch << ch << endl;
//	//cout << "  " << ch << endl;
//
//	//char ch = 0;
//	//scanf(" %c", &ch);
//	//printf("  %c\n", ch);
//	//printf(" %c%c%c\n", ch, ch, ch);
//	//printf("%c%c%c%c%c\n", ch, ch, ch, ch, ch);
//	//printf(" %c%c%c\n", ch, ch, ch);
//	//printf("  %c\n", ch);
//
//	//int t = 0;
//	//scanf("%d", &t);
//	//int hours = 0;
//	//int minutes = 0;
//	//int seconds = 0;
//	//hours = t / 60 / 60;
//	//t = t % 3600;
//	//minutes = t / 60;
//	//t = t % 60;
//	//seconds = t;
//	//printf("%d:%d:%d\n", hours, minutes, seconds);
//
//	//float b = 3.12345678f;
//	//double c = 3.12345678;
//	//printf("%.3f\n", b);
//	//printf("%.4lf\n", c);
//
//	//int a = 3;
//	//float b = 3.12345678f;
//	//double c = 3.12345678;
//	//printf("%5d\n", a);
//	//printf("%8.4f\n", b);
//	//printf("%7.3lf\n", c);
//
//	//int a = 3;
//	//float b = 3.12345678f;
//	//double c = 3.12345678;
//	//printf("%-5d!\n", a);
//	//printf("%-8.4f!\n", b);
//	//printf("%-7.3lf!\n", c);
//
//	//int a = 3;
//	//float b = 3.12345678f;
//	//double c = 3.12345678;
//	//printf("%05d\n", a);
//	//printf("%08.4f\n", b);
//	//printf("%07.3lf\n", c);
//
//
//	return 0;
//}
//#include <iostream>
//#include <cstdio>
//using namespace std;
//#pragma warning(disable:6031)
//int main()
//{
//	//int a = 0;
//	//cin >> a;
//	//if (a > 5)
//	//{
//	//	printf("%d is big!\n", a);
//	//	printf("%d + 1 = %d\n", a, a + 1);
//	//}
//	//else
//	//{
//	//	printf("%d is small!\n", a);
//	//	printf("%d - 1 = %d\n", a, a - 1);
//	//}
//
//	//int a = 0;
//	//cin >> a;
//	//if (a > 5)
//	//{
//	//	printf("%d is big!\n", a);
//	//	printf("%d + 1 = %d\n", a, a + 1);
//	//}
//
//	//int a = 0;
//	//cin >> a;
//	//if (a > 5)
//	//	printf("%d is big!\n", a);
//	//else
//	//	printf("%d is small!\n", a);
//
//	//int num = 0;
//	//scanf("%d", &num);
//	//if (num >= 0)
//	//{
//	//	printf("|%d| = %d\n", num, num);
//	//}
//	//else
//	//{
//	//	printf("|%d| = %d\n", num, -num);
//	//}
//
//	//int x = 0;
//	//cin >> x;
//	//if (x > 0)
//	//	cout << x << endl;
//	//else
//	//	cout << -x << endl;
//
//	//int n1 = 0;
//	//int n2 = 0;
//	//scanf("%d%d", &n1, &n2);
//	//if (n1 > n2)
//	//{
//	//	printf("max = %d\n", n1);
//	//}
//	//else
//	//{
//	//	printf("max = %d\n", n2);
//	//}
//
//	//int a = 0;
//	//int b = 0;
//	//cin >> a >> b;
//	//if (a > b)
//	//	cout << a << endl;
//	//else
//	//	cout << b << endl;
//
//	//int a = 0;
//	//int b = 0;
//	//int c = 0;
//	//scanf("%d%d%d", &a, &b, &c);
//	//if (a > b)
//	//{
//	//	if (a > c)
//	//	{
//	//		printf("max = %d\n", a);
//	//	}
//	//	else
//	//	{ 
//	//		printf("max = %d\n", c);
//	//	}
//	//}
//	//else
//	//{
//	//	if (b > c)
//	//	{
//	//		printf("max = %d\n", b);
//	//	}
//	//	else
//	//	{
//	//		printf("max = %d\n", c);
//	//	}
//	//}
//
//	//int a = 0;
//	//int b = 0;
//	//int c = 0;
//	//cin >> a >> b >> c;
//	//if (a > b)
//	//{
//	//	if (a > c)
//	//		cout << a << endl;
//	//	else
//	//		cout << c << endl;
//	//}
//	//else
//	//{
//	//	if (b > c)
//	//		cout << b << endl;
//	//	else
//	//		cout << c << endl;
//	//}
//
//	//int a = 0;
//	//int b = 0;
//	//cin >> a >> b;
//	//if (a > b)
//	//{
//	//	printf("%d > %d\n", a, b);
//	//}
//	//if (a >= b)
//	//{
//	//	printf("%d >= %d\n", a, b);
//	//}
//	//if (a < b)
//	//{
//	//	printf("%d < %d\n", a, b);
//	//}
//	//if (a <= b)
//	//{
//	//	printf("%d <= %d\n", a, b);
//	//}
//	//if (a == b)
//	//{
//	//	printf("%d == %d\n", a, b);
//	//}
//	//if (a != b)
//	//{
//	//	printf("%d != %d\n", a, b);
//	//}
//
//	//int s = 0;
//	//cin >> s;
//	//if (s >= 85 && s <= 100)
//	//	cout << "A" << endl;
//	//else if (s >= 70 && s < 85)
//	//	cout << "B" << endl;
//	//else if (s >= 60 && s < 70)
//	//	cout << "C" << endl;
//	//else if (s < 60 && s >= 0)
//	//	cout << "D" << endl;
//	//else
//	//	cout << "输入数据非法,请重新输入!" << endl;
//
//	//int n1 = 0;
//	//int n2 = 0;
//	//char op = 0;
//	//scanf("%d%d %c", &n1, &n2, &op);
//	//if (op == '+')
//	//{
//	//	printf("%d %c %d = %d\n", n1, op, n2, n1 + n2);
//	//}
//	//else if (op == '-')
//	//{
//	//	printf("%d %c %d = %d\n", n1, op, n2, n1 - n2);
//	//}
//	//else if (op == '*')
//	//{
//	//	printf("%d %c %d = %d\n", n1, op, n2, n1 * n2);
//	//}
//	//else if (op == '/')
//	//{
//	//	if (n2 == 0)
//	//		printf("Divided by zero!\n");
//	//	else
//	//		printf("%d %c %d = %d\n", n1, op, n2, n1 / n2);
//	//}
//	//else
//	//{
//	//	printf("Invalid operator!\n");
//	//}
//
//	//int a = 0;
//	//int b = 0;
//	//char c = 0;
//	//cin >> a >> b >> c;
//
//	//if (c == '+')
//	//	cout << a + b << endl;
//	//else if (c == '-')
//	//	cout << a - b << endl;
//	//else if (c == '*')
//	//	cout << a * b << endl;
//	//else if (c == '/')
//	//{
//	//	if (b == 0)
//	//		cout << "Divided by zero!" << endl;
//	//	else
//	//		cout << a / b << endl;
//	//}
//	//else
//	//	cout << "Invalid operator!" << endl;
//
//	//int year = 0;
//	//cin >> year;
//	//if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	//	cout << "yes!" << endl;
//	//else
//	//	cout << "no!" << endl;
//
//	//int year = 0;
//	//cin >> year;
//	//if (year % 100 == 0)
//	//{
//	//	if (year % 400 == 0)
//	//		cout << "yes!" << endl;
//	//	else
//	//		cout << "no!" << endl;
//	//}
//	//else
//	//{
//	//	if (year % 4 == 0)
//	//		cout << "yes!" << endl;
//	//	else
//	//		cout << "no!" << endl;
//	//}
//
//	//int a = 0;
//	//int b = 0;
//	//int c = 0;
//	//cin >> a >> b >> c;
//	//if (a > b && a > c)
//	//	cout << "max = " << a << endl;
//	//else if (a > b && a < c)
//	//	cout << "max = " << c << endl;
//	//else if (a < b && b < c)
//	//	cout << "max = " << c << endl;
//	//else if (a < b && b > c)
//	//	cout << "max = " << b << endl;
//	return 0;
//}
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
//	//int a, b, c;
//	//cin >> a >> b >> c;
//	//if (a >= b && a >= c)
//	//	cout << "max = " << a << endl;
//	//else if (b >= a && b >= c)
//	//	cout << "max = " << b << endl;
//	//else
//	//	cout << "max = " << c << endl;
//
//	//int score = 0;
//	//cin >> score;
//	//if (score >= 60)
//	//{
//	//	cout << "及格!" << endl;
//	//	cout << "真棒!" << endl;
//	//}
//	//else
//	//{
//	//	cout << "不及格!" << endl;
//	//	cout << "别灰心,继续努力!" << endl;
//	//}
//	//cout << "结束!" << endl;
//
//	//int a = 1;
//	//int b = 23;
//	//int c = 456;
//	//double f = 12.45;
//	//printf("%05d!\n", a);
//	//printf("%05d!\n", b);
//	//printf("%05d!\n", c);
//	//printf("%05.1lf!\n", f);
//	//printf("%5.1lf!\n", f);
//	//printf("%-5.1lf!\n", f);
//	//printf("%-5d!\n", a);
//	//printf("%-5d!\n", b);
//	//printf("%-5d!\n", c);
//
//	//printf("%5d!\n", a);
//	//printf("%5d!\n", b);
//	//printf("%5d!\n", c);
//
//	//double f = 5.1234456676;
//	//printf("%.1lf\n", f);
//	//printf("%.5lf\n", f);
//	//printf("%.10lf\n", f);
//	return 0;
//}
//#include <iostream>
//#include <cstdio>
//#include <cmath>
//using namespace std;
//#pragma warning(disable:6031)
//int main()
//{
//
//	//int i = 0;
//	//while (i < 10)
//	//{
//	//	cout << i << " ";
//	//	i++;
//	//}
//	//cout << endl;
//
//	//int i = 1;
//	//int sum = 0;
//	//while (i <= 100)
//	//{
//	//	sum += i * i * i;
//	//	i++;
//	//}
//	////cout << i << endl;
//	//cout << sum << endl;
//
//	//int n = 0;
//	//int a = 1;
//	//int b = 1;
//	//int c = 0;
//	//cin >> n;
//	//if (n == 1 || n == 2)
//	//{
//	//	printf("%d\n", 1);
//	//}
//	//else
//	//{
//	//	while (n > 2)
//	//	{
//	//		c = a + b;
//	//		a = b;
//	//		b = c;
//	//		n--;
//	//	}
//	//	printf("%d\n", c);
//	//}
//
//	//int x = 1;
//	//while (x == 1)//x==1恒成立
//	//{
//	//	puts("!");//puts函数打印字符串时自动会加上换行符
//	//}
//
//	//int x = 1;
//	//cout << x << endl;//1
//	//while (x < 1)
//	//{
//	//	cout << "x!" << endl;
//	//	x++;
//	//}
//	//cout << x << endl;//1
//
//	//int y = 1;
//	//cout << y << endl;//1
//	//do
//	//{
//	//	cout << "y!" << endl;//y!
//	//	y++;
//	//} while (y < 1);
//	//cout << y << endl;//2
//
//	//for (int i = 0; i < 10; i++)
//	//	cout << i << " ";
//	//cout << endl;
//
//	//int sum = 0;
//	//for (int i = 1; i <= 100; i++)
//	//{
//	//	sum += i * i * i;
//	//}
//	//cout << "sum = " << sum << endl;
//
//	//int n = 0;
//	//cin >> n;
//	//int a = 1;
//	//int b = 1;
//	//int c = 0;
//	//if (n == 1 || n == 2)
//	//{
//	//	cout << 1 << endl;
//	//}
//	//else
//	//{
//	//	for (; n > 2; n--)
//	//	{
//	//		c = a + b;
//	//		a = b;
//	//		b = c;
//	//	}
//	//	cout << c << endl;
//	//}
//
//	//int sum = 0;
//	//for (int i = 2, j = 8; i < 5 && j > 5; i++, j--)
//	//{
//	//	sum += (i * j);
//	//}
//	//sum += 1 * 10;
//	//cout << sum << endl;//71
//
//	//int sum = 0;
//	//for (int i = 1, j = 10; i < j; i++, j--)
//	//	sum += (i * j);
//	//cout << sum << endl;//110
//
//	//int num = 0;
//	//cin >> num;
//	//if (num == 2)
//	//{
//	//	cout << num << " is a prime number!" << endl;
//	//}
//	//else
//	//{
//	//	int tmp = (int)(sqrt(num) + 0.000002);
//	//	int i = 0;
//	//	for (i = 2; i <= tmp; i++)
//	//	{
//	//		if (num % i == 0)
//	//			break;
//	//	}
//	//	if (i > tmp)
//	//	{
//	//		cout << num << " is a prime number!" << endl;
//	//	}
//	//	else
//	//	{
//	//		cout << num << " is not a prime number!" << endl;
//	//	}
//	//}
//
//	//int sum = 0;
//	//for (int i = 1; i <= 100; i++)
//	//{
//	//	if (i & 0x1)
//	//		continue;
//	//	sum += i;
//	//}
//	//cout << sum << endl;
//	//sum = 0;
//	//for (int i = 0; i <= 100; i += 2)
//	//{
//	//	sum += i;
//	//}
//	//cout << sum << endl;
//
//	//for (int i = 0, k = 1; i < 10; i++)
//	//{
//	//	for (int j = 0; j < 10; j++, k++)
//	//	{
//	//		cout << k << ' ';//1 2 3 4 5 6 7 8 9 10
//	//	}					 //11 12 13 14 15 16 17 18 19 20
//	//	cout << endl;		 //...
//	//}//打印1~100
//
//	//cout << 2 << " ";
//	//for (int i = 3; i <= 100; i++)
//	//{
//	//	int tmp = (int)(sqrt(i) + 0.000002);
//	//	int j = 0;
//	//	bool flag = true;
//	//	for (j = 2; j <= tmp; j++)
//	//	{
//	//		if (i % j == 0)
//	//		{
//	//			flag = false;
//	//			break;
//	//		}
//	//	}
//	//	if (flag)
//	//		cout << i << " ";
//	//}
//	//cout << endl;
//
//	//int n = 0;
//	//cin >> n;
//	//int h1 = n / 2 + 1;
//	//int h2 = n - h1;
//	//for (int i = 0; i < h1; i++)
//	//{
//	//	for (int j = h1 - 1 - i; j > 0; j--)
//	//	{
//	//		cout << " ";
//	//	}
//	//	for (int j = 0; j < 2 * i + 1; j++)
//	//	{
//	//		cout << "*";
//	//	}
//	//	cout << endl;
//	//}
//
//	//for (int i = 0; i < h2; i++)
//	//{
//	//	for (int j = 0; j < i + 1; j++)
//	//	{
//	//		cout << " ";
//	//	}
//	//	for (int j = 2 * h2 - 1 - 2 * i; j > 0; j--)
//	//	{
//	//		cout << "*";
//	//	}
//	//	cout << endl;
//	//}
//
//	//int n = 0;
//	//cin >> n;
//	//int a = 1;
//	//int b = 1;
//	//int c = 0;
//	//int i = 0;
//	//while (i < n - 1)
//	//{
//	//	c = a + b;
//	//	a = b;
//	//	b = c;
//	//	i++;
//	//}
//	//cout << a << endl;
//
//	//int i = 1;
//	//int sum = 0;
//	//do
//	//{
//	//	sum += i;
//	//	i++;
//	//} while (i <= 10);
//	//cout << sum << endl;
//
//	//int j = 1;
//	//int r = 0;
//	//while (j <= 10)
//	//{
//	//	r += j;
//	//	j++;
//	//}
//	//cout << r << endl;
//
//	//int r = 0;
//	//int j = 1;
//	//while (j <= 1)
//	//{
//	//	r += j;
//	//	j++;
//	//}
//	//cout << r << endl;
//
//	//int s = 0;
//	//int i = 1;
//	//do
//	//{
//	//	s += i;
//	//	i++;
//	//} while (i <= 1);
//	//cout << s << endl;
//
//	//int a = 1;
//	//int b = 1;
//	//int c = 0;
//	//int n = 0;
//	//cin >> n;
//	//for (int i = 0; i < n - 1; i++)
//	//{
//	//	c = a + b;
//	//	a = b;
//	//	b = c;
//	//}
//	//cout << a << endl;
//
//	//int sum = 0;
//	//for (int i = 1; i <= 100; i++)
//	//{
//	//	if (i > 50)
//	//	{
//	//		break;
//	//	}
//	//	sum += i;
//	//}
//	//cout << sum << endl;
//	//sum = 0;
//	//int i = 1;
//	//while (i <= 100)
//	//{
//	//	if (i > 50)
//	//	{
//	//		break;
//	//	}
//	//	sum += i;
//	//	i++;
//	//}
//	//cout << sum << endl;
//
//	//int sum = 0;
//	//int i = 1;
//	//do
//	//{
//	//	if (i > 50)
//	//	{
//	//		break;
//	//	}
//	//	sum += i;
//	//	i++;
//	//} while (i <= 100);
//	//cout << sum << endl;
//
//	//int sum = 0;
//	//for (int i = 1; i <= 100; i++)
//	//{
//	//	int x = i;
//	//	x += i;
//	//	sum += x;
//	//}
//	//cout << sum << endl;//10100
//
//	//int sum = 0;
//	//for (int i = 1; i <= 100; i++)
//	//{
//	//	int x = i;
//	//	x += i;
//	//	if (i == 50)
//	//	{
//	//		continue;
//	//	}
//	//	sum += x;
//	//}
//	//cout << sum << endl;//10000
//
//	//cout << "=============================================" << endl;
//	//cout << "=============================================" << endl;
//	//for (int i = 2; i <= 100; i++)
//	//{
//	//	bool is_prime = true;
//	//	for (int j = 2; j < i; j++)
//	//	{
//	//		if (i % j == 0)
//	//		{
//	//			is_prime = false;
//	//			break;
//	//		}
//	//	}
//	//	if (is_prime)
//	//		cout << i << " " << endl;
//	//}
//
//	//int n = 0;
//	//scanf("%d", &n);
//	//int k = 0;
//	//for (int i = 0; i < n; i++)
//	//{
//	//	for (int j = 0; j < n; j++)
//	//	{
//	//		printf("%2d ", ++k);
//	//	}
//	//	putchar(10);
//	//}
//
//	//在线OJ中输入数据使用scanf函数的话,判断结束是while (scanf("%d", &n) != EOF) <===> while (~scanf())
//	//使用cin对象的话,判断结束是while (cin>>n) --->读到文件尾cin返回0   xxx!=0 <===> xxx
//
//	//曼哈顿距离问题打印菱形,空心菱形,注意这里的n是奇数
//	//int n = 0;
//	//cin >> n;
//	//int center = n / 2;
//	//for (int i = 0; i < n; i++)
//	//{
//	//	for (int j = 0; j < n; j++)
//	//	{
//	//		if (abs(center - i) + abs(center - j) <= n / 2)
//	//		{
//	//			cout << "*";
//	//		}
//	//		else
//	//		{
//	//			cout << " ";
//	//		}
//	//	}
//	//	cout << endl;
//	//}
//	
//	//int n = 0;
//	//cin >> n;
//	//int center_x = n / 2;
//	//int center_y = n / 2;
//	//for (int i = 0; i < n; i++)
//	//{
//	//	for (int j = 0; j < n; j++)
//	//	{
//	//		if ((abs(center_x - i) + abs(center_y - j)) == (n / 2))
//	//		{
//	//			cout << "*";
//	//		}
//	//		else
//	//		{
//	//			cout << " ";
//	//		}
//	//	}
//	//	cout << endl;
//	//}
//	
//	//*******
//	// *****
//	//  ***
//	//   *
//	//  ***
//	// *****
//	//*******
//	//int n = 0;
//	//cin >> n;
//	//int h1 = n / 2 + 1;
//	//int h2 = n - h1;
//	//for (int i = 0; i < h1; i++)
//	//{
//	//	for (int j = 0; j < i; j++)
//	//	{
//	//		cout << " ";
//	//	}
//	//	for (int j = 0; j < n - i * 2; j++)
//	//	{
//	//		cout << "*";
//	//	}
//	//	cout << endl;
//	//}
//
//	//for (int i = 0; i < h2; i++)
//	//{
//	//	for (int j = 0; j < h2 - 1 - i; j++)
//	//	{
//	//		cout << " ";
//	//	}
//	//	for (int j = 0; j < 2 * i + 3; j++)
//	//	{
//	//		cout << "*";
//	//	}
//	//	cout << endl;
//	//}
//	return 0;
//}
//#include <iostream>
//#include <algorithm>
//#include <cassert>
//using namespace std;
//void Reverse(int* p, int left, int right)
//{
//	assert(p != NULL);
//	while (left < right)
//	{
//		int tmp = p[left];
//		p[left] = p[right];
//		p[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	//int n = 0;
//	//int k = 0;
//	//cin >> n >> k;
//	//int a[100] = { 0 };
//	//for (int i = 0; i < n; i++)
//	//{
//	//	cin >> a[i];
//	//}
//	//reverse(a, a + n);//revere函数在algorithm头文件中,可以逆置数组并且两个参数分别是数组起始位置和数组结束位置的下一个位置
//	//reverse(a, a + k);
//	//reverse(a + k, a + n);
//	//for (int i = 0; i < n; i++)
//	//{
//	//	cout << a[i] << " ";
//	//}
//	//cout << endl;
//
//	//int n = 0;
//	//int k = 0;
//	//cin >> n >> k;
//	//int a[100] = { 0 };
//	//for (int i = 0; i < n; i++)
//	//{
//	//	cin >> a[i];
//	//}
//	//while (k--)//定义法
//	//{
//	//	int tmp = a[n - 1];
//	//	for (int i = n - 2; i >= 0; i--)
//	//	{
//	//		a[i + 1] = a[i];
//	//	}
//	//	a[0] = tmp;
//	//}
//	//for (int i = 0; i < n; i++)
//	//{
//	//	cout << a[i] << " ";
//	//}
//	//cout << endl;
//
//	//int n = 0;
//	//int a[100] = { 0 };
//	//cin >> n;
//	//for (int i = 0; i < n; i++)
//	//{
//	//	cin >> a[i];
//	//}
//	//bool flag = false;
//	//for (int i = 0; i < n - 1; i++)
//	//{
//	//	flag = false;
//	//	for (int j = 0; j < n - 1 - i; j++)
//	//	{
//	//		if (a[j] > a[j + 1])
//	//		{
//	//			flag = true;
//	//			swap(a[j], a[j + 1]);
//	//		}
//	//	}
//	//	if (!flag)
//	//		break;
//	//}
//	//for (int i = 0; i < n; i++)
//	//{
//	//	cout << a[i] << " ";
//	//}
//	//cout << endl;
//
//	//int n = 0;
//	//cin >> n;
//	//int a[100] = { 0 };
//	//for (int i = 0; i < n; i++)
//	//{
//	//	cin >> a[i];
//	//}
//	//int k = 0;
//	//cin >> k;
//	//Reverse(a, 0, n - 1);
//	//Reverse(a, 0, k - 1);
//	//Reverse(a + k, 0, n - 1 - k);
//	//for (int i = 0; i < n; i++)
//	//{
//	//	cout << a[i] << " ";
//	//}
//	//cout << endl;
//
//	//int n = 0;
//	//cin >> n;
//	//int a[100] = { 0 };
//	//for (int i = 0; i < n; i++)
//	//{
//	//	cin >> a[i];
//	//}
//	//for (int i = n - 1; i >= 0; i--)
//	//{
//	//	cout << a[i] << " ";
//	//}
//	//cout << endl;
//	//int n = 0;
//	//cin >> n;
//	//int a[100];
//	//int i = 0;
//	//while (n--)
//	//{
//	//	int t = 0;
//	//	cin >> t;
//	//	a[i++] = t;
//	//}
//	//i--;
//	//while (i >= 0)
//	//{
//	//	cout << a[i] << " ";
//	//	i--;
//	//}
//	//cout << endl;
//
//	//int n = 0;
//	//int f[100] = { 0 };
//	//cin >> n;
//	//f[0] = 0;
//	//f[1] = 1;
//	//if (n <= 1)
//	//{
//	//	cout << n << endl;
//	//}
//	//else
//	//{
//	//	for (int i = 2; i <= n; i++)
//	//	{
//	//		f[i] = f[i - 1] + f[i - 2];
//	//	}
//	//	cout << f[n] << endl;
//	//}
//
//	//int a[3] = { 0, 1, 2 };//数组下标从0开始
//	//cout << a[0] << ' ' << a[1] << ' ' << a[2] << endl;
//	//a[0] = 5;
//	//cout << a[0] << endl;
//
//	//int a[3] = { 0, 1, 2 };//含有3个元素的数组,元素分别是0,1,2
//	//int b[] = { 0, 1, 1 };//维度是3的数组
//	//int c[5] = { 0, 1, 2 };//等价于int c[5] = { 0, 1, 2, 0, 0 };
//	//char d[3] = { 'a', 'b', 'c' };//字符数组的初始化
//	//int a[10] = { 0 };
//	//int b[20] = { 0 };
//	//float f[33];
//	//double d[123];
//	//char c[21];
//	return 0;
//}
//#include <iostream>
//#include <algorithm>
//#include <cmath>
//#include <cstdio>
//using namespace std;
//const double Eps = 1e-6;
//int main()
//{
//
//	//int a = 3;
//	//printf("%.20lf\n", sqrt(3) * sqrt(3));
//	//if (sqrt(3) * sqrt(3) < 3)
//	//{
//	//	cout << "哈哈" << endl;//打印哈哈,但是显然这是错误的
//	//}
//	//if (fabs(sqrt(3) * sqrt(3) - 3) < Eps)
//	//{
//	//	cout << "相等" << endl;//打印相等
//	//}
//	//else if (sqrt(3) * sqrt(3) > Eps + 3)
//	//{
//	//	cout << "大于" << endl;
//	//}
//	//else
//	//{
//	//	cout << "小于" << endl;
//	//}
//	//double x = 1.2345678987654321;
//	//double y = x * x;
//	//double z = sqrt(y);
//	//if (fabs(x - z) < Eps)//浮点数x和z之间的差值绝对值小于1e-6时,我们认为这两个浮点数相等
//	//{
//	//	cout << "x == z" << endl;
//	//}
//	//else if (x < z - Eps)
//	//{
//	//	cout << "x < z" << endl;
//	//}
//	//else
//	//{
//	//	cout << "x > z" << endl;
//	//}
//	//printf("%.20lf\n", x);
//	//printf("%.20lf\n", z);
//
//
//	//int b[3][4] = { { 0, 1, 2, 3 },//整体来看有三个元素,每个元素都是有4个整型元素的数组 
//	//{ 4, 5 ,6, 7 },//第一行,第二行,第三行初始化和初始值
//	//{ 8, 9, 10, 11 } };
//
//
//	//二维数组本质就是一维数组,只不过一维数组的每个元素又是一个以为数组而已
//	//int a[3][4];//有3个元素的数组,每个元素是一个有4个整型元素的数组
//	//int arr[10][20][30] = { 0 };//多维数组,将所有元素初始化为0,arr是一个有10个元素的数组,每个元素是一个有20个元素的数组,这个数组每个元素有30个整型元素
//
//	//int n = 0;
//	//cin >> n;
//	//int a[100];
//	//for (int i = 0; i < n; i++)
//	//{
//	//	cin >> a[i];
//	//}
//	//for (int i = 0; i < n - 1; i++)
//	//{
//	//	for (int j = i + 1; j < n; j++)
//	//	{
//	//		if (a[i] > a[j])
//	//		{
//	//			swap(a[i], a[j]);
//	//		}
//	//	}
//	//}
//	//for (int i = 0; i < n; i++)
//	//{
//	//	cout << a[i] << " ";
//	//}
//	//cout << endl;
//	//int n = 0;
//	//cin >> n;
//	//while (n--)
//	//{
//	//	int num = 0;
//	//	cin >> num;
//	//	int s = 0;
//	//	int tmp = (int)(sqrt(num) + 0.000002);
//	//	for (int i = 1; i <= tmp; i++)
//	//	{
//	//		int y = num / i;
//	//		if (num % i == 0)
//	//		{
//	//			if (i < num)
//	//			{
//	//				s += i;
//	//			}
//	//			if (y < num && y != tmp)
//	//			{
//	//				s += y;
//	//			}
//	//		}
//	//	}
//	//	if (num == s)
//	//	{
//	//		printf("%d is perfect\n", num);
//	//	}
//	//	else
//	//	{
//	//		printf("%d is not perfect\n", num);
//	//	}
//	//}
//	return 0;
//}
//#include <iostream>
//#include <algorithm>
//#include <cstdio>
//#include <cmath>
//#pragma warning(disable:6262)
//using namespace std;
//const int N = 5000;
//////问题:求2^n是多少,其中n<=10000,高精度乘法2的N次方
//////分析:2^10000就是10000个2相乘,10个2相乘是1024即10^3,1000个(10个2相乘)就是1000个10^3相乘,即10^3000+,所以这题结果最少3000位数,故任意一种C++内置类型都存储不下这个数,此时要用到高精度运算,利用数组存储这个很大的数据,当然利用数组进行高进度运算时,如果是算+-*由于会有进位借位问题我们一般把大数的个位放在数组的首元素空间中,把大数的高位放在数组的尾元素空间中,如果是出发我们一般把高位放在首元素空间中,个位放在尾元素空间中
//int main()
//{
//	int n = 0;
//	cin >> n;
//	int a[N] = { 1 };
//	int size = 1;//fir表示当前有多少位数
//	for (int i = 0; i < n; i++)
//	{
//		int carry = 0;
//		for (int j = 0; j < size; j++)
//		{
//			carry = carry + a[j] * 2;
//			a[j] = carry % 10;
//			carry /= 10;
//		}
//		if (carry)
//		{
//			a[size++] = 1;
//		}
//	}
//	for (int i = size - 1; i >= 0; i--)
//	{
//		cout << a[i];
//	}
//	cout << endl;
//	return 0;
//}
//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <cmath>
//#include <cstring>
//
//using namespace std;
//int main()
//{
//	//int a[10];
//	//int b[10];
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	a[i] = i;
//	//}
//	//memcpy(b, a, sizeof(a));
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	cout << a[i] << " " << b[i] << endl;
//	//}
//
//	//int a[10];
//	//int b[10];
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	a[i] = i;
//	//}
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	b[i] = a[i];
//	//}
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	cout << a[i] << " ";
//	//}
//	//cout << endl;
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	cout << b[i] << " ";
//	//}
//	//cout << endl;
//
//
//	//int a[10];
//	//int b[10];
//	//memset(a, 0, 10 * sizeof(int));//memset函数按字节进行初始化,这里每个字节设置为0,共10*sizeof(int)个字节
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	cout << a[i] << " ";
//	//}
//	//cout << endl;
//	//memset(b, -1, 10 * sizeof(int));
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	cout << b[i] << " ";
//	//}//打印的全是16843009,即0x01010101
//	//cout << endl;
//
//	////memset(a, 0, sizeof(int) * 10);//memset函数在cstring库中
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	a[i] = 0;
//	//}
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	cout << a[i] << " ";
//	//}
//	//cout << endl;
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	cout << b[i] << " ";
//	//}
//	//cout << endl;
//
//	//int a[3][4] = {
//	//	{ 1, 2, 3, 4 },
//	//	{ 2, 2, 3, 4 },
//	//	{ 3, 2, 3, 4 }
//	//};
//	//for (int i = 0; i < 3; i++)
//	//{
//	//	for (int j = 0; j < 4; j++)
//	//	{
//	//		cout << a[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//
//	//int a[1] = { 0 };
//	//int arr[1][1][1][1][1][1][1][1][1] = { 0 };
//	//cout << arr[0][0][0][0][0][0][0][0][0] << endl;//ok
//
//	//int a[3][4] = { 0 };
//	//for (int i = 0; i < 3; i++)
//	//{
//	//	for (int j = 0; j < 4; j++)
//	//	{
//	//		a[i][j] = i + j;
//	//	}
//	//}
//	//for (int i = 0; i < 3; i++)
//	//{
//	//	for (int j = 0; j < 4; j++)
//	//	{
//	//		cout << a[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//	return 0;
//}
//#include <cstring>
//#include <iostream>
//#include <algorithm>
//#include <cstdio>
//#pragma warning(disable:6031)
//using namespace std;
//int main()
//{
//	//每个计算机常用字符都对应一个0~127的数字,两者是一一对应关系,且可以相互转换,对应ASSCII码表
//	//常用ASSCII值:A-Z是65-90,a-z是97-122,0~9是48~57,字符可以参与运算,运算时会自动转化为整型,整型提升
//	//char c = 'a';
//	//cout << c << endl;//a
//	//cout << (int)c << endl;//97
//	//cout << (char)97 << endl;//a
//
//	//int a = 66;
//	//cout << a << endl;//66
//	//cout << (char)a << endl;//B
//
//	//for (int i = 0; i < 128; i++)
//	//{
//	//	printf("%d: %c\n", i, (char)i);
//	//}
//
//	//cout << 'b' - 'a' << endl;//98-97=1,字符减字符发生整型提升结果自动转化为int类型
//	//cout << 'z' - 'a' << endl;//25
//	//cout << (char)('a' + 3) << endl;//d
//
//	//int a = 'B' - 'A';
//	//int b = 'A' * 'B';
//	//char c = 'A' + 2;
//	//cout << a << endl;//1
//	//cout << b << endl;//4290
//	//cout << c << endl;//C
//
//	//int cn = 0;
//	//int ca = 0;
//	//char ch = 0;
//	//while (cin >> ch)//控制台中输入EOF即ctrl+z键即可停止输入(cin读取到文件末尾EOF返回false导致循环结束)
//	//{
//	//	if (ch <= '9' && ch >= '0')
//	//	{
//	//		cn++;
//	//	}
//	//	if (ch <= 'z' && ch >= 'a' || ch <= 'Z' && ch >= 'A')
//	//	{
//	//		ca++;
//	//	}
//	//}
//	//cout << cn << endl;
//	//cout << ca << endl;
//
//	//字符数组	字符串就是字符数组加上结束符'\0',可以用字符串来初始化字符数组,但此时要注意每个字符串结尾会暗含一个'\0'字符,因此字符数组的长度至少要比字符串的长度多1,否则字符数组中放不下字符串
//
//	//char a1[] = { 'C', '+', '+' };//列表初始化,没有结束字符
//	//char a2[] = { 'C', '+', '+', '\0' };//列表初始化,含有显示的结束字符
//	//char a3[] = "C++";//自动添加表示字符串结尾的结束字符
//	//cout << a1 << endl;//C++乱码
//	//cout << a2 << endl;//C++
//	//cout << a3 << endl;//C++
//	//printf("%s\n", a1);//C++乱码
//	//printf("%s\n", a2);//C++
//	//printf("%s\n", a3);//C++
//	//cout << sizeof(a3) << endl;//4
//	//char a4[6] = "Daniel";//错误:没有空间可以存放空字符,数组6个元素,而字符串有7个元素
//
//	//string底层实现也是用字符数组实现的
//
//	//const char* p = "ABCD";
//	//cout << sizeof(p) << endl;//4/8
//
//	//char a[] = { 'A', 'B', 'C', '\0' };
//	//char b[] = "ABCDEFG";
//	//cout << a + 1 << endl;//BC
//	//cout << b + 2 << endl;//CDEFG
//
//	//char s[100];
//	////scanf("%s", s);//scanf函数输入字符串时遇到空格就只输入空格前的字符串到数组中
//	////cout << s << endl;//gets函数可以解决这个问题,但是gets不安全,已经被最新版本C++去除掉了,最好使用fgets函数
//	//cin >> s;//cin输入字符串时,遇到空格或回车就会停止
//	//cout << s;
//
//	//char s[100] = "";
//	//cin >> s + 1;//输入abcd
//	//cout << s + 1 << endl;//输出abcd
//	//cout << s[1] << endl;//输出a
//
//	char s[100] = "";
//	//fgets(s, 100 - 1, stdin);//最多输入99个字符(留一个放'\0',保证输入的是一个合法的字符串),stdin是标准输入流文件,即键盘
//	//有了fgets函数以后,就可以输入一整行有空格的字符串到字符数组中了
//	cin.getline(s, 100);
//	cout << s << endl;
//	return 0;
//}
//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <string>
//#include <cassert>
//#pragma warning(disable:6031)
//using namespace std;
//size_t my_strlen(const char* str)
//{
//	assert(str != NULL);
//	size_t len = 0;
//	while (*str)
//	{
//		str++;
//		len++;
//	}
//	return len;
//}
//size_t _my_strlen(const char* str)
//{
//	assert(str != NULL);
//	const char* eos = str;
//	while (*eos++)
//	{
//		;
//	}
//	return size_t(eos - str - 1);
//}
//size_t MyStrlen(const char* str)
//{
//	assert(str != NULL);
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return (1 + MyStrlen(1 + str));
//	}
//}
//int main()
//{
//	//cout << MyStrlen("abc") << " " << MyStrlen("") << endl;//3,0
//
//	//char s1[100] = "";
//	//char s2[100] = "";
//	//scanf("%s", s1);
//	//strcpy(s2, s1);
//	//cout << s1 << endl;
//	//cout << s2 << endl;
//
//	//char s1[100] = "";
//	//char s2[100] = "";
//	//scanf("%s", s1);
//	//cout << strcmp(s1, "abc") << endl;
//
//	//char s1[100] = "";
//	//char s2[100] = "";
//	//scanf("%s%s", s1, s2);
//	//cout << strcmp(s1, s2) << endl;//string compare
//
//	//char s[100] = "";
//	//scanf("%s", s);
//	//cout << strlen(s) << endl;//3
//
//	//char s[100] = "hello world!";//遍历字符数组中的字符
//	//int len = (int)strlen(s);
//	//for (int i = 0; i < len; i++)
//	//{
//	//	cout << s[i] << endl;
//	//}
//
//	//字符数组的常用操作,下面几个函数需引入<cstring>头文件
//	//strlen(str);求字符串长度,string length
//	//strcmp(s1, s2),比较大小,s1 < s2返回值小于0,s1==s2返回值==0,a>b返回值大于0,这里的比较方式是字典序
//	//strcpy(dest, src);将src字符串拷贝到从dest开始的字符数组中
//	//char s1[100] = "hello world!";
//	//char s2[100] = "";
//	//cout << strcpy(s2, s1) << endl;
//	//cout << s2 << endl;
//	//cout << strcmp(s1, s2) << endl;//0
//
//	//char s[100] = "";
//	////scanf("%s", s);
//	////gets()这个函数被淘汰了
//	////fgets(s, 100 - 1, stdin);//从标准输入流(键盘)输入99个字符到s字符数组中,保证最后s中保存的是一个字符串,这样的方法可以读入带有空格的字符串
//	//cin.getline(s, 99);//使用istream类的getline方法实现读入带有空格的字符串
//	//cout << s << endl;
//
//	//string str;
//	//getline(cin, str);//string类型的str,只能用getline函数读入
//	//cout << str << endl;
//	//puts(str);//err
//
//	//char s[100] = "";
//	//scanf("%s", s);
//	//cin >> s;
//	//scanf("%s", s + 1);
//	//cout << s + 1 << endl;
//	//cin >> s + 1;
//	//cout << s << endl;
//	//printf("%s\n", s);
//	//printf("%s\n", s + 1);
//	//printf("%s\n", s + 2);
//	//cout << s + 2 << endl;
//	return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	//string s;
//	//cin >> s;
//	//cout << s << endl;
//	//printf("%s\n", s.c_str());
//	//puts(s.c_str());
//
//	//string s;
//	//cin >> s;
//	//for (char& ch : s)
//	//{
//	//	if (ch == 'z')
//	//	{
//	//		ch = 'a';
//	//	}
//	//	else
//	//	{
//	//		ch = ch + 1;
//	//	}
//	//}
//	//cout << s << endl;
//
//	//char str[1024] = "";
//	//scanf("%s", str);
//	//for (int i = 0; str[i]; i++)
//	//{
//	//	if (str[i] == 'z')
//	//	{
//	//		str[i] = 'a';
//	//	}
//	//	else
//	//	{
//	//		str[i] += 1;
//	//	}
//	//}
//	//cout << str;
//
//	//string s = "hello world";//基于范围的for语句:
//	//for (char c : s)
//	//{
//	//	cout << c << endl;
//	//}
//	//cout << endl;
//	//for (char& c : s)
//	//{
//	//	c = 'a';
//	//	cout << c;
//	//}
//	//cout << endl;
//	//cout << s << endl;
//
//	//string s = "hello world";//处理string对象中的字符时,可以将string对象当成字符数组来处理
//	//for (int i = 0; i < s.size(); i++)//s.size()这个成员函数时间复杂度是O(1),因为string类中专门存储了这个变量
//	//{
//	//	cout << s[i] << "-";//从结果看,string字符串没有在字符串结尾存储\0
//	//}
//
//	//string s1 = "hello, ";
//	//string s2 = "world\n";
//	//cout << s1 << endl << s2 << endl;
//	//string s3 = s1 + s2;//s3的内容是 hello, world\n
//	//cout << s3 << endl;//打印 hello, world\n
//	//s1 += s2;//两个string对象相加
//	//cout << s1 << endl;//打印 hello, world\n
//
//	//字面值和string对象相加
//	//做加法运算时,字面值和字符都会被转化成string对象,因此直接相加就是将这些字面值串联拼接起来
//	//string s1 = "hello";
//	//string s2 = "world";
//	//string s3 = s1 + "," + s2 + '\n';//当把string对象和字符字面值及字符串字面值混在一条语句中使用时,必须确保每个加法运算符的两侧运算对象至少有一个是string:
//	//cout << s1 << endl << s2 << endl << s3 << endl;
//	//string s4 = s1 + ",";//正确,把一个string对象和有一个字面值相加
//	//string s5 = "hello" + ",";//错误,两个运算对象都不是string
//	//string s6 = s1 + "," + "world";//正确,每个加法运算都有一个对象是string
//	//string s7 = "hello" + "," + s2;//错误,不能把字面值直接相加,运算是从左到右
//
//	//string s1(10, 'c');//s1的内容是cccccccccc
//	//string s2;//s2是一个空字符串
//	//s1 = s2;//为string对象赋值,用s2的副本替换s1的副本,此时s1和s2都是空字符串
//
//	//string支持> < >= <= == !=等所有比较操作,按字典序进行比较
//
//	//string的empty和size方法(注意size是无符号整数,因此s.size() <= -1一定成立即s.size()<=4294967295)
//	//string s1;
//	//string s2 = "abc";
//	//cout << s1.empty() << endl;//1
//	//cout << s2.empty() << endl;//0
//	//cout << s1.size() << endl;//0
//	//cout << s2.size() << endl;//3
//	//注意:strlen函数时间复杂度是O(N),s1.size()这个成员函数时间复杂度是O(1),两者功能相似,但是因为string类中专门存储了字符串的长度所以效率高于strlen
//
//	//string s1, s2;
//	//cin >> s1 >> s2;
//	//cout << s1 << endl << s2 << endl;//注意不能使用printf直接输出string,需要写成printf("%s", s.c_str);
//
//	//使用getline读取一整行,包括有空格间隔的
//	//string s;
//	//getline(cin, s);//注意不能使用scanf函数来读取string,cin读取遇到空格结束读取,这里使用getline函数来进行读取
//	//cout << s << endl;
//
//	//string s1;//默认初始化,s1是一个空字符串
//	//string s2 = s1;//s2是s1的副本
//	//string s3 = "hiya";//s3是该字符串字面值的副本
//	//string s4(10, 'c');//s4的内容是 cccccccccc
//	//cout << s1 << endl;//空串打印
//	//cout << s2 << endl;//空串打印
//	//cout << s3 << endl;//打印hiya
//	//cout << s4 << endl;//打印cccccccccc
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int fact(int);//函数的声明
////函数的定义
//int fact(int n)//函数的名字是fact,它作用于一个整型参数,返回一个整型值,return语句负责结束fact函数并返回ret的值
//{//void float double short char int long long long  long double
//	int ret = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//void foo()
//{
//	cout << "Hello World!" << endl;
//}
//void output(void)
//{
//	cout << "Hello World!" << endl;
//}
//int main()
//{
//	//一个典型的函数定义包括以下部分:返回类型,函数名,由0个或多个形参组成的参数列表以及函数体
//	int res = fact(5);
//	cout << "5! is " << res << endl;//120
//	output();
//	//函数的调用完成两项工作,一是用实参初始化函数对应的形参,二是将控制权转移给被调用函数,此时,主调函数的执行被暂时终端,被调函数开始执行
//	//foo();
//	return 0;
//}
//#include <iostream>
//#include <cassert>
//using namespace std;
//void output(void)
//{
//	int cnt = 0;
//	cnt++;
//	cout << "call: " << cnt << " times." << endl;
//}
//void Test1()
//{
//	output();
//	output();
//	output();
//	output();
//	output();
//}
//void f(int x)
//{
//	x = 5;
//}
//void t(int& ra)
//{
//	ra = 5;
//}
//void print(int arr[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//void Print(int(*ar)[10], int row)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			cout << ar[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//void MySwap(int& v1, int& v2)
//{
//	if (v1 == v2)//如果两个值相等,则不需要交换,直接退出
//		return;
//	//如果程序执行到了这里,说明还需要继续完成某些功能
//	int tmp = v2;
//	v2 = v2;
//	v1 = tmp;//此时无需写出显示的return语句
//}
//int MyMax(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//int fact(int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return (n * fact(n - 1));
//	}
//}
//int main()
//{
//	//Test1();
//
//	//参数传递
//	//int x = 10;
//	//f(x);//传值参数,当初始化一个非引用类型的变量时,初始值被拷贝给变量,此时对变量的改动不会影响初始值
//	//cout << x << endl;//10
//
//	//int a = 10;
//	//t(a);//传引用参数,当函数的形参为引用类型时,对形参的修改会影响实参的值,使用引用的作用时避免拷贝,让函数返回额外信息
//	//cout << a << endl;//5
//
//	//int arr[10] = { 0 };//数组形参,在函数中对数组中的值修改,会影响到函数外面的数组
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	arr[i] = i;
//	//}
//	//print(arr, (int)(sizeof(arr) / sizeof(arr[0])));
//
//	//int ar[10][10] = { 0 };
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	for (int j = 0; j < 10; j++)
//	//	{
//	//		ar[i][j] = j;
//	//	}
//	//}
//	//Print(ar, (int)(sizeof(ar) / sizeof(ar[0])));
//
//	//返回类型和return语句,return语句终止当前正在执行的函数并将控制权返回到调用该函数的地方,
//	//return语句有两种形式,1.return;		2.return expression;
//	//1.无返回值函数,没有返回值的return语句只能用在返回类型是void的函数中,返回void的函数不要求非得有return语句,因为在这类函数的最后一句后面会隐式地执行return,通常情况下,void函数如果想在它中间位置提前退出可以使用return语句,return的这种用法有点类似于我们用break语句退出循环
//	//2.有返回值的函数,只要函数的返回类型不是void,则该函数内的每条return语句必须返回一个值,return语句返回值的类型必须与函数的返回类型相同,或者能隐式地转换成函数的返回类型
//	//int x = 0;
//	//int y = 0;
//	//cin >> x >> y;
//	//cout << MyMax(x, y) << endl;
//
//	//函数递归,在一个函数内部,也可以调用给你函数本身
//	//int n = 0;
//	//cin >> n;
//	//cout << fact(n) << endl;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//const int N = 1000010;
//class Person
//{
//private:
//	int age;
//	int height;
//	double money;
//	string books[100];
//public:
//	string name;
//	void say()
//	{
//		cout << "I'm " << name << endl;
//	}
//	int set_age(int a)
//	{
//		age = a;
//		return age;
//	}
//	int get_age()
//	{
//		return age;
//	}
//	void add_money(double x)
//	{
//		money += x;
//	}
//} person_a, person_b, persons[100];
//int main()
//{
//	//类可以将变量,数组和函数完美地打包在一起
//	//类中的变量和函数被统一称为类的成员变量,private后面的内容是私有成员变量,在类的外部不能访问,public后面的内容是公有成员变量,在类的外部可以访问
//	Person c;
//	c.name = "tzh";//正确,访问的公有变量
//	//c.age = 18;//错误,访问的私有变量
//	c.set_age(18);//正确,set_age()是公有成员函数,可以被访问
//	c.add_money(100);
//	c.say();
//	cout << c.get_age() << endl;//18
//
//	//结构体和类的作用是一样的,不同点在于类默认是private,结构体因为要与C语言兼容,所以默认是public
//	return 0;
//}
//#include <iostream>
//using namespace std;
//const int N = 10000;
//struct Node
//{
//	int _val;
//	Node* _next;
//} *head;
//void Test()
//{
//	//链表
//	for (int i = 1; i <= 5; i++)
//	{
//		Node* p = new Node();
//		p->_val = i;
//		p->_next = head;
//		head = p;
//	}
//	for (Node* p = head; p != NULL; p = p->_next)
//		cout << p->_val << ' ';//打印5 4 3 2 1
//	cout << endl;
//}
//int main()
//{
//	//指针和引用,指针指向存放变量的空间的地址,因此我们可以通过指针来修改变量的值
//	//int a = 10;
//	//int* p = &a;
//	//*p += 5;
//	//cout << *p << endl;//15
//
//	//数组名是一种特殊的指针,指针也可以做运算
//	//int a[5] = { 1, 2, 3, 4, 5 };
//	//for (int i = 0; i < 5; i++)	cout << *(a + i) << endl;
//
//	//引用和指针类似,相当于给变量起了个别名
//	//int a = 10;
//	//int& ra = a;
//	//ra += 5;
//	//cout << ra << endl;//15
//
//	Test();
//	return 0;
//}
//STL是提高C++编写效率的一个利器,vector,string等是容器,存储数据的数据结构,可以理解为动态数组
//#include <vector>
//#include <iostream>
//using namespace std;
////vector是变长数组,支持随机访问,不支持在任意位置插入O(1)删除(那样想了太低了,vector本质就是顺序表,而顺序表任意位置插入删除时间复杂度O(N)效率太低),为了保证效率,元素的增删一般应该在末尾进行
////声明#include <vector>头文件
//int main()
//{
//	//vector<int> a;//相当于一个长度动态变化的int数组
//	//vector<int> b[233];//相当于第一维长233,第二维长度动态变化的int数组
//	//struct rec
//	//{
//	//	int a[100];
//	//	char ch;
//	//	double d;
//	//};
//	//vector<rec> c;//ok,自定义的结构体类型也可以保存在vector中
//
//	//size/empty	size函数返回的是vector的实际长度(包含的元素个数),empty函数返回一个bool类型,表明vector是否为空,两者的时间复杂度都是O(1),所有的STL容器都支持这两个方法,含义也相同,之后我们就不再重复给出了		a.size();/a.empty();
//	//clear	clear函数把vector清空		a.clear();删除以后数组中有0个元素	时间复杂度是O(1)
//	//迭代器	迭代器就像STL容器的"指针",可以用星号"*"操作符解除引用,一个保存int的vector的迭代器声明方法为:vector<int>::iterator it;		vector的迭代器是"随机访问迭代器",可以把vector的迭代器与一个整数相加减,其行为与指针的移动类似,可以把vector的两个迭代器相减,其结果也和指针相减类似,得到两个迭代器对应下标之间的距离
//	//begin/end		begin函数返回指向vector中第一个元素的迭代器,例如a是一个非空的vector,则*a.begin()与a[0]的作用相同,所有容器都可以视做一个前闭后开的结构,end函数返回vector的尾部,即第n个元素再往后的"边界",*a.end()与a[n]都是越界访问,其中n = a.size();	下面两份代码都遍历了vector<int> a,并输出它的所有元素.  for (int i = 0; i < a.size(); i++)  cout << a[i]<< endl;	for (vector<int>::iterator it = a.begin(); it != a.end(); it++)	cout << *it << endl;
//	//front/back		front函数返回vector的第一个元素,等价于*a.begin()和a[0]	back函数返回vector的最后一个元素,等价于*--a.end()和a[a.size() - 1]	a.front()==a[0]==*a.begin()			a.back()==a[a.size() - 1]==*--a.end()
//	//push_back() 和 pop_back()		a.push_back(x)--->把元素x插入到vector a的尾部	b.pop_back()删除vector a的最后一个元素
//	return 0;
//}
//#include <vector>
//#include <iostream>
//using namespace std;
//int main()
//{
//	vector<int> a{ 1, 2, 3 };
//	//vector<int> a({ 1, 2, 3 });
//	//vector<int> a = { 1, 2, 3 };
//	//cout << a[0] << ' ' << *a.begin() << endl;//1 1
//
//	//for (int i = 0; i < (int)a.size(); i++)
//	//	cout << a[i] << ' ';
//	//cout << endl;
//	//for (vector<int>::iterator it = a.begin(); it < a.end(); it++)
//	//	cout << *it << ' ';
//	//cout << endl;
//	//for (auto it = a.begin(); it != a.end(); it++)//auto的典型应用场景
//	//	cout << *it << ' ';
//	//cout << endl;
//
//	//for (int x : a)//范围for遍历
//	//	cout << x << ' ';
//	//cout << endl;
//
//	cout << a.front() << ' ' << a[0] << ' ' << *a.begin() << endl;//1 1 1
//	cout << a.back() << ' ' << a[a.size() - 1] << ' ' << *--a.end() << endl;//3 3 3
//	a.push_back(4);//push_back的时间复杂度是O(1),在数组尾部插入数据4
//	for (auto x : a)	cout << x << ' ';
//	cout << endl;
//	a.pop_back();//pop_back的时间复杂度是O(1),在数组尾部删除一个数据
//	a.pop_back();
//	a.pop_back();
//	a.pop_back();
//	//a.pop_back();//删到没有元素之后再进行删除回发生崩溃
//	for (auto x : a)	cout << x << ' ';
//	cout << endl;
//	return 0;
//}
//#include <iostream>
//#include <vector>
//#include <queue>//头文件queue主要包括循环队列queue和优先队列priority_queue两个容器
//using namespace std;
//int main()
//{
//	//queue<int>	q;//队列
//	//struct Rec
//	//{
//	//	int x;
//	//	int y;
//	//};
//	//queue<Rec> qq;
//
//	//struct Rec
//	//{
//	//	int x;
//	//	int y;
//	//	bool operator<(const Rec& t)
//	//	{
//	//		return x < t.x;
//	//	}
//	//};
//	////注意:在结构体Rec为元素的默认优先队列中必须重载小于号(因为默认优先队列是大根堆),否则重载大于号
//	//priority_queue<Rec> qr;
//	//qr.push({3, 3});
//
//	////优先队列默认是大根堆
//	//priority_queue<int> q;//大根堆
//	//priority_queue<int, vector<int>, greater<int>> p;//小根堆
//	//priority_queue<pair<int, int>>	qqq;
//
//	//循环队列queue	push从队尾插入	pop从队头弹出		front返回队头元素		back返回队尾元素
//	//优先队列priority_queue	push把元素插入堆,pop删除堆顶元素,top查询堆顶元素(最大值)
//
//
//	//queue<int>	q;
//	//q.push(1);//从队尾插入
//	//q.push(2);//从队尾插入
//	//cout << q.front() << endl;//返回队头元素
//	//q.pop();//从队头弹出
//	//cout << q.back() << endl;//返回队尾
//
//	priority_queue<int>	q;//优先级队列,默认是大根堆
//	q.push(1);//插入一个数
//	q.push(13);//插入一个数
//	q.push(3);//插入一个数
//	cout << q.top() << endl;//取出最大值
//	q.pop();//删除最大值
//	cout << q.top() << endl;
//
//	//q.clear();//err:注意queue类中没有clear成员函数
//	//注意:queue		priority_queue		stack	这三个容器类中都没有clear成员函数,除此以外其他STL容器类中都有clear成员函数
//	q = priority_queue<int>();//对q优先级队列进行清空数据
//	return 0;
//}
//#include <iostream>
//#include <stack>
//#include <deque>
//using namespace std;
//int main()
//{
//	//stack类容器中也是没有clear成员函数	栈是FILO	LIFO	队列是FIFO	LILO
//	stack<int> s;
//	s.push(1);
//	s.push(2);
//	s.push(3);
//	s.push(4);
//	s.push(5);
//	while (!s.empty())
//	{
//		cout << s.top() << endl;
//		s.pop();
//	}
//	cout << "Stack Empty!" << endl;
//
//	//双端队列deque是一个支持在两端高效插入或删除元素的连续线性存储空间,他就像是vector和queue的结合,与vector相比,deque在头部增删元素仅需要O(1)的时间复杂度,与queue相比,deque像数组一样支持随机访问
//	//下标访问[]--->支持随机访问
//	//begin/end返回deque的头/尾迭代器
//	//front/back队头队尾元素
//	//push_back从队尾入队		push_front从队头入队
//	//pop_back从队尾出队		pop_front从队头出队		clear清空队列
//	//注意deque看起来很好用,但是实际上deque的效率比vector,queue,stack低很多,它的常数系数比较大
//	deque<int>	deq;
//	deq.push_back(1);
//	deq.push_back(12);
//	deq.push_back(13);
//	deq.push_back(14);
//	deq.push_front(4);
//	deq.push_front(3);
//	deq.push_front(2);
//	deq.push_front(1);
//	cout << deq.front() << endl;//1
//	cout << deq.back() << endl;//14
//	deq.pop_front();
//	deq.pop_back();
//	cout << deq.front() << endl;//2
//	cout << deq.back() << endl;//13
//	deq.clear();//清空deque中的数据
//	//for (auto d : deq)
//	//{
//	//	cout << d << ' ';
//	//}
//	//cout << endl;
//	//for (int d : deq)
//	//{
//	//	cout << d << ' ';
//	//}
//	//cout << endl;
//	//for (int i = 0; i < (int)deq.size(); i++)	cout << deq[i] << ' ';	cout << endl;
//	//for (deque<int>::iterator dit = deq.begin(); dit != deq.end(); dit++)	cout << *dit << ' ';
//	//cout << endl;
//	return 0;
//}
//#include <iostream>
//#include <set>
////头文件set主要包括set和multiset两个容器,分别是"有序集合"和"有序多重集合",即前者的元素不能重复,而后者可以包含若干个相等的元素,set和multiset的内部实现是一棵红黑树,他们支持的函数基本相同
//using namespace std;
//int main()
//{
//	set<int> s;//声明
//	struct rec
//	{
//		int x;
//		int y;
//		bool operator<(const rec& r)	const
//		{
//			return x < r.x;
//		}
//	};
//	set<rec> s;//结构体rec中必须重载小于号
//	multiset<double> se;
//	//size/empty/clear与vector类似
//	//迭代器		set和multiset的迭代器称为"双向访问迭代器",即不支持"随机访问",支持星号(*)解除引用,仅支持"++"和"--"两个与算数相关的操作		设it是一个迭代器,例如set<int>::iterator it;若把it++,则it会指向"下一个"元素,这里的"下一个"元素是指在元素从小到大排序结果中,排在it下一名的元素,同理,若把it--,则it将会指向排在"上一个"的元素
//	//begin/end返回集合的首尾迭代器,时间复杂度均是O(1)	s.begin()是指向集合中最小元素的迭代器,s.end()是指向集合中最大元素的下一个位置的迭代器,换言之就像vector一样,是一个"前闭后开"的形式,因此--s.end()是指向集合中最大元素的迭代器,*--s.end()即为集合中最大元素
//	//insert	s.insert(x)把一个元素x插入到集合s中,时间复杂度是O(logN)	在set中若元素已经存在,则不会重复插入该元素,对集合状态无影响
//	//find		s.find(x)在集合s中查找等于x的元素,并返回指向该元素的迭代器,若不存在则返回s.end(),时间复杂度为O(logN)	if (s.find(x) != a.end(x))可以用来判断x在s中是否存在,若成立则存在,否则不存在
//	//lower_bound/upper_bound	这两个函数的用法与find类似,但是查找的条件略有不同,时间复杂度O(logN)			s.lower_bound(x)查找大于等于x的元素中最小的一个,并返回指向该元素的迭代器	易错						s.upper_bound(x)查找大于x的元素中最小的一个,并返回指向该元素的迭代器		易错
//	//erase		设it是一个迭代器,s.erase(it)从s中删除迭代器it指向的元素,时间复杂度为O(logN),设x是一个元素,s.erase(x)从s中删除所有等于x的元素,时间复杂度为O(k+logN),其中k是被删除的元素个数
//	//count		s.count(x)返回集合s中等于x的元素个数,时间复杂度为O(k+logN),其中k为元素x的个数
//	return 0;
//}
//#include <map>
//#include <vector>
//#include <iostream>
//#include <unordered_set>//无序的set
//#include <unordered_map>//无序的map
//using namespace std;
//int main()
//{
//	//map容器是一个键值对key-value的映射,其内部实现是一棵以key为关键码的红黑树	Map的key和value可以是任意类型,其中key必须定义小于号运算符重载
//	
//	//声明:	map<key_type, value_type> name;	eg.
//	//map<long, long, bool> vis;
//	//map<string, int> hash;
//	//map<pair<int, int>, vector<int>> test;
//	//size/empty/clear/begin/end均与set类似
//	//insert/erase与set类似,但其参数均是pair<key_type, value_type>
//	//find	h.find(x)在变量名为h的map中查找key为x的二元组
//	//[]操作符,h[key]返回key映射的value的引用,时间复杂度O(logN)	[]操作符是map最吸引人的地方	我们可以很方便的通过h[key]来得到key对应的value,还可以对h[key]进行赋值操作,改变key对应的value
//
//	//map<int, int> a;
//	//a[1] = 2;
//	//a[1000000] = 3;
//	//cout << a[1000000] << endl;
//
//	//map<string, int> a;
//	//a["tzh"] = 3;
//	//a["yxc"] = 5;
//	//cout << a["tzh"] << endl;//3
//	//cout << a["yxc"] << endl;//5
//
//	//map<string, vector<int>> a;
//	//a["yxc"] = vector<int>();
//	//cout << a["yxc"].size() << endl;//0
//
//	//map<string, vector<int>> a;
//	////a.insert({ "a", {} });
//	//a["yxc"] = vector<int>({ 1, 2, 3, 4 });
//	//cout << a["yxc"][2] << endl;//3
//	//cout << a["yxc"].size() << endl;//4
//	//cout << (a.find("yxc") == a.begin()) << endl;//1
//
//	//unordered_set<int>	S;//底层实现是哈希表,且不能存储重复元素	与set用法完全一样,只不过因为是无序所以不能支持二分,没有lower_bound和upper_bound这两个函数,其他的类似查找之类的函数时间复杂度都是O(1)效率比set的O(logN)高,
//	//unordered_multiset<int>	K;//底层实现是哈希表,且可以存储重复元素
//
//	//unordered_map<int, int> a;//底层实现是哈希表,且不能有重复的元素,缺点是不能用来做二分(一般不用map做二分),优点是各项操作时间复杂度O(1)比map的时间复杂度O(logN)效率高
//	//unordered_multimap<int, int> b;//底层实现是哈希表,且可以有重复的元素
//	return 0;
//}
//#include <bitset>//位运算用的
//#include <iostream>
//using namespace std;
//int main()
//{
//	//bitset<1000> a;
//	//bitset<1000> b;
//	//a[0] = 1;//1000个2进制位中没有赋值的位就是0
//	//a[1] = 1;
//	//a[2] = 1;
//	//cout << a[0] << endl;//1
//	//cout << a[10] << endl;//0
//	//cout << a.count() << endl;//3	a.count()函数返回这1000个二进制位形成的串中1的个数,
//	//b |= a;
//	//cout << b.count() << endl;
//	//cout << b << endl;
//
//	//b.set(4);//将b中序列中的下标4设置为1
//	//cout << b[4] << endl;//1
//	//b.reset(4);//将b中序列中的下标4设置为0
//	//cout << b[4] << endl;//0
//
//	pair<int, string> a = { 1, "yxc" }, b;//pair就是一个二元组
//	//pair的好处是支持比较运算,a>b,a<b,a==b,a!=b,a>=b,a<=b...全部可行
//	//vector<int> c, d;vector也是支持比较大小的,c>d,c<d,c==d,c!=d,c>=d,c<=d...是按字典序进行比较
//	cout << a.first << ' ' << a.second << endl;
//	a = { 3, "tzh" };
//	cout << a.first << ' ' << a.second << endl;
//	a = make_pair(4, "mzd");//C++98中调用make_pair函数赋值pair
//	cout << a.first << ' ' << a.second << endl;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	//位运算
//	//cout << ~0 << endl;//-1
//	//cout << ~1 << endl;//-2
//	//cout << ~- 1 << endl;//0
//	int a = 3;
//	int b = 6;
//	cout << (a ^ b) << endl;//5
//	a = 13;//求第a第2位数字
//	//设从低位到高位是从0位到第31位
//	//cout << (a >> 2 & 1) << endl;//1
//	for (int bits = 31; bits >= 0; bits--)
//		cout << (a >> bits & 1);
//	cout << endl;
//
//	int x = 336;//二进制是 0000 0000 0000 0000 0000 0001 0101 0000
//				//要返回最后的一个1和后面的0,常用(x & (-x))
//	cout << (x & (-x)) << endl;//16,ok
//	cout << (-x == (~x + 1)) << endl;//1
//	cout << (~x + 1) << endl;//-336
//	cout << -x << endl;//-336
//	cout << (-x == (~x + 1)) << endl;//1
//	return 0;
//}
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <ctime>
//#include <cstdlib>
//using namespace std;
//bool cmp(int a, int b)
//{//a是否应该排在b的前面
//	return a < b;
//}
//int main()
//{
//	//vector<int>	v = { 1, 2, 3, 4, 5, 6 };
//	//vector<int>	v1({ 1, 2, 3, 4, 5, 6 });
//	//reverse(v.begin(), v.end());
//	//for (int x : v)	cout << x << ' ';	cout << endl;
//	//int a[] = { 1, 2, 3, 4, 5, 6 };
//	//int sz = (int)(sizeof(a) / sizeof(a[0]));
//	//reverse(a, a + sz);
//	//for (int i = 0; i < sz; i++)	cout << a[i] << ' ';	cout << endl;
//	//for (int x : a)	cout << x << ' ';	cout << endl;
//	//常用库函数	reverse翻转/逆置函数,翻转一个vector		reverse(a.begin(), a,end());
//	//翻转一个数组,元素存放在下标1~n		reverse(a + 1, a + 1 + n);
//
//	//int a[] = { 1, 1, 2, 2, 3, 3, 4 };
//	//int sz = (int)(sizeof(a) / sizeof(a[0]));
//	//int m = unique(a, a + (int)(sizeof(a) / sizeof(a[0]))) - a;
//	//cout << m << endl;
//	//for (int i = 0; i < m; i++)	cout << a[i] << ' ';	cout << endl;
//	//for (int i = 0; i < sz; i++)	cout << a[i] << ' ';	cout << endl;
//	//vector<int>	a({ 1, 1, 2, 2, 3, 3, 4 });
//	//int m = unique(a.begin(), a.end()) - a.begin();
//	//cout << m << endl;//4
//	//for (int i = 0; i < m; i++)	cout << a[i] << ' ';	cout << endl;
//	//for (int x : a)	cout << x << ' ';	cout << endl;
//	//vector<int>	a = { 1, 1, 2, 2, 3, 3, 4 };
//	//a.erase(unique(a.begin(), a.end()), a.end());//先调用unique函数传入首尾迭代器,返回去重后的指向尾元素下一个元素的迭代器,然后将它作为erase函数的第一个参数首迭代器,原数组的尾迭代器作为erase函数的第二个参数尾迭代器,这样就可以将首尾迭代器之间的所有元素删除,新的vector只有去重后的元素了,可以使用范围for对其惊醒遍历
//	//for (int x : a)	cout << x << ' ';	cout << endl;//1 2 3 4
//	//unique	去重		返回去重后的尾迭代器(或指针),仍然为前闭后开,即这个迭代器是去重之后的末尾元素的下一个位置,该函数常用于离散化,利用迭代器(或指针)的减法,可以计算出去重后的元素个数	   eg.把一个vector去重:		int m = unique(a.begin(), a.end()) - a.begin();//m即为去重后vector的元素个数				eg.把一个数组去重,元素存放在下标1~n:	int m = unique(a + 1, a + 1 + n) - (a + 1);//m即为去重后数组a的元素个数
//
//	//vector<int>	v = { 1, 2, 3, 4, 5, 6 };
//	//srand((size_t)time(NULL));//设置一个随机种子,否则下面随机打乱的数组会有不随机的问题
//	//random_shuffle(v.begin(), v.end());	//random_shuffle	随机打乱		用法与reverse相同
//	//for (int x : v)	cout << x << ' ';	cout << endl;
//	//sort(v.begin(), v.end());//sort默认是排升序的
//	//for (int x : v)	cout << x << ' ';	cout << endl;
//	//sort(v.begin(), v.end(), greater<int>());//加一个参数就是从大到小排序
//	//for (int x : v)	cout << x << ' ';	cout << endl;
//	//sort(v.begin(), v.end(), cmp);
//	//for (int x : v)	cout << x << ' ';	cout << endl;
//
//	//sort对两个迭代器(或指针)指定的部分进行快速排序,可以在第三个参数传入定义大小比较的函数,或者重载小于号运算符		eg.把一个int数组(元素存放在下标1~n)从大到小排序,传入比较函数:									int a[MAX_SIZE]; bool cmp(int a, int b) { return a > b; } sort(a + 1, a + 1 + n, cmp);
//	//把自定义的结构体vector排序,重载"小于号"运算符
//	//struct rec
//	//{
//	//	int id;
//	//	int x;
//	//	int y;
//	//	bool operator<(const rec& b)
//	//	{
//	//		return (*this).x < b.x;
//	//	}
//	//};
//	//vector<rec> a;
//	//sort(a.begin(), a.end());
//
//	//lower_bound/upper_bound二分	前提是有序
//	//lower_bound的第三个参数传入一个元素x,在两个迭代器(指针)指定的部分上执行二分查找,返回指向第一个大于等于x的最小元素的位置的迭代器(指针)		upper_bound的用法和lower_bound大致相同,唯一的区别是查找第一个大于x的最小元素,当然两个迭代器(指针)指定的部分应该是提前排好序的
//	//在有序int数组(元素存放在下标1~n)中查找大于等于x的最小整数的下标:int l = lower_bound(a + 1, a + 1 + n, x) - a;
//	//在有序vector<int>中查找小于等于x的最大整数(假设一定存在)	int y = *--upper_bound(a.begin(), a.end(), x);
//	return 0;
//}
//#include <iostream>
//#include <algorithm>
//using namespace std;
//struct Rec
//{
//	int _x;
//	int _y;
//	bool operator<(const Rec& x)	const
//	{
//		return this->_x < x._x;//小于号,从小到大排序
//	}
//} a[6];
//bool cmp(Rec a, Rec b)
//{
//	return a._x > b._x;//>从大到小排序
//}
//int main()
//{
//	for (int i = 0; i < 6; i++)
//	{
//		a[i]._x = i;
//		a[i]._y = -i;
//	}
//	for (int i = 0; i < 6; i++)	printf("(%d, %d) ", a[i]._x, a[i]._y);	printf("\n");
//	sort(a, a + 6, cmp);
//	for (int i = 0; i < 6; i++)	printf("(%d, %d) ", a[i]._x, a[i]._y);	printf("\n");
//	sort(a, a + 6);
//	for (int i = 0; i < 6; i++)	printf("(%d, %d) ", a[i]._x, a[i]._y);	printf("\n");
//	return 0;
//}
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int main()
//{
//	//int a[] = { 1, 2, 4, 5 };
//	////int* p = lower_bound(a, a + 4, 2);
//	////cout << *p << endl;
//	//int idx = lower_bound(a, a + 4, 7) - a;
//	//cout << idx << endl;//下标是4
//	//idx = lower_bound(a, a + 4, 3) - a;
//	//cout << idx << endl;//下标是2
//
//
//
//	vector<int>	v = { 1, 2, 4, 5, 6 };
//	int t = lower_bound(v.begin(), v.end(), 3) - v.begin();
//	cout << v[t] << endl;//4
//	cout << *lower_bound(v.begin(), v.end(), 2) << endl;//2
//	return 0;
//}