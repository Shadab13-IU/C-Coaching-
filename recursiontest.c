#include<stdio.h>
	int main(void){
		int x=3;
		int y=8;
		printf("%d %d\n",func1(3,8),func2(3,8));
		return 0;
	}
	func1(int a,int b){
		if(a>b)
		return 0;
		return b + func1(a,b-1);
	}	
