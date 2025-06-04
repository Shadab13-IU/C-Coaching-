#include<stdio.h>
 void swap(int*,int*);
 int main(){
     int x,y;
     printf("Enter 2 number");
     scanf("%d%d",&x,&y);
     printf("x=%d\ty=%d\n",x,y);
     swap(&x,&y);
     printf("x =%d\ty=%d\n",x,y);
     return 0;
 }
 void swap(int* a,int* b){
     int temp;
     temp=*a;
     *a=*b;
     *b=temp;
 }
     
