#define _CRT_SECURE_NO_WARNINGS 1
		
#include<stdio.h>

//void test()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		arr[i] = i + 1;
//	}
//
//	for (i = 0;i < sz;i++)
//	{
//		test();
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

void test2()
{
	printf("hehe\n");
}

//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()//使用调试 - 窗口 - 调用堆栈 可以查看函数调用逻辑
//{
//	test();
//	return 0;
//}

//void test()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		arr[i] = i + 1;//条件断点
//	}
//
//	for (i = 0;i < sz;i++)
//	{
//		test();
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//实例1：求1! +2! +3! ...+n!
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//3
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	int j = 0;
//	for (j = 1;j <= n;j++)
//	{
//		ret = 1;//每次循环ret都应该初始化为1
//		for (i = 1;i <= j;i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	//printf("%d\n", ret);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//arr数组下标为0-9
//	for (i = 0;i <= 9;i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//预防发生错误
//通过编码的技巧，减少错误

//模拟实现strcpy
//strcpy - 字符串拷贝
#include<string.h>

//初版 - 写的不好
//void my_strcpy(char* dest, char* src)
//{
//	while(*src!='\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}

//第一版改进
//void my_strcpy(char* dest, char* src)
//{
//	while(*src!='\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}

//改进第一版
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}

//优化后
//#include<assert.h>
//
//void my_strcpy(char* dest,const char* src)
//{
//	assert(src != NULL);//断言源空间起始地址不为空指针
//	assert(dest != NULL);//断言目标空间的起始地址不为空指针
//
//	while (*dest++ = *src++)//赋值语句的判断结果为该值的ASCII值；既拷贝了'\0',又使得循环停止了
//	{
//		;
//	}
//}
//
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxx";
//	char arr2[] = "hello";
//	my_strcpy(NULL, arr2);
//
//
//	//strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//	return 0;
//}

int main()
{
	//const修饰变量，这个变量就被称为常变量，不能被更改，但是本质上还是变量
	//

	const int num = 10;
	//num = 20;//err

	int* const p = &num;
	int n = 100;
	//const修饰指针变量时，如果放在*的右边，修饰的是指针变量p，表示指针变量不能被改变
	//                     但是指针指向的内容是可以修改的
	*p = 20;//ok
	//p = &n;//err


	//const int* p = &num;
	//int n = 100;
	////const修饰指针变量时，如果放在*的左边，修饰的是*p，表示指针指向的内容，是不能通过指针来改变的
	////                     但是指针变量本身是可以修改的
	//*p = 20;//err
	//p = &n;//ok

	printf("%d\n", num);
	return 0;
}