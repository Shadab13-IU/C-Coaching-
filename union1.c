#include<stdio.h>
 int main(){
     union student{
           char* name;
           int age;
     }stu;
     printf("%d\n",(int)sizeof(stu));
     stu.name=30;
     printf("%d\n",stu.age);
     return 0;
 }
