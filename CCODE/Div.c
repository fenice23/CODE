#define _CRT_SECURE_NO_WARNINGS 1
#include "Div.h"
#include <stdio.h>
int Div(int x, int y) {
	if (!y) {
		printf("Error:Div by Zero!:");
		return 0;
	}
	else {
		return x / y;
	}
}