﻿// text.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define I 20
#define R 340
int main()
{
	int i, j, e;
	int a;
	long time;
	system("我爱林培杰");
	for (i = 1, a = I; i < I / 2; i++, a--)
	{
		for (j = (int)(I - sqrt(I*I - (a - i)*(a - i))); j > 0; j--)
			printf(" ");
		for (e = 1; e <= 2 * sqrt(I*I - (a - i)*(a - i)); e++)
			printf("\3");
		for (j = (int)
			(2 * (I - sqrt(I*I - (a - i)*(a - i)))); j > 0; j--)
			printf(" ");
		for (e = 1; e <= 2 * sqrt(I*I - (a - i)*(a - i)); e++)
			printf("\3");
		printf("\n");
	}
	for (i = 1; i < 80; i++)
	{
		if (i == 25)
		{
			printf(" 我    爱   林   培    杰    ");
			i += 30;
		}
		printf("\3");
	}
	printf("\n");
	for (i = 1; i <= R / 2; i++)
	{
		if (i % 2 || i % 3)
			continue;
		for (j = (int)(R - sqrt(R*R - i * i)); j > 0; j--)
			printf(" ");
		for (e = 1; e <= 2 * (sqrt(R*R - i * i) - (R - 2 * I)); e++)
			printf("\3");
		printf("\n");
	}

	for (; ; )
	{
		system("color a");
		for (time = 0; time < 99999999; time++); system("color b");
		for (time = 0; time < 99999999; time++); system("color c");
		for (time = 0; time < 99999999; time++); system("color d");
		for (time = 0; time < 99999999; time++); system("color e");
		for (time = 0; time < 99999999; time++); system("color f");
		for (time = 0; time < 99999999; time++);
		system("color 0"); for (time = 0; time < 99999999; time++);
		system("color 1"); for (time = 0; time < 99999999; time++);
		system("color 2"); for (time = 0; time < 99999999; time++);
		system("color 3"); for (time = 0; time < 99999999; time++);
		system("color 4");
		for (time = 0; time < 99999999; time++); system("color 5");
		for (time = 0; time < 99999999; time++); system("color 6");
		for (time = 0; time < 99999999; time++); system("color 7");
		for (time = 0; time < 99999999; time++); system("color 8");
		for (time = 0; time < 99999999; time++); system("color 9");
		for (time = 0; time < 99999999; time++); system("color ab");
		for (time = 0; time < 99999999; time++); system("color ac");
		for (time = 0; time < 99999999; time++); system("color ad");
		for (time = 0; time < 99999999; time++); system("color ae");
		for (time = 0; time < 99999999; time++); system("color af");
		for (time = 0; time < 99999999; time++);
	}
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
