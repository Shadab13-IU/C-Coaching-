
#include<stdio.h>
 int main(){
     int tda[3][2]={{2,4},{10,20},{11,22}};
     //
     printf("%d\n",*tda
     printf("%x\n",*(tda+2));
     printf("%d\n",*(*(tda+2)));
     printf("%d\n",*(tda+1));
     printf("%d\n",*(*(tda+2)+1));
     return 0;
 }
