#include<stdio.h>
int gcd(long long int p, long long int q){
        if(p % q == 0){
            return q;
        }else{
            return gcd(q, p%q);
        }
    }
int main(){
    long long int fenZi, fenMu, sumFenZi = 0, sumFenMu = 1; //分子的和的初值为0，分母初值为1
    int i, N, m; //m代表sumFenZi和sumFenMu的最大公约数
    scanf("%d",&N);
    for(i=0; i<N; i++){
        scanf("%lld/%lld",&fenZi,&fenMu);
        //分母通分之后，分子都乘以另一个分数的分母,分母变成两个分数的乘积
        sumFenZi = (sumFenZi*fenMu + fenZi*sumFenMu);
        sumFenMu *= fenMu;
        m = gcd(sumFenZi, sumFenMu); //获得相加后的分子分母的最大公约数
        sumFenZi /= m; //约分
        sumFenMu /= m;
    }

    if(sumFenZi && sumFenZi/sumFenMu == 0){ //如果分子不为零且分子比分母小
        printf("%lld/%lld\n",sumFenZi,sumFenMu);
    }else if(sumFenZi % sumFenMu == 0){ //如果分子对分母取余=0代表分子是分母的整数倍
        printf("%lld\n",sumFenZi/sumFenMu);
    }else{ //其他情况，即分子比分母大并且不能取余
        printf("%lld %lld/%lld\n",sumFenZi/sumFenMu, sumFenZi%sumFenMu, sumFenMu);
    }
    return 0;
}