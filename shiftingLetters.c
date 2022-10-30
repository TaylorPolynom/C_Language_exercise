#include <stdio.h>
int main(){
#define N 3
char a[N]={'b','c','a'};
int i;
int j=2;
for( i=0;i<3;i++){
    printf("%c\n",a[i]);
}

for(i=0;i<=N%2;i++){
int temp =a[i];
a[i]=a[j];
a[j]=temp;
j--;
}
printf("*************************\n");
for( i=0;i<N;i++){
    printf("%c\n",a[i]);
}
return 0;
}
