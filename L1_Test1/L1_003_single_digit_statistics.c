/*
    L1-003个位数统计
    分数 15
    作者 陈越
    单位 浙江大学
    给定一个 k 位整数 N=dk−110 k−1+⋯+d1101+d 0(0≤di​≤9, i=0,⋯,k−1, dk−1
    >0)，请编写程序统计每种不同的个位数字出现的次数。例如：给定 N=100311，则有 2 个 0，3 个 1，和 1 个 3。
    输入格式：
    每个输入包含 1 个测试用例，即一个不超过 1000 位的正整数 N。
    输出格式：
    对 N 中每一种不同的个位数字，以 D:M 的格式在一行中输出该位数字 D 及其在 N 中出现的次数 M。要求按 D 的升序输出。
    输入样例：
    100311
    输出样例：
    0:2
    1:3
    3:1
*/
#include<stdio.h>
#include<string.h>
int main(){
    int i,len,x,num[10]={0};
    char str[1001];
    scanf("%s",str);
    len = strlen(str);
    for(i=0;i<len;i++){
        x = str[i]-'0';
        num[x]++;
    }
    for(i=0;i<10;i++){
        if(num[i]!=0){
            printf("%d:%d\n",i,num[i]);
        }
    }
    return 0;
}