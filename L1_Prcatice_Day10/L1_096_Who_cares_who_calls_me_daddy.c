#include<stdio.h>
int main(){
    /*
    L1-096 谁管谁叫爹
    分数 20
    作者 陈越
    单位 浙江大学
    die.jpg
    《咱俩谁管谁叫爹》是网上一首搞笑饶舌歌曲，来源于东北酒桌上的助兴游戏。现在我们把这个游戏的难度拔高一点，多耗一些智商。
    不妨设游戏中的两个人为 A 和 B。游戏开始后，两人同时报出两个整数 NA和NB。判断谁是爹的标准如下：
    将两个整数的各位数字分别相加，得到两个和 SA和SB。如果 NA正好是SB的整数倍，则 A 是爹；如果 NB正好是SA
    的整数倍，则 B 是爹；
    如果两人同时满足、或同时不满足上述判定条件，则原始数字大的那个是爹。
    本题就请你写一个自动裁判程序，判定谁是爹。
    输入格式：
    输入第一行给出一个正整数 N（≤100），为游戏的次数。以下 N 行，每行给出一对不超过 9 位数的正整数，
    对应 A 和 B 给出的原始数字。题目保证两个数字不相等。
    输出格式：
    对每一轮游戏，在一行中给出赢得“爹”称号的玩家（A 或 B）。
    输入样例：
    4
    999999999 891
    78250 3859
    267537 52654299
    6666 120
    输出样例：
    B
    A
    B
    A
    */
    int N,i,flagA,flagB;
    long long int A, B, sumA, sumB, tempA, tempB;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        sumA=0;
        sumB=0;
        flagA=0;
        flagB=0;
        scanf("%lld %lld",&A,&B);
        tempA=A;
        tempB=B;
        while(tempA!=0){
            sumA+=tempA%10;
            tempA/=10;
        }
        while(tempB!=0){
            sumB+=tempB%10;
            tempB/=10;
        }
        if(A%sumB==0){
            flagA=1;
        }
        if(B%sumA==0){
            flagB=1;
        }
        if(flagA==1&&flagB==1 || flagA==0&&flagB==0){
            if(A>B){
                printf("A\n");
            }else{
                printf("B\n");
            }
        }else if(flagA==1&&flagB==0){
            printf("A\n");
        }else if(flagA==0&&flagB==1){
            printf("B\n");
        }
    }
    return 0;
}