#include<stdio.h>
int main(){
    int i=0;
   char a[3]={'A','C','B'};
   int j=3;
   for(i;i<j/2;i++){
   char temp=a[i];
   a[i]=a[j];
   a[j]=temp;
    printf("%c\n",a[i]);

   }


return 0;
}
