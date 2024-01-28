#include<stdio.h>
int main(){
    /*
        L1-041 寻找250
    分数 10
    作者 陈越
    单位 浙江大学
    对方不想和你说话，并向你扔了一串数…… 而你必须从这一串数字中找到“250”这个高大上的感人数字。
    输入格式：
    输入在一行中给出不知道多少个绝对值不超过1000的整数，其中保证至少存在一个“250”。
    输出格式：
    在一行中输出第一次出现的“250”是对方扔过来的第几个数字（计数从1开始）。题目保证输出的数字在整型范围内。
    输入样例：
    888 666 123 -233 250 13 250 -222
    输出样例：
    5
    */
    int num=0, count = 0;
    while(num != 250 || count == 0){
        scanf("%d",&num);
        count++;
    }
    printf("%d\n",count);
    return 0;
}