#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
//int jj(int n)
//{
//	int i = 0;
//	unsigned long long sum = 1;
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//	}
//	return sum;
//}
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	unsigned long long  Sum = 0;
//	scanf("%d", &n);
//	for (a = 1; a <= n; a++)
//	{
//		Sum = Sum+jj(a);
//	}
//	printf("%lld", Sum);
//	return 0;
//}



//有序数组二分查找
//int main()
//{
//	int arr[10] = { 1,2,8,56,468,23456,75768,8347767,86785575,10354553353 };
//	int k = 75768;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了 下标是：%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到了");
//}

//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//}

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>", password);
//		scanf("%s", password);
//
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登陆成功！");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n\n");
//		}
//	}
//	if (3==i)
//	{
//		printf("错误次数过多");
//	}
//	return 0;
//}
#include<time.h>
#include<stdlib.h>

//void mune()
//{
//	printf("***********************\n");
//	printf("*******1.开始游戏******\n");
//	printf("*******2.退出游戏******\n");
//	printf("***********************\n");
//}
//void game()
//{
//	int n = 0;
//	
//	int num = rand()%100+1;
//	//printf("%d\n", num);
//
//	do
//	{
//
//		printf("请输入你猜的数字：>");
//		scanf("%d", &n);
//		if (n > num)
//		{
//			printf("你的数字大了\n");
//		}
//		else if (n < num)
//		{
//			printf("你的数字小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//		}
//	} while (n != num);
//}
//int main()
//{
//	int input;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		mune();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input!=2);
//	return 0;
//}


//int main()
//{
//	int a = 0, b = 0, c = 0;
//	int temp;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		temp = b;
//		b = a;
//		a = temp;
//	}
//	if (a < c)
//	{
//		temp = c;
//		c = a;
//		a = temp;
//	}
//	if (b < c)
//	{
//		temp = c;
//		c = b;
//		b = temp;
//	}
//
//	printf("%d %d %d", a, b, c);
//}

// 最大公约数求法
//int main()
//{ 
//	int a = 0,b = 0;
//	int num = 0;
//	scanf("%d %d", &a, &b);
//	if (a <= b)
//	{
//		num = a;
//	}
//	else
//	{
//		num = b;
//	}
//	while(1)
//	{
//		if (b%num == 0 && a%num == 0)
//		{
//			printf("%d\n", num);
//			break;
//		}
//			num--;
//		
//	}
//	
//	return 0;
//}

//辗转相除法求最大公约数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int temp = 0;
//	scanf("%d %d", &m, &n);
//	while (temp = m % n)
//	{
//			m = n;
//			n = temp;	
//	}
//	printf("%d", n);
//	return 0;
//}

//判断是否为闰年；
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i < 2001; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//		{
//			printf("%d  ", i);
//			count++;
//		}
//	}
//	printf("\n\n共有%d个闰年\n",count);
//	return 0;
//}
// 
// 
// 
// 
//素数
//int fss(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//
//		if (n % i == 0)
//		{
//			return 0;
//			break;
//		}
//	}
//	return 1;
//}
//	
//
//int main()
//{
//	int n = 0;
//	int count = 0;
//	
//	for (n = 101; n <= 200; n+=2)
//	{
//		if (fss(n) == 1)
//		{
//			printf("%d    ", n);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}