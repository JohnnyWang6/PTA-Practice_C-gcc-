#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int D, afterTomorrow;
    scanf("%d",&D);
    if(D>=6){
        afterTomorrow = D + 2 - 7;
    }else{
        afterTomorrow = D + 2;
    }
    printf("%d",afterTomorrow);
    /*
    L1-024 后天
    分数 5
    作者 陈越
    单位 浙江大学
    如果今天是星期三，后天就是星期五；如果今天是星期六，后天就是星期一。我们用数字1到7对应星期一到星期日。给定某一天，
    请你输出那天的“后天”是星期几。
    输入格式：
    输入第一行给出一个正整数D（1 ≤ D ≤ 7），代表星期里的某一天。
    输出格式：
    在一行中输出D天的后天是星期几。
    输入样例：
    3
    输出样例：
    5
    */
    return 0;
}