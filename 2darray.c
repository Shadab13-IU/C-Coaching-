#include<stdio.h>
 int main(){
     int tda[4][4]={{1,2,3,4},{2,4,6,8},{3,5,7,9},{10,20,30,40}};
     for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
           printf("%d\t",tda[i][j]);
        }
        printf("\n");
     }
     // finding sum of primary diagional//
     int sum=0;
     for(int i=0; i<4; i++){
        /*for(int j=0; j<4; j++){
           if(i==j){
             sum=sum+tda[i][j];
           }
        }*/
        sum=sum+tda[i][i];
     }
     printf("sum of primary diagonal is %d\n",sum);

     // finding sum of secondary diagonal //
     int sum2=0;
     for(int i=0; i<4; i++){
        /*for(int j=0; j<4; j++){
           if(i+j==3){
              sum2=sum2+tda[i][j];
           }
        }*/
        sum2=sum2+tda[i][3-i];
     }
     printf("sum of secondary diagonal is %d\n",sum2);
           
     return 0;
 }
