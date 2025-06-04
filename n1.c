#include<stdio.h>
#include<stdlib.h>

 int main(){
    typedef union{
            char* name;
            char* location;
   }loc;
   struct student{
          char* name;
          int age;

         loc* lp;
  }stu;
  stu.name="sumit";
  stu.age=65;
  stu.lp=(loc*)malloc(sizeof(loc));
  printf("%d\n",(int)sizeof(loc));
  stu.lp->name="Integral";
  stu.lp->location="Lucknow";
  printf("%s\n",stu.lp->name);
  printf("%s\n",stu.lp->location);
 
  return 0;
}
