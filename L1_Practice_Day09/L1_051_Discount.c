#include<stdio.h>
int main(){
    /*
    L1-051 打折
    分数 5
    作者 陈越
    单位 浙江大学
    去商场淘打折商品时，计算打折以后的价钱是件颇费脑子的事情。例如原价 ￥988，标明打 7 折，
    则折扣价应该是 ￥988 x 70% = ￥691.60。本题就请你写个程序替客户计算折扣价。
    输入格式：
    输入在一行中给出商品的原价（不超过1万元的正整数）和折扣（为[1, 9]区间内的整数），其间以空格分隔。
    输出格式：
    在一行中输出商品的折扣价，保留小数点后 2 位。
    输入样例：
    988 7
    输出样例：
    691.60
    */
    int originPrice, discount;
    scanf("%d %d",&originPrice, &discount);
    double price;
    price = originPrice*1.0*discount*0.1;
    printf("%.2lf\n",price);
    return 0;
}