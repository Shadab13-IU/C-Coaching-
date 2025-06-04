#include<stdio.h>
#include<stdlib.h>
 int* arthimeticop(int,int);
 int main(){
     int x,y;
     printf("ENter x and y:);
     scanf("%d%d",&x,&y);
     int* p=arthimeticop(x,y);
     printf("Sum=%d\n",p[0]);
     printf("Diff=%d\n",p[1]);
     printf("Mul=%d\n",p[2]);
     printf("Div=%d\n",p[3]);
     printf("Mod=%d\n",p[4]);
     return 0;
 }
 int* arthimeticop(int x,int y){
     int* arr=(int*)calloc(5,sizeof(int));
     arr[0]=x+y;
     arr[1]=
