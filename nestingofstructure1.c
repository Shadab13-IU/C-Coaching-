#include<stdio.h>
 int main(){
     typedef struct {
             char* city;
             char* country;
     }address;
     union student{
             char* name; // storage class is not aplliacable with structure member (auto, static, extern,typedef) 
             int age; // member of structure can't be intialize within structure 
            /* struct address{
                   char* city;
                   char* country;
            }adr;*/
            address adr;
     }*sp;         //stu;
     union student stu;
     printf("size of inner structure=%d\n",(int)sizeof(stu.adr));
     printf("%d\n",(int)sizeof(stu));
     sp=&stu;
     stu.name="	Abdul Ahad";
     stu.age=23;
     stu.adr.city="Lucknow";
     stu.adr.country="India";
     printf("Country is %s\n",sp->adr.country);
     return 0;
 }
