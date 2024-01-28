#include<stdio.h>
#include<string.h>
int main(){
    /*
    L1-044 稳赢
    分数 15
    作者 陈越
    单位 浙江大学
    大家应该都会玩“锤子剪刀布”的游戏：两人同时给出手势，胜负规则如图所示：
    现要求你编写一个稳赢不输的程序，根据对方的出招，给出对应的赢招。但是！为了不让对方输得太惨，你需要每隔K次就让一个平局。
    输入格式：
    输入首先在第一行给出正整数K（≤10），即平局间隔的次数。随后每行给出对方的一次出招：ChuiZi代表“锤子”、
    JianDao代表“剪刀”、Bu代表“布”。End代表输入结束，这一行不要作为出招处理。
    输出格式：
    对每一个输入的出招，按要求输出稳赢或平局的招式。每招占一行。
    输入样例：
    2
    ChuiZi
    JianDao
    Bu
    JianDao
    Bu
    ChuiZi
    ChuiZi
    End
    输出样例：
    Bu
    ChuiZi
    Bu
    ChuiZi
    JianDao
    ChuiZi
    Bu
    */
    int K, i, count=0;
    scanf("%d",&K);
    char str[8];
    getchar();
    scanf("%s",str);
    while(strcmp(str,"End")){
        if(!strcmp(str,"ChuiZi")){
            if(count==K){
                printf("ChuiZi\n");
                count=0;
            }else{
                printf("Bu\n");
                count++;
            }
        }else if(!strcmp(str,"Bu")){
            if(count==K){
                printf("Bu\n");
                count=0;
            }else{
                printf("JianDao\n");
                count++;
            }
        }else if(!strcmp(str,"JianDao")){
            if(count==K){
                printf("JianDao\n");
                count=0;
            }else{
                printf("ChuiZi\n");
                count++;
            }
        }
        scanf("%s",str);
        getchar();
    }
    return 0;
}