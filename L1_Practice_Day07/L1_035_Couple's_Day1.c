#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    /*
    L1-035 情人节
    分数 15
    作者 陈越
    单位 浙江大学
    以上是朋友圈中一奇葩贴：“2月14情人节了，我决定造福大家。第2个赞和第14个赞的，我介绍你俩认识…………咱三吃饭…你俩请…”。
    现给出此贴下点赞的朋友名单，请你找出那两位要请客的倒霉蛋。
    输入格式：
    输入按照点赞的先后顺序给出不知道多少个点赞的人名，每个人名占一行，为不超过10个英文字母的非空单词，以回车结束。
    一个英文句点.标志输入的结束，这个符号不算在点赞名单里。
    输出格式：
    根据点赞情况在一行中输出结论：若存在第2个人A和第14个人B，则输出“A and B are inviting you to dinner...”；
    若只有A没有B，则输出“A is the only one for you...”；若连A都没有，则输出“Momo... No one is for you ...”。
    输入样例1：
    GaoXZh
    Magi
    Einst
    Quark
    LaoLao
    FatMouse
    ZhaShen
    fantacy
    latesum
    SenSen
    QuanQuan
    whatever
    whenever
    Potaty
    hahaha
    .
    输出样例1：
    Magi and Potaty are inviting you to dinner...
    输入样例2：
    LaoLao
    FatMouse
    whoever
    .
    输出样例2：
    FatMouse is the only one for you...
    输入样例3：
    LaoLao
    .
    输出样例3：
    Momo... No one is for you ...
    */
    int i; //既可代表循环变量，又可代表点赞的人数
    char str[10000][11], A[11], B[11]; //定义足够长度的字符串保留空间
    for(i=0; i<10001; i++){
        gets(str[i]);
        if(strcmp(str[i],".") == 0){ //代表输入结束，利用字符串比较函数
            break;
        }
    }
    if(i<2){
        printf("Momo... No one is for you ...\n");
    }else if(i<14){
        printf("%s is the only one for you...\n",str[1]);
    }else{
        printf("%s and %s are inviting you to dinner...\n",str[1],str[13]);
    }
    return 0;
}