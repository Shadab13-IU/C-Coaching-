#include<stdio.h>
 int main(){
     int a[3][3]={{2,3,5},{1,4,8},{9,7,6}};
     int b[3][3]={{1,8,9},{4,6,7},{3,2,1}};
     int c[3][3];
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
           for(int k=0; k<3; k++){
              c[i][j]+=a[i][k]*b[k][j];
           }
        }
     }
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
     }
     return 0;
 }  
