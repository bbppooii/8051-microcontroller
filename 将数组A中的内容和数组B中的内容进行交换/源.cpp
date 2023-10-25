#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 5,4,3,2,1 };
	printf("数组a=");
	for (int i = 0; i < 5; i++)
		printf("%d ", a[i]);
	printf("\n");
	printf("数组b=");
	for (int i = 0; i < 5; i++)
		printf("%d ", b[i]);
	printf("\n");
	for (int i = 0, z;i<5;i++) {
		z = a[i];
		a[i] = b[i];
		b[i] = z;
	}
	printf("交换后\n");
	printf("数组a=");
	for (int i = 0; i < 5; i++)
		printf("%d ", a[i]);
	printf("\n");
	printf("数组b=");
	for (int i = 0; i < 5; i++)
		printf("%d ", b[i]);
	printf("\n");
}
