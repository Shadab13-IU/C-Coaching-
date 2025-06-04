#include<stdio.h>
 int main(){
     int flag=0;
     for(int i=0; i<5; i++){
	//if(i==2)break;
	if(i==2){flag=1; break;}
        for(int j=0; j<5; j++){
            //if(j==2)goto ab;
	    printf("%d\t%d\n",i,j);
	}
	if(flag==1)break;
     }
    // ab:
 }
