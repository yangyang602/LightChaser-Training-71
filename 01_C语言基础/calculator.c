#include <stdio.h>
#include <stdlib.h>
int main() {
    float a,b,s;
    char c; 
    printf("输入的算式："); 
	if (scanf("%f %c %f",&a,&c,&b)!=3) //判断输入格式正确否 
	{
		printf("输入格式不正确"); 
		return 1;  //强制退出 
	}
	if(c=='+') //加 
	{
		s=a+b;
		printf("结果是："); 
		printf("%.1f",s);
	}
	if(c=='-') //减 
	{
		s=a-b;
		printf("结果是："); 
		printf("%.1f",s);
	}
	if(c=='*') //乘 
	{
		s=a*b;
		printf("结果是："); 
		printf("%.1f",s);
	}
	if(c=='/') //除 
	{
		if(b==0) {
			printf("除数不能为0");//判断除数 
			return 1;
		}
		else{
			s=a/b;
			printf("结果是："); 
			printf("%.1f",s); 
		}
	}
	return 0;
}
