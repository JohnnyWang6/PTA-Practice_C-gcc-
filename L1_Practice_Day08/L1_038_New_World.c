#include<stdio.h>
int main(){
    /*
    L1-038 新世界
    分数 5
    作者 陈越
    单位 浙江大学
    这道超级简单的题目没有任何输入。
    你只需要在第一行中输出程序员钦定名言“Hello World”，并且在第二行中输出更新版的“Hello New World”就可以了。
    输入样例：
    无
    输出样例：
    Hello World
    Hello New World
    */
    char str1[12] = "Hello World";
    char str2[16] = "Hello New World";
    puts(str1);
    puts(str2);
    return 0;
}