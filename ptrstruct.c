#include<stdio.h>
 int main(){
     struct user{
            char* name;
            int age;
            int salary;
     }*sp;
     
     struct user fbuser;
     sp=&fbuser;
     sp->name="Mukesh";
     sp->age=35;
     sp->salary=10000;

     printf("%s\n",fbuser.name);
     printf("%s\n",sp->name);
  
     return 0;
}
 
    
