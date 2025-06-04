#include<stdio.h>
 int main(int argc,char** argv){
     struct student{
            char* name;
            int age;
            char gender;
    }*stp=NULL;
    printf("Size of stp(pointer)=%d\n",(int)sizeof(stp));
    struct student st;
    stp=&st;
    st.name="Manoj kumar";
    st.age=80;
    st.gender='M';
    printf("Name=%s\n",stp->name);
    printf("Age=%d\n",stp->age);
    printf("Gender=%c\n",stp->gender);
    return 0;
 }
