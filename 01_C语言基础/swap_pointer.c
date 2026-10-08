#include <stdio.h>
#include <stdlib.h>
int main() {
    int a1,b1,c;//确定变量 
    printf("交换前："); 
	scanf("%d %d",&a1,&b1); //输入
	int *a=&a1,*b=&b1;//两个指针指向变量地址 
	c=*a;//进行一种拿取 
	*a=*b;
	*b=c;
	printf("交换后："); 
	printf("%d %d",a1,b1);
	return 0;
}

