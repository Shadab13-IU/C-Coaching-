#include<stdio.h>
 int add(int,int); 
 int main(){
     int a=10,b=20,c=30;
     int k=add(a,b);
     int m=add(a,c);
     int n=add(3,5);
     printf("k is %d\n",k);
     printf("m is %d\n",m);
     printf("n is %d\n",n);
     return 0;
 }
 int add(int x,int y){
     int z;
     z=x+y;
     return z;
 }
