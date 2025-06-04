#include<stdio.h>
int main(){ 
    struct citizen{
           char* name;
           int age;
           char* location;
    }rahul={"Rahul rao",25,"Lucknow"};
 
   printf("%s\n",rahul.name);
   rahul.age=27;
   printf("%d\n",rahul.age);

  struct user{
      
         int age;
         char* name;
         int salary;
 }fbuser;
 // size of  struct user //  
 printf("%ld\n",sizeof(fbuser));
 printf("%ld\n",sizeof(struct user));

  return 0;
}
   

