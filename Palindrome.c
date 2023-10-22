#include<stdio.h>
int main(){
	int n,k,a,r=0;
	scanf("%d",&n);
	k=n;
	while(n!=0){
		a=n%10;
		r=r*10+a;
		n/=10;
	}
	if(k==r){
		printf("True");
	}
	else{
		printf("False");
	}
}