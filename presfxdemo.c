#include<stdio.h>
#include<string.h>
void filllps(char* str,int* lps){
	    int i=1,j=0;
	    int len=strlen(str);
	    lps[0]=0;
	    while(i<len){
		if(str[i]==str[j]){
		  lps[i]=j+1;
		  i++;
		  j++;
		}else{
		  if(j==0){
			lps[i]=0;
			i++;
		 }else {
			j=lps[j-1];
		  }
		}
	    }
}
void KMPsearch(char* str, char* ptr){
	int n = strlen(str);
	int m = strlen(ptr);
	int lps[m];
	filllps(ptr,lps);
	int i=0,j=0;
	while(i<n){
	    if(str[i]==ptr[j]){
		i++;
		j++;
	    }
	    if(j==m){
		printf("pattern found at %d\n",i-j);
		return;
	    }else if(i<n && ptr[j]!=str[i]){
		if(j!=0){
		  j=lps[j-1];
		}else{
		  i=i+1;
		}
	     }
	}
	 printf("pattern not found\n");

}
  int main(int argc,char*argv[]){
	char* str= "ABCAABACCABABAAB";
	char* ptr="ABABA";
//	filllps(ptr,lps);
	KMPsearch(str,ptr);
	return 0;
  }
