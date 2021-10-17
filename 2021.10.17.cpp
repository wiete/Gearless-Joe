#include<stdio.h>
int main()
{
	int n,i,j;
	int a[100][100];
    a[0][0]=1;
	for(i=0;i<100;i++)
	{
		for(j=0;j<100-i;j++)
		{
		
			if(i>0)
			a[i][0]=a[i-1][0]+i;
			
			if(a[i][j]!=a[0][0])
			a[i][j]=a[i][j-1]+i+j+1;
		}
	}
		scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
		
        	printf("%d  ",a[i][j]);
		    if(j>=n)
		      printf(" ");
      	}
     printf("\n");
	}
	return 0;
}
