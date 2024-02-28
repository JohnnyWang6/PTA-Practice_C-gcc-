/*
    L1-013 计算阶乘和
    分数 10
    作者 陈越
    单位 浙江大学
    对于给定的正整数N，需要你计算 S=1!+2!+3!+...+N!。
    输入格式：
    输入在一行中给出一个不超过10的正整数N。
    输出格式：
    在一行中输出S的值。
    输入样例：
    3
    输出样例：
    9
*/
#include<stdio.h>
int main(){
    int N,S=0,i,j,num;
    scanf("%d",&N);
    for(i=N;i>=1;i--){
        num=1;
        for(j=i;j>=1;j--){
            num*=j;
        }
        S+=num;
    }
    printf("%d\n",S);
    return 0;
}