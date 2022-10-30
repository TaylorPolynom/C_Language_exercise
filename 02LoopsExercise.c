#include<stdio.h>
int main(){
    /*
    //Print a program that prints number from 1.....n.
    int num=1;
    int n=0;
    int counter=0;
    printf("Enter some number to what you want to print number!\n");
    scanf("%d",&n);
    while(num<=n){
        printf("%2d-> %d\n",counter,num);
        counter++;
        num++;

    }
    */

    //find a factotial N!  4!=4*3*2*1
    int n;

    int fact=1;
    printf("Enter some number you want a factorial of!\n");
    scanf("%d",&n);
    int m=n;
    if(n>0){
    while(n>1){
    fact=fact*n;
    n--;
    }
    printf("Faktorijal of %d je -> %3d",m,fact);
    }else{
     printf("Can\'t fint factorial!");
    }


    return 0;
}
