#include<stdio.h>
#include<math.h>
int main(){
    /*
    7-33 有理数加法
    分数 15
    作者 乔林
    单位 清华大学
    本题要求编写程序，计算两个有理数的和。
    输入格式：
    输入在一行中按照a1/b1 a2/b2的格式给出两个分数形式的有理数，其中分子和分母全是整形范围内的正整数。
    输出格式：
    在一行中按照a/b的格式输出两个有理数的和。注意必须是该有理数的最简分数形式，若分母为1，则只输出分子。
    输入样例1：
    1/3 1/6
    输出样例1：
    1/2
    输入样例2：
    4/3 2/3
    输出样例2：
    2
    */
    int a1,b1,a2,b2;
    scanf("%d/%d %d/%d",&a1,&b1,&a2,&b2);
    int result,fenZi,fenMu;
    fenMu = b1*b2;
    fenZi = a1*b2 + a2*b1;
    int i,max;
    if(fenMu>fenZi){
        max=fenMu;
    }else if(fenZi>fenMu){
        max=fenZi;
    }else{
        printf("1\n");
        return 0;
    }
    for(i=max/2+1; i>=2; i--){
        if(fenMu%i==0&&fenZi%i==0){
            fenMu /= i;
            fenZi /= i;
            break;
        }
    }
    if(fenMu==1){
        printf("%d",fenZi);
    }else{
        printf("%d/%d",fenZi,fenMu);
    }
    return 0;
}