#include<stdio.h>
#include<ctype.h>
 int main(){
    /* int a, b;
     char op;
     printf("Enter a,b and op:");
     scanf("%d%c%d",&a,&op,&b);
     switch(op){
            case '+':
                 printf("Result=%d\n",a+b);
                 break;
            case 'x':
            case '-':
                 printf("Result=%d\n",a-b);
                 //break;
            case '*':
                 printf("Result=%d\n",a*b);
                 break;
            default:
                 printf("Enter a valid operator\n");
     }*/
     char ch;
     printf("Enter Alphabet:");
     scanf("%c",&ch);
     switch(tolower(ch)){
           case 'a':
           case 'e':
           case 'i':
           case 'o':
           case 'u':
                 printf("Alphabet is vowel\n");
                 break;
           default:
                 printf("Alphabet is constant\n");
    }
     return 0;
 }           
