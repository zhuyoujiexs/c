// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#define _crt_secure_no_warnings
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	int k = 7;
	int v[] = { 0,1,2,3,4,5,6,8,9,11 };
	int ri = (sizeof(v) / sizeof(v[0])) - 1;
	int lef = 0;
	while (lef<ri)
	{
		int mid = (lef + ri) / 2;
		if (v[mid] > k)
		{
			ri = mid - 1;
			if (ri==6)
				printf("%d\n", i);
		}
		else if (v[mid] < k)
			lef = mid + 1;
		else
		{
			printf("查到了，下标是：%d\n", mid);
			
		}
		printf("查不到");
	}
}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
/* 调试程序: F5 或调试 >“*//*开始调试”菜单

 入门使用技巧:
   1. 使用解决方案资源管理器窗口添加/管理文件
   2. 使用团队资源管理器窗口连接到源代码管理
  +
 ASDG5A3. 使用输出窗口查看生成输出和其他消息
   *//*4. 使用错误列表窗口查看错误*/
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
