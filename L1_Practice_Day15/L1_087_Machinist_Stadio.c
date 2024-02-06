#include<stdio.h>
int main(){
    int N,M,Q,choose1,choose2,i,j;
    scanf("%d %d %d",&N,&M,&Q);
    int line[N+1],row[M+1];//定义行和列的数组全部赋值为1，每次攻击完后把数组中那一行或列的值设为0，后续攻击到时不再重复减
    for(i=0;i<N+1;i++){ //赋值
        line[i]=1;
    }
    for(i=0;i<M+1;i++){ //赋值
        row[i]=1;
    }
    long int sum = N*M;
    int tempLine=N,tempRow=M;
    for(i=0;i<Q;i++){
        scanf("%d %d",&choose1,&choose2);
        if(choose1==0){ //如果攻击的是行
            if(line[choose2]==1){ //只有该行没有被攻击过才减
                sum-=tempRow; //减去的是tempRow,即实时的列数，
                tempLine--; //减完之后，行数-1
                line[choose2]=0; //减完之后，该行数设为0
            }
        }else if(choose1==1){ //如果攻击的是列
            if(row[choose2]==1){ //同上
                sum-=tempLine;
                tempRow--;
                row[choose2]=0;
            }
        }
    }
    printf("%ld\n",sum);
    return 0;
}