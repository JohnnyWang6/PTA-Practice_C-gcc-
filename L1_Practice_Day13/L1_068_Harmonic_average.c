#include<stdio.h>
int main(){
    /*
    L1-068 调和平均
    分数 10
    作者 陈越
    单位 浙江大学
    N 个正数的算数平均是这些数的和除以 N，它们的调和平均是它们倒数的算数平均的倒数。
    本题就请你计算给定的一系列正数的调和平均值。
    输入格式：
    每个输入包含 1 个测试用例。每个测试用例第 1 行给出正整数 N (≤1000)；第 2 行给出 N 个正数，
    都在区间 [0.1,100] 内。
    输出格式：
    在一行中输出给定数列的调和平均值，输出小数点后2位。
    输入样例：
    8
    10 15 12.7 0.3 4 13 1 15.6
    输出样例：
    1.61
    */
    int N, i;
    double sum=0, num, result;
    scanf("%d",&N);
    for(i=0; i<N; i++){
        scanf("%lf",&num);
        num = 1.0/num;
        sum+=num;
    }
    double average = sum / N;
    result = 1.0 / average;
    printf("%.2lf\n",result);
    return 0;
}