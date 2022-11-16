#include<stdio.h>

int main(){
   int a,b;
   printf("enter number:");
   scanf("%d",&a);
    printf("enter number1:");
   scanf("%d",&b);

   printf("result:%d", mul(a,b));
   return 0;
}
int mul(int a, int b ){
   if (a==0 || b ==0) return 0 ;
   else if(b<0) return -a + mul(a, b+1)  ;
   else return a + mul(a , b-1);
}
