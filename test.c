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
//int main()//ʹ�õ��� - ���� - ���ö�ջ ���Բ鿴���������߼�
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
//		arr[i] = i + 1;//�����ϵ�
//	}
//
//	for (i = 0;i < sz;i++)
//	{
//		test();
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//ʵ��1����1! +2! +3! ...+n!
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
//		ret = 1;//ÿ��ѭ��ret��Ӧ�ó�ʼ��Ϊ1
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
//	//arr�����±�Ϊ0-9
//	for (i = 0;i <= 9;i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//Ԥ����������
//ͨ������ļ��ɣ����ٴ���

//ģ��ʵ��strcpy
//strcpy - �ַ�������
#include<string.h>

//���� - д�Ĳ���
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

//��һ��Ľ�
//void my_strcpy(char* dest, char* src)
//{
//	while(*src!='\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}

//�Ľ���һ��
void my_strcpy(char* dest, char* src)
{
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = *src;
}

//�Ľ��ڶ���
void my_strcpy(char* dest, char* src)
{
	while (*dest++ = *src++)//��ֵ�����жϽ��Ϊ��ֵ��ASCIIֵ���ȿ�����'\0',��ʹ��ѭ��ֹͣ��
	{
		;
	}
}


int main()
{
	char arr1[20] = "xxxxxxxxx";
	char arr2[] = "hello";
	my_strcpy(arr1, arr2);


	//strcpy(arr1, arr2);

	printf("%s\n", arr1);
	return 0;
}