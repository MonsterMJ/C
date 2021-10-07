#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void menu()
{
	printf("*********************************\n");
	printf("***********请选择计算模式***********\n");
	printf("*******1.ADD         2.Sub*******\n");
	printf("*******3.MUL         4.DIV*******\n");
	printf("************0.Exit***************\n");
}
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
int main()
{
	int input,x,y;
	int(*parr[5])(int,int) = { 0,add,sub,mul,div };
	char *str[4] = { "加","减","乘","除以" };
	int ret = 0;
	do 
	{
		menu();
		scanf("%d", &input);
		if (input == 0)
		{
			printf("退出\n");
			exit();
		}
		else if(input>=1 && input <=4)
		{
			printf("请输入两个操作数\n");
			scanf("%d %d", &x, &y);
			ret = (*parr[input])(x, y);
			printf("%d %s %d 等于 %d\n",x,str[input-1],y,ret);
		}
		else
		{
			printf("选择模式错误\n");
		}
	} while (1);
}
//char* mys(char* test, const char* src)
//{
//
//}
//int main()
//{
//	char(*p)(char*, const char*) = mys;
//	char(*p[4])(char*, const char*)= mys;
//}

//int main()
//{
//	char asd[43] = "23240000";
//	int *a = 223;
//	return 0;
//}

//void print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*p)(char* str) = print;
//	(*p)("赖发明");
//	return 0;
//	/*(*(void(*)())0)();*/
//	
//}
//int main()
//{
//	char ae[10] = "ASCDCDCDCD";
//	char(*p)[10] = &ae;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%c", (*p)[i]);
//	}
//	printf("\n");
//	for (i = 0;i < 10;i++)
//	{
//		printf("%c", *p[i]);
//	}
//}

//int va(int **x)
//{
//	**x = 5;
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int *x = &a;
//	va(&x);
//	printf("%d", a);
//}
