#include<stdio.h>
 int main(){
     int a[3][3]={{2,3,1},{4,3,5},{5,6.,7}}; 
     int b[3][3];
     printf("before transpose\n");
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
           printf("%d\t",a[i][j]);
        }
        printf("\n");
     }
     printf("After transpose\n");
     
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
           b[i][j]=a[j][i];
        }
     }
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
           printf("%d\t",b[i][j]);
        }
        printf("\n");
     }
     return 0;
 }
