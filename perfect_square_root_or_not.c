#include<stdio.h>
#include<math.h>
int main(){
    int n,b;
    scanf("%d",&n);
    b=sqrt(n);
    if(n==b*b){
        printf("True");
    }
    else{
        printf("False");
    }
}