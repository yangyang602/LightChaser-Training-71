#include <stdio.h>
#include <stdlib.h> 
int main()
{
	int s=0;
	for(int i=1;i<=100;i+=2){
		s+=i;
	}
	printf("1~100的奇数和为：",s);
	return 0;
}
