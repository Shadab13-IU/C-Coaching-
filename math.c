#include<stdio.h>
#include<math.h>
 int main(int argc,char* argv[]){
     printf("Enter a number:");
     double d,result;
     scanf("%lf",&d);
     result=sqrt(d);
     printf("Square root=%lf\n",result);
     return 0;
 }
