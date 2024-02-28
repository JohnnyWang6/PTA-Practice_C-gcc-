/*
    L1-015 跟奥巴马一起画方块
    分数 15
    作者 陈越
    单位 浙江大学
    美国总统奥巴马不仅呼吁所有人都学习编程，甚至以身作则编写代码，成为美国历史上首位编写计算机代码的总统。
    2014年底，为庆祝“计算机科学教育周”正式启动，奥巴马编写了很简单的计算机代码：在屏幕上画一个正方形。
    现在你也跟他一起画吧！
    输入格式：
    输入在一行中给出正方形边长N（3≤N≤21）和组成正方形边的某种字符C，间隔一个空格。
    输出格式：
    输出由给定字符C画出的正方形。但是注意到行间距比列间距大，所以为了让结果看上去更像正方形，
    我们输出的行数实际上是列数的50%（四舍五入取整）。
    输入样例：
    10 a
    输出样例：
    aaaaaaaaaa
    aaaaaaaaaa
    aaaaaaaaaa
    aaaaaaaaaa
    aaaaaaaaaa
*/
#include<stdio.h>
int main(){
    int N,i,j,line,row;
    char c;
    scanf("%d %c",&N,&c);
    row = N;
    line = (int)(N+1)/2;
    for(i=0;i<line;i++){
        for(j=0;j<row;j++){
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}