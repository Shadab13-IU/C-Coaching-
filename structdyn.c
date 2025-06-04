#include<stdio.h>
#include<malloc.h>
  typedef struct{
             char* name;
             int age;
             char* college;
 }student;
 
  int main(int argc, char* argv[]){
     student *stu=(student*)malloc(sizeof(student));
     stu->name="Mukesh";
     stu->age=30;
     stu->college="iul";
     printf("%s\n",stu->name);  





   return 0;
}
     
    
