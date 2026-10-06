#include<stdio.h>
int main(){
   int a,b;
   char oe;

   printf("enter number");
   scanf("%d%d", &a, &b);

   printf("enter oerator");
   scanf("%c", &oe);

   switch(oe){
    case '+':
       printf("%d",a+b);
       break;
    case '-':
       printf("%d", a-b);
       break;
    case '*':
       printf("%d", a*b);
       break;
    case '/':
       printf("%d", a/b);
       break;
    
    default:
       printf("invalid");
   }
    return 0;
}