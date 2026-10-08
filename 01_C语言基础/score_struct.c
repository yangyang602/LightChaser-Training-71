#include<stdio.h>
#include<stdlib.h> 
struct student{
	char name[10];//定义新的结构体 
	float score;
};
int main()
{
	struct student a[3];
	for(int i=0;i<3;i++){
		scanf("%s %f",a[i].name,&a[i].score);
	}
	for(int i=0;i<3;i++) {
		printf("%s %.1f ",a[i].name,a[i].score);
	}
	return 0;
}

