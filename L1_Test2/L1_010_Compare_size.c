/*
    L1-010 比较大小
    分数 10
    作者 杨起帆
    单位 浙大城市学院
    本题要求将输入的任意3个整数从小到大输出。
    输入格式:
    输入在一行中给出3个整数，其间以空格分隔。
    输出格式:
    在一行中将3个整数从小到大输出，其间以“->”相连。
    输入样例:
    4 2 8
    输出样例:
    2->4->8
*/
#include<stdio.h>
int main(){
    int x1, x2, x3, max, min , medium; //定义最大值，最小值和中间值
    scanf("%d %d %d",&x1,&x2,&x3);
    max = min = x1;
    if((x2 > max || x3 > max) && x3 < x2){
        max = x2;
    }else if((x2 > max || x3 > max) && x3 > x2){
        max = x3;
    }
    if ((x2 < min || x3 < min) && x3 < x2){
        min = x3;
    }else if((x2 < min || x3 < min) && x3 > x2){
        min = x2;
    }
    medium = x1 + x2 + x3 - max - min;
    printf("%d->%d->%d\n",min, medium, max);
    return 0;
}