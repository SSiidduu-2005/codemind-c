#include<stdio.h>
int main(){
    int n,a,r=0;
    scanf("%d",&n);
    while(n>0){
        a=n%10;
        if(r<a){
            r=a;
        }
        n/=10;
    }
    printf("%d",r);
}