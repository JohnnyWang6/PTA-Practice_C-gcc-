#include<stdio.h>
int main(){
    //commit3
    int N,M,i;
    double price;
    scanf("%d %d",&N,&M);
    for(i=0;i<N;i++){
        scanf("%lf",&price);
        if(price<M){
            printf("On Sale! %.1lf\n",price);
        }
    }
    return 0;
}