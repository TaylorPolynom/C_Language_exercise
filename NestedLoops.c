#include<stdio.h>
int main(){
    printf("Enter some number you want to make right triangle numbers\n");
    int n;
    scanf("%d",&n);
    printf("Answer: \n");
    int i=1;
    int j=1;
    for(i;i<=n;i++){
      for(j=1;j<=i;j++){
        printf("%d",j);
      }
        printf("\n");
    }
    return 0;
}
