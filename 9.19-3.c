#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

//int main() 
//{
//	int a = 0,y = 0;
//	double b = 0;
//	scanf("%d %d", &a,&y);
//	b = a * pow(1.033, y);
//	printf("%.2f", b);
//	return 0;
//}
//int main()
//{
//	int a = 10,b = 10;
//	printf("a++=%d\n", a++);
//	printf("a=%d\n", a);
//
//	printf("++b=%d\n", ++b);
//	printf("b=%d\n", b);
//	return 0;
// }

// 温度转换
//
//int main()
//{
//    int celsius = 0;
//    celsius = 5 * (150 - 32) / 9;
//    printf("fahr = 150,celsius = %d", celsius);
//    return 0;
//}


//enum sex
//{
//	male,
//	female,
//	secret
//};
//int main()
//{
//	enum sex ming = female;
//	printf("%d\n", male);
//	printf("%d\n", female);
//	printf("%d\n", secret);
//}

//int main() 
//{
//	char arr1[] = "abcdefghjkl";
//	char arr2[] = { 'a','b','c','d','\0'};
//	int a=sizeof(arr2);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%d\n", a);
//	return 0;
//}

//int add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main() 
//{
//	int num1 = 0, num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int sum = add(num1, num2);
//	printf("%d", sum);
//	return 0;
//}

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while(i<10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//
//}

//struct stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//struct book
//{
//	char name[20];
//	float price;
//	char id[30];
//};
//int main()
//{
//	struct stu s={"张三",20,85.5};//结构体的创建和初始化
//	printf("1:%s %d %lf\n", s.name,s.age,s.score);
//	struct stu * ps = &s;
//	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//	printf("3:%s %d %lf", ps->name, ps->age, ps->score);//箭头左边是结构体的指针，右边是成员变量名
//	return 0;
//}

//int main()
//{
//    int a = 0, b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//    else//else跟离得最近的匹配
//		printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 2 == 0)
//	{
//		printf("是偶数");
//	}
//	else
//	{
//		printf("是奇数");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//		{
//		 printf("%d\n", i);
//		}
//		i++;
//	}
//	return 0;
//}
//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//}

//
//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		break;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}