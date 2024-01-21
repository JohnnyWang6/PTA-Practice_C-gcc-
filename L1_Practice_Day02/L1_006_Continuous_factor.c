#include<stdio.h>
#include<math.h>
int main(){
     /*
     L1-006 连续因子
     分数 20
     作者 陈越
     单位 浙江大学
     一个正整数 N 的因子中可能存在若干连续的数字。例如 630 可以分解为 3×5×6×7，其中 5、6、7 就是 3 个连续的数字。给定任一正整数 N，要求编写程序求出最长连续因子的个数，并输出最小的连续因子序列。
     输入格式：
     输入在一行中给出一个正整数 N（1<N<2的31次方）。
     输出格式：
     首先在第 1 行输出最长连续因子的个数；然后在第 2 行中按 因子1*因子2*……*因子k 的格式输出最小的连续因子序列，其中因子按递增顺序输出，1 不算在内。
     输入样例：
     630
     输出样例：
     3
     5*6*7
     */

    int N;
    scanf("%d",&N);
    int i, j, temp, num, start, max = 0;
    for(i=2; i<=sqrt(N); i++){
        temp = N; //temp作为代替N计算的中间值
        num = 0; //num是每一轮循环计算连续因子个数的值
        for(j=i; temp%j==0 && j<=temp; j++){
            temp/=j; //temp除等于该因子，因子加一位继续进行判断。
            num++; //每成功循环一次，代表连续因子个数+1
        }
        if(num > max){ //更新每一轮循环结束后最大连续因子个数
            max = num;
            start = i;
        }
    }
    if(max == 0){ //max=0说明N是质数，只存在1和他本身这两个因子
        printf("1\n");
        printf("%d",N);
    }else{ //max!=0说明N不是质数，有其他因子，但连续因子个数也可能是1
        printf("%d\n",max);
        int xStart = start; //定义xStart作为递增的连续因子，初值为起始因子start
        while (xStart < start + max){ //循环进行条件，xStart小于起始因子+最大连续因子个数
            if (xStart != start){
                printf("*%d", xStart);
            }else{
                printf("%d", xStart);
            }
            xStart++;
        }
    }


}