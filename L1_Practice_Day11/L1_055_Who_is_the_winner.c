#include<stdio.h>
int main(){
    /*
    L1-055 谁是赢家
    分数 10
    作者 陈越
    单位 浙江大学
    某电视台的娱乐节目有个表演评审环节，每次安排两位艺人表演，他们的胜负由观众投票和 3 名评委投票两部分共同决定。
    规则为：如果一位艺人的观众票数高，且得到至少 1 名评委的认可，该艺人就胜出；或艺人的观众票数低，
    但得到全部评委的认可，也可以胜出。节目保证投票的观众人数为奇数，所以不存在平票的情况。本题就请你用程序判断谁是赢家。
    输入格式：
    输入第一行给出 2 个不超过 1000 的正整数 Pa 和 Pb，分别是艺人 a 和艺人 b 得到的观众票数。
    题目保证这两个数字不相等。随后第二行给出 3 名评委的投票结果。数字 0 代表投票给 a，数字 1 代表投票给 b，
    其间以一个空格分隔。
    输出格式：
    按以下格式输出赢家：
    The winner is x: P1 + P2
    其中 x 是代表赢家的字母，P1 是赢家得到的观众票数，P2 是赢家得到的评委票数。
    输入样例：
    327 129
    1 0 1
    输出样例：
    The winner is a: 327 + 1
    */
    int Pa, Pb, i, countA=0, countB=0, num;
    scanf("%d %d",&Pa, &Pb);
    for(i=0; i<3; i++){
        scanf("%d",&num);
        if(num == 0){
            countA++;
        }else if(num == 1){
            countB++;
        }
    }
    if(Pa > Pb && countA >= 1){
        printf("The winner is a: %d + %d\n",Pa,countA);
    }else if(Pa < Pb && countA == 3){
        printf("The winner is a: %d + %d\n",Pa,countA);
    }else{
        printf("The winner is b: %d + %d\n",Pb,countB);
    }
    return 0;
}