#include<stdio.h>
int main(){
    /*
    L1-084 拯救外星人
    分数 10
    作者 陈越
    单位 浙江大学
    T.jpg
    你的外星人朋友不认得地球上的加减乘除符号，但是会算阶乘 —— 正整数 N 的阶乘记为 “N!”，
    是从 1 到 N 的连乘积。所以当他不知道“5+7”等于多少时，如果你告诉他等于“12!”，他就写出了“479001600”这个答案。
    本题就请你写程序模仿外星人的行为。
    输入格式：
    输入在一行中给出两个正整数 A 和 B。
    输出格式：
    在一行中输出 (A+B) 的阶乘。题目保证 (A+B) 的值小于 12。
    输入样例：
    3 6
    输出样例：
    362880
    */
    int A,B,i,j,result=1;
    scanf("%d %d",&A,&B);
    for(i=2;i<=A+B;i++){
        result*=i;
    }
    printf("%d\n",result);
    return 0;
}