#define _CRT_SECURE_NO_WARNINGS 1
#if 0
//#include <vld.h>
//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#include <stdbool.h>
//#include <assert.h>
//#pragma warning(disable:6031)
//int gcd1(int m, int n) {
//	if (!n) {
//		return m;
//	}
//	else {
//		return gcd1(n, m % n);
//	}
//}
//int gcd(int m, int n) {
//	int r = 0;
//	while (n) {
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	return m;
//}
//void test0() {
//	int m = 0;
//	int n = 0;
//	printf("请输入m,n:>");
//	scanf("%d%d", &m, &n);
//	int res = gcd(m, n);
//	printf("%d, %d\n", res, m * n / res);
//}
//const double Eps = 1e-6;
//bool is_prime_num(int n) {
//	int tmp = (int)(sqrt(n) + Eps);
//	int i = 0;
//	for (i = 2; i <= tmp; i++) {
//		if (!(n % i)) {
//			return false;
//		}
//	}
//	return true;
//}
//void test1() {
//	int i = 0;
//	int c = 0;
//	if (is_prime_num(2)) {
//		printf("%d ", 2);
//		c++;
//	}
//	for (i = 3; i <= 99; i += 2) {
//		if (is_prime_num(i)) {
//			printf("%d ", i);
//			c++;
//		}
//	}
//	printf("\n");
//	printf("c = %d\n", c);
//}
//void Func1(int N) {//O(n^2 + 2 * n + 10) ---> O(N^2)
//	int count = 0;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			++count;
//		}
//	}
//	for (int k = 0; k < 2 * N; ++k) {
//		++count;
//	}
//	int M = 10;
//	while (M--) {
//		++count;
//	}
//	printf("%d\n", count);
//}
//void Func2(int N) {//O(N)	空间O(1)
//	int count = 0;
//	for (int k = 0; k < 2 * N; ++k) {
//		++count;
//	}
//	int M = 10;
//	while (M--) {
//		++count;
//	}
//	printf("%d\n", count);
//}
//void Func3(int N, int M) {//O(M + N)	空间O(1)
//	int count = 0;
//	for (int k = 0; k < M; ++k) {
//		++count;
//	}
//	for (int k = 0; k < N; ++k) {
//		++count;
//	}
//	printf("%d\n", count);
//}
//void Func4(int N) {//O(1)	空间O(1)
//	int count = 0;
//	for (int k = 0; k < 100; ++k) {
//		++count;
//	}
//	printf("%d\n", count);
//}
//size_t MyStrlen(const char* str) {
//	assert(str != NULL);
//	const char* eos = str;
//	while (*eos++) {
//		;
//	}
//	return (eos - str - 1);
//}
//char* MyStrstr(const char* str, const char* subStr) {
//	assert(str != NULL && subStr != NULL);
//	if (*subStr == '\0') {
//		return (char*)str;
//	}
//	int lenStr = (int)MyStrlen(str);
//	int lenSubStr = (int)MyStrlen(subStr);
//	if (lenStr < lenSubStr) {
//		return NULL;
//	}
//	for (int i = 0; (i + lenSubStr) <= lenStr; i++) {
//		int j = 0;
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
//const char* MyStrchr(const char* str, int character) {
//	assert(str != NULL);
//	while (*str != '\0') {
//		if (*str == character) {
//			return str;
//		}
//		str++;
//	}
//	return NULL;
//}
////const char* strchr(const char* str, int character);//O(N)	空间O(1)
//void test2() {
//	//Func1(10);//130
//	//Func2(10);//30
//	//Func3(10, 20);//30
//	//Func4(10000);//100
//}
//void PrintArr(int arr[], int sz) {
//	assert(arr != NULL);
//	for (int i = 0; i < sz; i++) {
//		printf("%d ", *arr++);
//	}
//	printf("\n");
//}
//void MySwap(int* p1, int* p2) {
//	assert(p1 != NULL && p2 != NULL);
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//void MyBubbleSort(int arr[], int sz) {//O(N)~O(N^2)--->O(N^2)		空间O(1)		稳定
//	assert(arr != NULL);
//	bool flag = true;
//	for (int i = 0; i < sz - 1; i++) {
//		flag = true;
//		for (int j = 0; j < sz - 1 - i; j++) {
//			if (arr[j] > arr[j + 1]) {//升序
//				flag = false;
//				MySwap(&arr[j], &arr[j + 1]);
//			}
//		}
//		if (flag) {
//			break;
//		}
//	}
//}
//void test3() {
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	PrintArr(arr, sz);
//	MyBubbleSort(arr, sz);
//	PrintArr(arr, sz);
//}
//int BinarySearch1(int* p, int sz, int k) {//O(1)~O(logN),最好O(1),最坏O(logN),时间复杂度O(logN),空间O(1)
//	assert(p != NULL);
//	int l = 0;
//	int r = sz - 1;
//	int mid = 0;
//	while (l <= r) {
//		mid = (l & r) + ((l ^ r) >> 1);
//		if (p[mid] > k) {
//			r = mid - 1;
//		}
//		else if (p[mid] < k) {
//			l = mid + 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;
//}//二分查找的前提是数组有序
//int BinarySearch(int* p, int sz, int k) {//O(1)~O(logN),最好O(1),最坏O(logN),时间复杂度O(logN),空间O(1)
//	assert(p != NULL);
//	int l = 0;
//	int r = sz;
//	int mid = 0;
//	while (l < r) {
//		mid = (l & r) + ((l ^ r) >> 1);
//		if (p[mid] > k) {
//			r = mid;
//		}
//		else if (p[mid] < k) {
//			l = mid + 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;
//}
//int lineSearch(int* p, int sz, int k) {//最好O(1),最坏O(N),平均O(N/2),时间复杂度O(N),空间O(1)
//	assert(p != NULL);
//	for (int i = 0; i < sz; i++) {
//		if (p[i] == k) {
//			return i;
//		}
//	}
//	return -1;
//}
//void test4() {
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	int k = 0;
//	for (k = 0; k <= sz + 1; k++) {
//		int idx = BinarySearch(arr, sz, k);
//		if (-1 == idx) {
//			printf("没找到\n");
//		}
//		else {
//			printf("找着了,下标是%d\n", idx);
//		}
//	}
//}
//long long Factorial1(int N) {//时间:O(N)	空间:O(N)
//	//递归算法如何计算时间复杂度:递归次数*每次递归函数的次数
//	return ((N <= 1) ? 1 : (N * Factorial1(N - 1)));
//}
//long long Factorial(int N) {
//	long long fact = 1ll;
//	for (int i = 1; i <= N; i++) {
//		fact *= i;
//	}
//	return fact;
//}
//void test5() {
//	for (int i = 0; i < 11; i++) {
//		printf("%d! = %lld\n", i, Factorial(i));
//	}
//}
//long long fib_r(int N) {//时间复杂度O(2^N)	空间复杂度O(N)
//	return ((N <= 1) ? N : (fib_r(N - 1) + fib_r(N - 2)));
//}
//long long fib_i1(int N) {//时间复杂度O(N)		空间复杂度O(1)
//	if (N <= 1)	return (long long)N;
//	int a = 0;
//	int b = 1;
//	int c = 0;
//	while (N > 1) {
//		c = a + b;
//		a = b;
//		b = c;
//		N--;
//	}
//	return b;
//}
//long long fib_i(int N) {//时间复杂度O(N)		空间复杂度O(N)
//	if (N <= 1)	return N;
//	long long* fibArr = (long long*)malloc((N + 1) * sizeof(long long));
//	if (NULL == fibArr) {
//		perror("fib_i fibArr malloc");
//		return (long long)-1;
//	}
//	fibArr[0] = 0;
//	fibArr[1] = 1;
//	for (int i = 2; i <= N; i++) {
//		fibArr[i] = fibArr[i - 1] + fibArr[i - 2];
//	}
//	long long ret = fibArr[N];
//	free(fibArr);
//	fibArr = NULL;
//	return ret;
//}
//void test6() {
//	for (int i = 0; i <= 15; i++) {
//		printf("fib_r(%d) = %lld\t\t", i, fib_r(i));
//		printf("fib_i(%d) = %lld\n", i, fib_i(i));
//	}
//}
//long long* fib_t(int N) {//时间复杂度:O(N)	空间复杂度:O(N)
//	if (N < 0)	return NULL;
//	long long* fibArr = (long long*)malloc((N + 1) * sizeof(long long));
//	if (NULL == fibArr) {
//		perror("fib_t fibArr malloc");
//		return NULL;
//	}
//	fibArr[0] = 0;
//	if (N == 0)	return fibArr;
//	fibArr[1] = 1;
//	for (int i = 2; i <= N; i++) {
//		fibArr[i] = fibArr[i - 1] + fibArr[i - 2];
//	}
//	return fibArr;
//}
//void test7() {
//	//求出整个斐波那契数列
//	long long* ret = NULL;
//	for (int i = 0; i <= 11; i++) {
//		ret = fib_t(i);
//		for (int j = 0; j <= i; j++) {
//			printf("%lld ", ret[j]);
//		}
//		free(ret);
//		ret = NULL;
//		printf("\n");
//	}
//}
//int missingNumber(int* nums, int numsSize) {
//	assert(nums != NULL);
//	int t = 0;
//	for (int i = 0; i < numsSize; i++)  t ^= nums[i];
//	for (int i = 0; i < numsSize + 1; i++)  t ^= i;
//	return t;
//}
//void test8() {
//	int arr[] = { 0, 1, 2, 3, 4, 6, 7, 8, 9 };
//	printf("ret = %d\n", missingNumber(arr, (int)(sizeof(arr) / sizeof(arr[0]))));
//}
//int* singleNumbers(int* nums, int numsSize, int* returnSize) {
//	assert(nums && returnSize);
//	*returnSize = 2;
//	int* p = (int*)malloc(*returnSize * sizeof(int));
//	p[0] = 0;
//	p[1] = 0;
//	int tmp = 0;
//	int pos = 0;
//	for (int i = 0; i < numsSize; i++)  tmp ^= nums[i];
//	for (int i = 0; i < 32; i++) {
//		if ((1 << i) & tmp) {
//			pos = i;
//			break;
//		}
//	}
//	for (int i = 0; i < numsSize; i++) {
//		if ((1 << pos) & nums[i])   p[1] ^= nums[i];
//		else    p[0] ^= nums[i];
//	}
//	return p;
//}
////class Solution {
////public:
////    vector<int> singleNumbers(vector<int>& nums) {
////        int t = 0;
////        int pos = 0;
////        int X = 0;
////        for (auto x : nums) t ^= x;
////        for (int i = 0; i < 32; i++){
////            if ((1 << i) & t){
////                pos = i;
////                break;
////            }
////        }
////        for (auto x : nums){
////            if ((1 << pos) & x) X ^= x;
////        }
////        return { X, t ^ X };
////    }
////};
//void test9() {
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4 };
//	int n = 0;
//	int* p = singleNumbers(arr, (int)(sizeof(arr) / sizeof(arr[0])), &n);
//	for (int i = 0; i < n; i++) {
//		printf("%d ", p[i]);
//	}
//	printf("\n");
//	free(p);
//	p = NULL;
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
//	test9();
//}
//int main() {
//	//时间复杂度不计算时间,计算大概的运行次数
//	//空间复杂度不计算空间,计算大概定义的变量个数
//	//递归算法的空间复杂度就是递归的栈帧深度,因为递归函数要建立栈帧,递归建立栈帧需要消耗空间,一个栈帧中如果没有额外开辟空间则都是常数个变量空间,所以才有递归版本斐波那契数列时间复杂度O(2^N),空间复杂度O(N)
//	test();
//	return 0;
//}
#endif
