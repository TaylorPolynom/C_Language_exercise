#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter 3 values\n");//a>b>c
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
         printf("a is the bigest\n");
          if(b>c){
            printf("%d>%d>%d\n",a,b,c);
          }else{
             printf("%d>%d>%d\n",a,c,b);
          }
        }else{
        printf("c is the bigest\n");
         if(a>b){
            printf("%d>%d>%d\n",c,a,b);
          }else{
             printf("%d>%d>%d\n",c,b,a);
          }




        }

    }else{
        if(b>c){
         printf("b is the bigest\n");
          if(a>c){
            printf("%d>%d>%d\n",b,a,c);
          }else{
             printf("%d>%d>%d\n",b,c,a);
          }
        }else{
        printf("c is the bigest\n");
         if(b>a){
            printf("%d>%d>%d\n",c,b,a);
          }else{
             printf("%d>%d>%d\n",c,a,b);
          }
        }

    }


    return 0;
}
