#include<stdio.h>

int difCount(int y, int flag){ //定义方法算当前年份的不同数字有多少个，传递的形参需要传一个flag判断当前年份是不是小于1000
    int temp = y, remainder, num[10]={0}, i, difCount=0;
    while(temp != 0){
        remainder = temp % 10;
        temp /= 10;
        if(flag==1){
            if(remainder==0){
                continue;
            }
        }
        num[remainder] = 1;
    }
    for(i=0; i<10; i++){
        if(num[i]==1){
            difCount++;
        }
    }
    return difCount;
}
int main(){
    /*
    L1-033 出生年
    分数 15
    作者 陈越
    单位 浙江大学
    以上是新浪微博中一奇葩贴：“我出生于1988年，直到25岁才遇到4个数字都不相同的年份。”也就是说，直到2013年才
    达到“4个数字都不相同”的要求。本题请你根据要求，自动填充“我出生于y年，直到x岁才遇到n个数字都不相同的年份”这句话。
    输入格式：
    输入在一行中给出出生年份y和目标年份中不同数字的个数n，其中y在[1, 3000]之间，n可以是2、或3、或4。
    注意不足4位的年份要在前面补零，例如公元1年被认为是0001年，有2个不同的数字0和1。
    输出格式：
    根据输入，输出x和能达到要求的年份。数字间以1个空格分隔，行首尾不得有多余空格。年份要按4位输出。
    注意：所谓“n个数字都不相同”是指不同的数字正好是n个。如“2013”被视为满足“4位数字都不同”的条件，
    但不被视为满足2位或3位数字不同的条件。
    输入样例1：
    1988 4
    输出样例1：
    25 2013
    输入样例2：
    1 2
    输出样例2：
    0 0001
    */
    int y, n, age=0, dif=0, num[10]={0}, len=0, j, temp, remainder, flag=0;
    scanf("%d %d",&y, &n);
    temp = y;
    if(y>=1000){
        dif = difCount(y,flag);
        if(n==dif){
            printf("0 %04d\n",y);
        }else{
            while(dif!=n){
                y++;
                age++;
                dif = difCount(y,flag);
            }
            printf("%d %04d\n",age, y);
        }
    }else{
        flag = 1;
        dif = 1 + difCount(y,flag);
        if(n == dif){
            printf("0 %04d\n",y);
        }else{
            while(dif!=n){
                y++;
                age++;
                if(y<1000){
                    flag=1;
                    dif = 1 + difCount(y,flag);
                }else{
                    flag=0;
                    dif = difCount(y,flag);
                }
            }
            printf("%d %04d\n",age,y);
        }
    }
    return 0;
}