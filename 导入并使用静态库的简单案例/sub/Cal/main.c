#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "sub.h"
#pragma comment(lib, "sub.lib")//µ¼Èë¾²Ì¬¿â
int main() {
	int a = 10;
	int b = 20;
	printf("%d\n", sub(a, b));
	return 0;
}