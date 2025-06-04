#include<stdio.h>
int main(){
	unsigned int x;
	printf("Enter a number\n");
	scanf("%u",&x);
	if(x&(x-1)==0){
		printf("Number entered by user is in power of 2\n");
	}else{
		printf("Number enterd by user is not in power of 2\n");
	}
	return 0;
}
