#include<stdio.h>
 int main(){
     struct student{
            /* char* name;
            int age;
            char gender;*/
            // changing order of member //
            /* char gender;
            char* name;
            int age;*/
            float name;
            char pwd;
     }stu;
     printf("%d\n",(int)sizeof(stu));
     return 0;
 }
