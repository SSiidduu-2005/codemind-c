#include<stdio.h>
int reverse(int s)
{
	int b=0;
	while(s!=0)
	{
		b=b*10+s%10;
		s=s/10;
	}
	return b;
}
int main()
{
    int n,N1,r=0,S=0,rev=0,s=0;
    scanf("%d",&n);
    N1=n*n;
    while(r!=n && N1!=0)
    {
        S=N1%10;
        s=s*10+S;
        r=reverse(s);
        N1=N1/10;
    }
    
    if(r==n)
    {
        printf("Automorphic Number");
    }
    else 
    {
        printf("Not an Automorphic Number");
    }
}