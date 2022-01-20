#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_DEPRECATE 2
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[50] = { 0 };
	scanf_s("%d", arr);
	printf("%d", arr);
	if (strcmp(arr, "123456"))
		printf("cg");
	
	return 0;
}