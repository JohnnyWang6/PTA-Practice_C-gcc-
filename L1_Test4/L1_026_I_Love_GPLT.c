/*
    L1-026 I Love GPLT
    分数 5
    作者 陈越
    单位 浙江大学
    这道超级简单的题目没有任何输入。
    你只需要把这句很重要的话 —— “I Love GPLT”——竖着输出就可以了。
    所谓“竖着输出”，是指每个字符占一行（包括空格），即每行只能有1个字符和回车。
    输入样例：
    无
    输出样例：
    I
    
    L
    o
    v
    e
    
    G
    P
    L
    T
    注意：输出的两个空行中各有一个空格。
*/
#include<stdio.h>
int main(){
    int i;
    char str[12]="I Love GPLT";
    for(i=0;i<11;i++){
        printf("%c\n",str[i]);
    }
    return 0;
}