#include<stdio.h>
int main(){

   /*
   print pathern like
   1
   22
   333
   4444
   */

   int i=1;

   while(i<=4){
       int j=1;
       while(j<=i){
         printf("%d",i);
         j++;
       }
       i++;
       printf("\n");

   }

    return 0;
}
