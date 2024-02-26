/*
    L1-007 念数字
    分数 10
    作者 翁恺
    单位 浙江大学
    输入一个整数，输出每个数字对应的拼音。当整数为负数时，先输出fu字。十个数字对应的拼音如下：
    0: ling
    1: yi
    2: er
    3: san
    4: si
    5: wu
    6: liu
    7: qi
    8: ba
    9: jiu
    输入格式：
    输入在一行中给出一个整数，如：1234。
    提示：整数包括负数、零和正数。
    输出格式：
    在一行中输出这个整数对应的拼音，每个数字的拼音之间用空格分开，行末没有最后的空格。如
    yi er san si。
    输入样例：
    -600
    输出样例：
    fu liu ling ling
*/
#include<stdio.h>
#include<math.h>
int main(){
    int num,i=0,j,x,index,temp;
    scanf("%d",&num);
    if(num<0){
        num/=-1;
        printf("fu ");
    }else if(num==0){
        printf("ling");
    }
    temp = num;
    while(temp){
        temp /= 10;
        i++;
    }
    for(j=i-1;j>=0;j--){
        index = pow(10,j);
        x=num/index;
        num%=index;
        if(x==0){
            printf("ling");
        }else if(x==1){
            printf("yi");
        }else if(x==2){
            printf("er");
        }else if(x==3){
            printf("san");
        }else if(x==4){
            printf("si");
        }else if(x==5){
            printf("wu");
        }else if(x==6){
            printf("liu");
        }else if(x==7){
            printf("qi");
        }else if(x==8){
            printf("ba");
        }else if(x==9){
            printf("jiu");
        }
        if(j!=0){
            printf(" ");
        }
    }
    return 0;  
}