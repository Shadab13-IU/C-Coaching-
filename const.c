#include<stdio.h>
 int main(){ 
     /*const int x=10;
     const int* p=&x;// pointer to const int
           printf("%d\t%d\n",x,*p);
           //x=15; //it will show error
           printf("%d\n",x);
           //*p=50;// it will not change as p is pointer to const int //
           printf("%d\n",*p);
           int y=20;
           p=&y;// as p is not const so it can be change 
           printf("%d\n",*p);
           *p=30;// address can chage but p to which pointing can't be change as declare const
           printf("%d\n",y);*/
           int x=10;
           //int* const p=&x;
           const int* const p=&x;
           printf("%x=%d\n",x);
           *p=30;
           int y=30;
           p=&y;
           return 0;
 }
