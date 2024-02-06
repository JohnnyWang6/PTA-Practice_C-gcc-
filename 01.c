#include<stdio.h>
int main(){
    int num[6][7]={0},n,i;
    // scanf("%d %d %d %d %d %d",&num[0][0],&num[1][0],&num[2][0],&num[3][0],&num[4][0],&num[5][0]);
    // printf("%d %d %d %d %d %d",num[0][0],num[1][0],num[2][0],num[3][0],num[4][0],num[5][0]);
    printf("%d\n",num[1][1]);
    for(i=0;i<6;i++){
        scanf("%d",&num[i][0]);
    }
    scanf("%d",&n);
    printf("n=%d\n",n);
    
    return 0;
}