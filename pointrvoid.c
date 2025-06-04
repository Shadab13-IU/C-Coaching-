#include<stdio.h>
 int main(){
     int x=10;
     float y=2.5f;
     long z= 15;
     void* vp;
     vp=&x;
     //printf("x=%d\n",*vp);
     printf("x=%d\n",*((int*)vp));
     vp=&y;
     printf("y=%f\n",*((float*)vp));
     return 0;
 }
