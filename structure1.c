
#include<stdio.h>
 int main(){
     struct user{
            char* username;
            char* password;
            char gender;
            int age;
     }guser[2]={{"amit","lucknow"},{"gmailwala","integrawala"}};                                          // guser={"Gmailwala","Integarlwala"};
     //struct user guser;
    // guser.username="Albela";
     printf("%s\n",guser[0].username);
     printf("%s\n",guser[1].password);
     return 0;
 }
