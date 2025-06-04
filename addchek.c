#include<stdio.h>
 int add(int,int);
 int main(){
     int a,b,c;
     printf("Enter number: ");
     scanf("%d %d",&a,&b);
     c=add(a,b);
     printf("Sum=%d\n",c);
     return 0;
 }
 int add(int x,int y){
     int z;
     z=x+y;
     //return z;
 }
     
