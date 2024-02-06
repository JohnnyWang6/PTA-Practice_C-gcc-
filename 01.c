#include<stdio.h>
int main(){
    int N,M,Q,choose1,choose2,i,j;
    scanf("%d %d %d",&N,&M,&Q);
    int line[N+1],row[M+1];
    long int sum = N*M;
    int tempLine=N,tempRow=M;
    for(i=0;i<Q;i++){
        scanf("%d %d",&choose1,&choose2);
        if(choose1==0){
            if(line[choose2]==1){
                sum-=tempRow;
                tempLine--;
                line[choose2]=0;
            }
        }else if(choose1==1){
            if(row[choose2]==1){
                sum-=tempLine;
                tempRow--;
                row[choose2]=0;
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}