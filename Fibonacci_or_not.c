#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,a=0,b=1,c,C;
	scanf("%d",&n);
	if(n==a || n==b)
	{	
		printf("True");
		exit(0);
	}
	c=a+b;
	while(c<=n)
	{
		if(c == n)
	    {	
			printf("True");	
	    	C=c;
	    	break;
	    }
		a=b;
		b=c;
		c=a+b;
		
	}
	if(C!=n)
	{
	    printf("False");
	}
}