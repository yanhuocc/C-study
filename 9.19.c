#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int main(void)
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 90");//system ͷ�ļ�stdlib.h
//
//again:
//	printf("��ע�⣬��ĵ��Լ�����90���ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input,"������")==0)//strcmpͷ�ļ�string.h
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//
//	return 0;
//}
//
//#include <stdio.h> 
//#include <string.h> 
//
//int main(void)
//{
//    char string[10];
//    char* str1 = "abcdefghi";
//
//    strcpy(string, str1);
//    printf("%s\n", string);
//    return 0;
//}


//��������������ֵ

//void swap(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* pa = &a;
//	int* pb = &b;
//	printf("����ǰa = %d b = %d\n", a, b);
//	swap(&a, &b);
//	printf("������a = %d b = %d\n", a, b);
//	return 0;
//}


//�������ֲ���
//int search(int a[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if(a[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right=sz-1;
//	int k = 6;
//	int ret = search(arr, k, sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d", ret);
//	}
//	return 0;
//}

//void add(int *num)
//{
//	(*num)++;
//}
//
//int main()
//{
//	int num = 1;
//	add(&num);
//	printf("%d\n", num);
//
//	add(&num);
//	printf("%d\n", num);
//
//	add(&num);
//	printf("%d\n", num);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d", c);
//	return 0;
//}
//int Add(int x, int y)
//{
//	int c = x + y;
//	return c;
//}

