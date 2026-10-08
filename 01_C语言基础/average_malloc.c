#include <stdio.h>
#include <stdlib.h>
int main(){
	int n; 
	float s=0;
	printf("求几个数的平均值："); 
    if(scanf("%d",&n)!=1) return 1;//格式不对强制结束 
    int *arr=(int*)malloc(n*sizeof(int));
    if(arr == NULL)//确认不会溢出，是否还有内存 
	{
        printf("内存不足");
        return 1;
    }
    printf("输入："); 
    for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);//求总值 
		s+=arr[i];
	} 
	float a;
	a=s/n;
	printf("平均值为：%.1f",a);
	free(arr);//释放防止野指针 
    arr=NULL; 
	return 0;
} 
