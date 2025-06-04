#include<stdio.h>
 int main(){
     int x=10;
     /*int* p=&x;
     //second method
     //p=&x; 
     printf("Address of x=%p\n",&x);
     printf("Address of x=%p\n",p);
     printf("Value of x=%d\n",x);
     printf("Value of x=%d\n",*p);
     //can change the value of x by two method
     x=50; 
     printf("Value of x=%d\n",x);
     *p=60;
     printf("Value of x=%d\n",*p);
     //int* p=&x;*/
     int* p=&x;
     int a=&x;
     printf("Address of x is %p\n",p);
     printf("Address of x is %x\n",a);
     p++; 
     a++;
     printf("Address of x=%p\n",p);
     printf("Address of x=%x\n",a);
     return 0;
 }
