#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int a[10],sum=0,b;
	for (int i=0;i<10;i++) {
		scanf("%d", &b);
		sum = sum + b;
	}
	printf("%d", sum/10);
}