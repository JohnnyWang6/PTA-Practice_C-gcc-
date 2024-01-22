#include<stdio.h>
int main(){
    /*
    L1-008 求整数段和
    分数 10
    作者 杨起帆
    单位 浙大城市学院
    给定两个整数A和B，输出从A到B的所有整数以及这些数的和。
    输入格式：
    输入在一行中给出2个整数A和B，其中−100≤A≤B≤100，其间以空格分隔。
    输出格式：
    首先顺序输出从A到B的所有整数，每5个数字占一行，每个数字占5个字符宽度，向右对齐。最后在一行中按Sum = X的格式输出全部数字的和X。
    输入样例：
    -3 8
    输出样例：
   -3   -2   -1    0    1
    2    3    4    5    6
    7    8
    Sum = 30
    */
    int n1, n2;
    scanf("%d %d",&n1,&n2);
    int i, sum = 0, count = 0;
    for(i=n1; i<=n2; i++){
        if(count==5){ //如果一排中输入的数字到5个了，就换行输入下一个数字，并把count设为1
            printf("\n");
            printf("%5d",i);
            sum += i;
            count = 1;
        }else{
            printf("%5d",i);
            sum += i;
            count++;
        }
    }
    printf("\n");
    printf("Sum = %d\n",sum);
    return 0;
}