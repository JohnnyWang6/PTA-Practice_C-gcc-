#include<stdio.h>
int main(){
    /*
    L1-092 进化论
    分数 10
    作者 陈越
    单位 浙江大学
    fig.jpg
    在“一年一度喜剧大赛”上有一部作品《进化论》，讲的是动物园两只猩猩进化的故事。猩猩吕严说自己已经进化了 9 年了，
    因为“三年又三年”。猩猩土豆指出“三年又三年是六年呐”……
    本题给定两个数字，以及用这两个数字计算的结果，要求你根据结果判断，这是吕严算出来的，还是土豆算出来的。
    输入格式：
    输入第一行给出一个正整数 N，随后 N 行，每行给出三个正整数 A、B 和 C。其中 C 不超过 10000，
    其他三个数字都不超过 100。
    输出格式：
    对每一行给出的三个数，如果 C 是 A×B，就在一行中输出 Lv Yan；如果是 A+B，就在一行中输出 Tu Dou；
    如果都不是，就在一行中输出 zhe du shi sha ya!。
    输入样例：
    3
    3 3 9
    3 3 6
    3 3 12
    输出样例：
    Lv Yan
    Tu Dou
    zhe du shi sha ya!
    */
    int N,A,B,C,i;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d %d %d",&A,&B,&C);
        if(C==A*B){
            printf("Lv Yan\n");
        }else if(C==A+B){
            printf("Tu Dou\n");
        }else{
            printf("zhe du shi sha ya!\n");
        }
    }
    return 0;
}