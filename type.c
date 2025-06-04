#include<stdio.h>

int main(){
    typedef struct{
            char* name;
            int age;
            char* college;
    }student;
 

   student mukesh;
   printf("%ld\n",sizeof(student));
   printf("%d\n",(int)sizeof(student));
   return 0;
}
