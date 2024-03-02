/*
    L1-028 判断素数
    分数 10
    作者 陈越
    单位 浙江大学
    本题的目标很简单，就是判断一个给定的正整数是否素数。
    输入格式：
    输入在第一行给出一个正整数N（≤ 10），随后N行，每行给出一个小于2的31次方的需要判断的正整数。
    输出格式：
    对每个需要判断的正整数，如果它是素数，则在一行中输出Yes，否则输出No。
    输入样例：
    2
    11
    111
    输出样例：
    Yes
    No
*/
#include<stdio.h>
#include<math.h>
int main(){
    int N,i,num,j,flag;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&num);
        if(num<=1){
            printf("No\n");
            continue;
        }
        flag=0;
        for(j=2;j<sqrt(num);j++){
            if(num%j==0){
                printf("No\n");
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("Yes\n");
        }
    }
    return 0;
}