#include<stdio.h>
 int main(){
     struct student{
            int age;
            struct student* p;
     }*stp=NULL;
     struct student s1;
     struct student s2;
     struct student s3;
     stp=&s1;
     s1.p=&s2;
     s2.p=&s3;
     s3.p=NULL;
     s1.age=20;
     s2.age=30;
     s3.age=40;
     while(stp!=NULL){
          printf("%d\t",stp->age);
          stp=stp->p;
     }
     printf("\n");
     return 0;
 }
