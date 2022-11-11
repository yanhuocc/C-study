#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>





int DigitSum(int num)
{

	while (num > 9)
	{
		return num % 10 + DigitSum(num / 10);
	}
	return num;
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int ret = DigitSum(num);
	printf("%d", ret);
	return 0;
}





//double Mi(int n, int k)
//{
//	if (k >0)
//	{
//		return n * Mi(n, k - 1);
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else if (k < 0)
//	{
//		return 1.0 / Mi(n, -k);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret =Mi(n, k);
//	printf("%lf",ret);
//	return 0;
//}



//
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%2d ", arr[i][j]);
//		}
//		printf("\n");
//
//		
//		
//		return 0;
//}

//Ã°ÅÝÅÅÐò
//void bubble_sort(int arr[])
//{
//	int i = 0;
//	for (i = 0; i<9; i++)
//	{
//		for (int a = 0; a < 9; a++)
//		{
//			if (arr[a] > arr[a+1])
//			{
//				int temp = 0;
//				temp = arr[a+1];
//				arr[a+1] = arr[a];
//				arr[a] = temp;
//			}
//		}
//	}
//	
// }
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	bubble_sort(arr);
//	int j = 0;
//	for (j = 0; j < 10; j++)
//	{
//		printf("%d ", arr[j]);
//	}
//	return 0;
//}