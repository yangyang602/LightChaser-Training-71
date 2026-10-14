#include<stdio.h>
#include<stdlib.h> 
struct student{//定义结构体 
	char name[10];//一个名字最多十个字符 
	float score;//成绩 
};
void swap(struct student *a,struct student *b)//交换结构体 
{
	struct student temp;//找中间项 
	temp=*a;//拿取 
	*a=*b;
	*b=temp;
} 
int main()
{
	int n;
	printf("学生人数：");
	if(scanf("%d",&n)!=1) return 1;//格式不对强制结束 
    struct student *a=(struct student*)malloc(n*sizeof(struct student));
    if(a==NULL)//确认不会溢出，是否还有内存 
	{
        printf("内存不足");
        return 1;
    }

	for(int i=0;i<n;i++){
		scanf("%s %f",a[i].name,&a[i].score);//a[].name本身代表地址不用&（类似的有指针） 
	}
	for(int i=0;i<n;i++)//排序 
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j].score<a[j+1].score) {
				swap(&a[j],&a[j+1]);
				
			}
		}
	}
	printf("排名：\n");
	for(int i=0;i<n;i++) {
		printf("第%d名：%s %.1f \n",i+1,a[i].name,a[i].score);
	}
	free(a);//释放防止野指针 
    a=NULL; 
	return 0;
}
