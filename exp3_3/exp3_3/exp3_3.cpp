<<<<<<< HEAD
﻿// exp3_3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

int main()
{
	int x;
	float  o, w, h;
	printf("请输入性别，1为男，2为女");
	scanf_s("%d", &x);
	printf("请分别输入年龄，体重(kg)，身高(cm)");
	scanf_s("%f%f%f", &o, &w, &h);
	if ((x = 1, h >= 170, w >= 60) && (x = 2, h >= 160, w >= 45 )&& (o>=18) )
	{
		if (o >= 18 && o < 24)
		{
			printf("做销售员");
		}
		if (o >= 24)
		{
			printf("做售后服务员");
		}
	}
	else
	{
		printf("滚吧，这不适合你");
	}

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
=======
﻿// exp3_3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

int main()
{
	int x;
	float  o, w, h;
	printf("请输入性别，1为男，2为女");
	scanf_s("%d", &x);
	printf("请分别输入年龄，体重(kg)，身高(cm)");
	scanf_s("%f%f%f", &o, &w, &h);
	if ((x = 1, h >= 170, w >= 60) && (x = 2, h >= 160, w >= 45 )&& (o>=18) )
	{
		if (o >= 18 && o < 24)
		{
			printf("做销售员");
		}
		if (o >= 24)
		{
			printf("做售后服务员");
		}
	}
	else
	{
		printf("滚吧，这不适合你");
	}

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
>>>>>>> 8f2777d8ec923a2648d6a6d89cee9717394c5f09
