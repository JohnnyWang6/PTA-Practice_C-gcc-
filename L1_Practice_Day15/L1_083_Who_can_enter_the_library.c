#include<stdio.h>
int main(){
    /*
    L1-083 谁能进图书馆
    分数 10
    作者 陈越
    单位 浙江大学
    为了保障安静的阅读环境，有些公共图书馆对儿童入馆做出了限制。例如“12 岁以下儿童禁止入馆，
    除非有 18 岁以上（包括 18 岁）的成人陪同”。现在有两位小/大朋友跑来问你，他们能不能进去？
    请你写个程序自动给他们一个回复。
    输入格式：
    输入在一行中给出 4 个整数：
    禁入年龄线 陪同年龄线 询问者1的年龄 询问者2的年龄
    这里的禁入年龄线是指严格小于该年龄的儿童禁止入馆；陪同年龄线是指大于等于该年龄的人士可以陪同儿童入馆。
    默认两个询问者的编号依次分别为 1 和 2；年龄和年龄线都是 [1, 200] 区间内的整数，并且保证 陪同年龄线 
    严格大于 禁入年龄线。
    输出格式：
    在一行中输出对两位询问者的回答，如果可以进就输出 年龄-Y，否则输出 年龄-N，中间空 1 格，行首尾不得有多余空格。
    在第二行根据两个询问者的情况输出一句话：
    如果两个人必须一起进，则输出 qing X zhao gu hao Y，其中 X 是陪同人的编号， Y 是小孩子的编号；
    如果两个人都可以进但不是必须一起的，则输出 huan ying ru guan；
    如果两个人都进不去，则输出 zhang da zai lai ba；
    如果一个人能进一个不能，则输出 X: huan ying ru guan，其中 X 是可以入馆的那个人的编号。
    输入样例 1：
    12 18 18 8
    输出样例 1：
    18-Y 8-Y
    qing 1 zhao gu hao 2
    输入样例 2：
    12 18 10 15
    输出样例 2：
    10-N 15-Y
    2: huan ying ru guan
    */
    int ban, company, age1, age2;
    scanf("%d %d %d %d",&ban,&company,&age1,&age2);
    if(age1>=ban){
        if(age2>=ban){
            printf("%d-Y %d-Y\n",age1,age2);
        }else{
            if(age1>=company){
                printf("%d-Y %d-Y\n",age1,age2);
            }else{
                printf("%d-Y %d-N\n",age1,age2);
            }
        }
    }else{
        if(age2>=ban){
            if(age2>=company){
                printf("%d-Y %d-Y\n",age1,age2);
            }else{
                printf("%d-N %d-Y\n",age1,age2);
            }
        }else{
            printf("%d-N %d-N\n",age1,age2);
        }
    }
    if(age1>=ban&&age2>=ban){
        printf("huan ying ru guan\n");
    }else if(age1>=company&&age2<ban){
        printf("qing 1 zhao gu hao 2\n");
    }else if(age1<ban&&age2>=company){
        printf("qing 2 zhao gu hao 1\n");
    }else if(age1<ban&&age2<ban){
        printf("zhang da zai lai ba\n");
    }else if(age1>=ban&&age1<company&&age2<ban){
        printf("1: huan ying ru guan\n");
    }else if(age1<ban&&age2>=ban&&age2<company){
        printf("2: huan ying ru guan\n");
    }
    return 0;
}