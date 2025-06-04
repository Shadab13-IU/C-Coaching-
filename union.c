#include<stdio.h>
#include<stdlib.h>

 typedef union{
         char* name;
         int age;
         char* college;
 }student;
 int main(int argc,int argv[]){
     student mystudent;
     printf("%xd\n",(int)sizeof(mystudent));
     mystudent.name="MUkesh";
    printf("%s\n",mystudent.name);
   printf("%s\n",mystudent.college);




    return 0;
}
