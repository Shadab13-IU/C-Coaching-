#include<stdio.h>
 int fact(unsigned int);
x int main(){
     unsigned int x;
     printf("Enter a positve number: ");
     scanf("%u",&x);
     int result=fact(x);
     printf("Factorial of %u is %d\n",x,result);
     return 0;
 }
 /*int fact(unsigned int n){
     if(n==0 ||n==1)return 1;
     return n*fact(n-1);
 } */
 int fact(unsigned int n){
     int result=1;
     for(int i=2; i<=n; i++){
        result=result*i;
     }
     return result;
 }
