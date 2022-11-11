#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//void print(unsigned int n)
//{
//	
//	if (n >9)
//	{
//      print(n/10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}


////栈溢出
//
//void test(int n)
//{
//	
//	printf("%d\n", n);
//	test(n + 1);
//}
//
//int main()
////{
//	test(1);
//	return 0;
//}

//int  fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fac(n - 1);
//	}
//} int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fac(n);
//	printf("%d", ret);
//	return 0;
//}

//递归求斐波那契数
//int count = 0;
//int fb(int n)
//{
//	//统计第三个斐波那契数的计算次数
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else if (n > 2)
//	{
//		return fb(n-1)+fb(n-2);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fb(n);
//	printf("%d\n", ret);
//	printf("%d\n", count);
//	return 0;
//}

//求斐波那契数
//int fb(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//	
//}
//int main()
//{
//	int ret = 0;
//	int n = 0;
//	scanf("%d", &n);
//	ret=fb(n);
//	printf("%d\n", ret);
//	return 0;
//}

//青蛙跳台阶；
//int jump(int n)
//{
//	while (n>=3)
//	{
//		return jump(n-2)+jump(n-1);
//	}
//	if (n == 1)
//	{
//		return 1;
//	}
//	else if (n == 2)
//	{
//		return 2;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = jump(n);
//	printf("%d", ret);
//	return 0;
//}

//计算1-100之间有多少个9
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	
//	printf("%d", count);
//}
// 
// 
// 
// 
//#include<math.h>
//double ff(int n)
//{
//	double a = 0;
//	a = (1.0 / n) * (pow((-1), n - 1));
//	return a;
//}
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	double sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum + ff(i);
//	}
//	printf("%lf", sum);
//	return 0;
//}


//求十个正整数中的最大值
//int main()
//{
//	int arr[9] = {0};
//	int i = 0;
//	
//	for (i = 0; i <= 9;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (int j = 0;  j<= 9; j++)
//	{
//		if (max < arr[j])
//		{
//			max = arr[j];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}


//乘法口诀表

//int main()
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
// 
// 
// 
// 
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while (left < right)
//	{
//		char temp = str[left];
//		str[left] = str[right];
//		str[right] = temp;
//		left++;
//		right--;
//	}
//
//}
//
//int main()
//{
//	char arr[] = "abcdefghijklmn" ;
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}