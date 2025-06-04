#include<stdio.h>
 int main(){
     int x=10;
     int* p=&x;
     /*int k=*p;//rvalue
     *p=30; //lvalue
     printf("%d\n",k);
     printf("%d\n",x);*/
     printf("Size of x=%d\n",(int)sizeof(x));
     printf("Size of p=%d\n",(int)sizeof(p));
     return 0;
 }   
  
      
