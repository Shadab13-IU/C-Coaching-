#include<stdio.h>
 int power(unsigned int,unsigned int);
 int main(){ 
     unsigned int x;
     unsigned int n;
     printf("Enter a 2 positive number:  ");
     scanf("%u%u",&x,&n);
     int result=power(x,n);
     printf("%u to the power %u=%d\n",x,n,result);
     return 0;
 }
 /*int power(unsigned int x,unsigned int n){
     if(n==0)return 1;
     return x*power(x,n-1);
 }*/
 // using for loop to solve this problem
 int power(unsigned int x,unsigned int n){
     int result=1;
     for(int i=1; i<=n; i++){
        result=result*x;
     }
     return result;
 }
