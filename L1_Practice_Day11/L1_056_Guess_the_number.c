#include<stdio.h>
#include<string.h>
void BubbleSort(int *num, int n){ //冒泡排序，降序
    int i,j,temp;
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            if(num[j] < num[j+1]){
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
}
int main(){
    /*
    L1-056 猜数字
    分数 20
    作者 陈越
    单位 浙江大学
    一群人坐在一起，每人猜一个 100 以内的数，谁的数字最接近大家平均数的一半就赢。本题就要求你找出其中的赢家。
    输入格式：
    输入在第一行给出一个正整数N（≤10的4次方）随后 N 行，
    每行给出一个玩家的名字（由不超过8个英文字母组成的字符串）和其猜的正整数（≤ 100）。
    输出格式：
    在一行中顺序输出：大家平均数的一半（只输出整数部分）、赢家的名字，其间以空格分隔。题目保证赢家是唯一的。
    输入样例：
    7
    Bob 35
    Amy 28
    James 98
    Alice 11
    Jack 45
    Smith 33
    Chris 62
    输出样例：
    22 Amy
    */
   //思路，定义一个二维字符数组和一个一维整型数组，存储人名，正好将个人猜的数字作为索引，算出平均数的一半后，
   //把平均数添加进num数组，然后用BubbleSort进行一个降序排列，再循环数组查找，averageHalf旁边的数，并算出最接近的，
   //最后输出结果就行
    int N, i, j;
    char str[101][9],s[9];
    scanf("%d",&N);
    getchar();
    int num[N+1], averageHalf, sum = 0, left, right, leftMinus, rightMinus, index;
    // int result;
    for(i=0; i<N; i++){
        scanf("%s",s);
        getchar();
        scanf("%d",&num[i]);
        getchar();
        strcpy(str[num[i]],s);
        // printf("%s\n",str[num[i]]);
        sum += num[i];
    }
    averageHalf = sum / N / 2;
    num[N] = averageHalf;
    // printf("averageHalf=%d\n",averageHalf);
    BubbleSort(num,N+1);
    for(i=0;i<N+1;i++){
        // printf("num[%d]=%d\n",i,num[i]);
        if(num[i]==averageHalf){
            if(i==0){
                index = 1;
                break;
            }else if(i==N){
                index = N-1;
                // result = num[index];
                break;
            }else{
                left = i - 1;
                right = i + 1;
                leftMinus = num[left]-averageHalf;
                rightMinus = averageHalf-num[right];
                if(leftMinus<rightMinus){
                    index = left;
                    // result = num[index];
                }else{
                    index = right;
                    // result = num[index];
                }
                break;
            }
        }
    }
    // printf("index=%d\n",index);
    printf("%d %s\n",averageHalf,str[num[index]]);
    return 0;
}