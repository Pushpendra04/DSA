#include<stdio.h>
void tower(int,char,char,char);
main()
{
	int n;
	printf("Enter the number of disks\n");
	scanf("%d",&n);
	tower(n,'A','B','C');
}
void tower(int n,char source,char aux,char target)
{
	if(n==1)
	{
	
		printf("Move disk from 1 from beg %c to target %c		\n",source,target);
		return;
	}
	tower(n-1,source,target,aux);
	printf("Move disk %d from beg %c to target %c\n",n,source,target);
	tower(n-1,aux,source,target);
}
