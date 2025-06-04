#include<stdio.h>
#include<string.h>
	int hash(char *str,int index,int len){
		int hvalue=0;
		for(int i=index; i<(index+len); i++){
		   hvalue=(hvalue+str[i])%13;
		}
		return hvalue;
		printf("%d",hvalue);
	}
	int rabinkarp(char* str,char* ptr){
		int lens=strlen(str);
		int lenp=strlen(ptr);
		int hashArr[lens-lenp+1];
		for(int i=0; (i<lens-lenp+1); i++){
		    hashArr[i]=hash(str,i,lenp);
		}
		int hashptr=hash(ptr,0,lenp);
		for(int i=0; i<(lens-lenp+1); i++){
		   if(hashArr[i]==hashptr){
		      int j=0;
		      while(j<lenp&&ptr[j]==str[i+j])j++;
			if(j==lenp)return j++;
		   }
                }
		return -1;
	}
	int main(int argc,char* argv[]){
		char* str= "lucknow is a capital";
		char* ptr="clap";
		rabinkarp(str,ptr);
		return 0;
	}
