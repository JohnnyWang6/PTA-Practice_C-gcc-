#include<stdio.h>
#include<string.h>
int main(){
    /*
    L1-032 Left-pad
    分数 20
    作者 陈越
    单位 浙江大学
    根据新浪微博上的消息，有一位开发者不满NPM（Node Package Manager）的做法，收回了自己的开源代码，
    其中包括一个叫left-pad的模块，就是这个模块把javascript里面的React/Babel干瘫痪了。这是个什么样的模块？
    就是在字符串前填充一些东西到一定的长度。例如用*去填充字符串GPLT，使之长度为10，调用left-pad的结果就应该是
    ******GPLT。Node社区曾经对left-pad紧急发布了一个替代，被严重吐槽。下面就请你来实现一下这个模块。
    输入格式：
    输入在第一行给出一个正整数N（≤10的4次方）和一个字符，分别是填充结果字符串的长度和用于填充的字符，中间以1个空格分开。第二行给出原始的非空字符串，以回车结束。
    输出格式：
    在一行中输出结果字符串。
    输入样例1：
    15 _
    I love GPLT
    输出样例1：
    ____I love GPLT
    输入样例2：
    4 *
    this is a sample for cut
    输出样例2：
    cut
    */
    int N, len, x, i;
    char c, str[100000]; //str的长度尽量保持比题目要求长一个数量级，提交时显示运行时错误一般是定义的长度范围不够大
    scanf("%d %c\n",&N,&c); //要加上一个\n，不然会有错误输入，或者在后面加一个getchar
    //getchar();
    gets(str);
    len = strlen(str);
    //printf("len=%d\n",len);
    if(N > len){ //如果N大于字符串的长度，那么就输出
        x = N - len;
        for(i=0; i<x; i++){ //打印要输出的x个字符, x=N-len
            printf("%c",c);
        }
        /* for(i=0; i<len; i++){
            printf("%c",str[i]);
        } */
        puts(str); //输出原字符串
    }else{ //如果N小于等于len，就只输出原字符串的最后N个字符;
        x = len - N;
        for(i=x; i<len; i++){ //从x=len-N索引开始输出原字符串的最后N个字符
            printf("%c",str[i]);
        }
    }
    return 0;
}