#include<stdio.h>
int main(){
   //sum of digits of a given number!!!!! 987=9+8+7
   int n;
   int sum=0;
   printf("Enter some number\n");
   scanf("%d",&n);
   while(n>0){
   sum=sum+n%10;
   n=n/10;
   }
   printf("Suma = %d\n",sum);
    return 0;
}
