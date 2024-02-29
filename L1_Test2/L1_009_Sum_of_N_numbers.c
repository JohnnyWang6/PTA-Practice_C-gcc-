/*
    L1-009 N个数求和
    分数 20
    作者 陈越
    单位 浙江大学
    本题的要求很简单，就是求N个数字的和。麻烦的是，这些数字是以有理数分子/分母的形式给出的，你输出的和也必须是有理数的形式。
    输入格式：
    输入第一行给出一个正整数N（≤100）。随后一行按格式a1/b1 a2/b2 ...给出N个有理数。题目保证所有分子和分母
    都在长整型范围内。另外，负数的符号一定出现在分子前面。
    输出格式：
    输出上述数字和的最简形式 —— 即将结果写成整数部分 分数部分，其中分数部分写成分子/分母，要求分子小于分母，
    且它们没有公因子。如果结果的整数部分为0，则只输出分数部分。
    输入样例1：
    5
    2/5 4/15 1/30 -2/60 8/3
    输出样例1：
    3 1/3
    输入样例2：
    2
    4/3 2/3
    输出样例2：
    2
    输入样例3：
    3
    1/3 -1/6 1/8
    输出样例3：
    7/24
*/
#include<stdio.h>
int gcd(long long int p,long long int q){
    if(p % q == 0){
        return q;
    }else{
        return gcd(q,p%q);
    }
}
int main(){
    long long int fenZi,fenMu,sumFenZi=0,sumFenMu=1;
    int i,N,m;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%lld/%lld",&fenZi,&fenMu);
        sumFenZi = (sumFenZi*fenMu+fenZi*sumFenMu);
        sumFenMu *=fenMu;
        m = gcd(sumFenZi,sumFenMu);
        sumFenZi /= m;
        sumFenMu /= m;
    }
    if(sumFenZi && sumFenZi<sumFenMu){ //当分子不等于0且小于分母
        printf("%lld/%lld\n",sumFenZi,sumFenMu);
    }else if(sumFenZi % sumFenMu == 0){ //当分子对分母取余等于0时，输出整数
        printf("%lld\n",sumFenZi/sumFenMu);
    }else{ //其他情况，当分子比分母大并且不能整除时
        printf("%lld %lld/%lld\n",sumFenZi/sumFenMu,sumFenZi%sumFenMu,sumFenMu);
    }
    return 0;
}