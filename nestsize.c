#include<stdio.h>
#include<stdlib.h>
int main(){
    struct student{ 
           char* name;
           int age;
           struct college{
                  char* name;
                  char* location;
           }col;
   }; 
   struct student stu;
   printf("%d\n",(int)sizeof(stu));
   // assign value
   stu.name="AMit";
   stu.col.name="Integral University";
   printf("%s\n",stu.col.name);

 return 0;
}
