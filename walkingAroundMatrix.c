#include<stdio.h>
#include<math.h>

#define N 11

int main(){
int a[N][N];
int i,j;
for(i=0;i<N-1;i++){
    for(j=0;j<N-1;j++){
        a[i][j]=0;
}
}
printf("\n\n");

for(i=0;i<N-1;i++){
    for(j=0;j<N-1;j++){
      printf("%d ",a[i][j]);
}
printf("\n");

}
printf("***************************");
printf("\n");
int x,y,t=0;


while(1){
printf("Unesi koordinate x\n");
scanf("%d",&x);
printf("Unesi koordinate y\n");
scanf("%d",&y);
    if(a[x][y]==0){
        a[x][y]=1;

    }else{
        break;
    }



}













printf("\n\n");

for(i=0;i<N-1;i++){
    for(j=0;j<N-1;j++){
      printf("%d ",a[i][j]);
}
printf("\n");
}

    return 0;
}
