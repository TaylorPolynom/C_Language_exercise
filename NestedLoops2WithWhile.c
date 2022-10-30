#include<stdio.h>
int main(){
    //Same project only with while loops
    /*
    1
    12
    123
    */

    int i=1;
    printf("Enter some number to which you want to print right triangle!\n");
    int n;
    scanf("%d",&n);
    while(i<=n){
        int j=1;
         while(j<=i){
            printf("%d",j);
           j++;
        }
            printf("\n");
            i++;
    }


    return 0;
}
