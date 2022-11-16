#include<stdio.h>
#include<string.h>
int main(){
   int a;
   char c [50] = "" ;
   printf("enter number:");
   scanf("%d",&a);

   ToBinary(a, c);
   printf("result:%s",c );
   return 0;
}
void ToBinary(int num, int *b ){
   if (num==0) return  ;
   ToBinary(num/2, b);
   if(num%2 == 0 ) strcat(b, "0");
   else strcat (b, "1");
   return;

}
