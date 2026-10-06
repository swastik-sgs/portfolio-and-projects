#include<stdio.h>
int main(){
   int n, h, t , o;
   printf("enter values");
   scanf("%d", &n);
   h=n/100;
   t=(n%100)/10;
   o= (n%100)%10;

   printf("hour= %d\n",h);
   printf("min %d\n",t);
   printf("sec %d\n",o);
   
   return 0;
}