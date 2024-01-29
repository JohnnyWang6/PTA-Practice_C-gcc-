#include<stdio.h>
int main(){
    /*
        L1-048 矩阵A乘以B
    分数 15
    作者 陈越
    单位 浙江大学
    给定两个矩阵A和B，要求你计算它们的乘积矩阵AB。需要注意的是，只有规模匹配的矩阵才可以相乘。
    即若A有Ra行、Ca​列，B有Rb行、Cb列，则只有Ca与Rb相等时，两个矩阵才能相乘。
    输入格式：
    输入先后给出两个矩阵A和B。对于每个矩阵，首先在一行中给出其行数R和列数C，随后R行，每行给出C个整数，
    以1个空格分隔，且行首尾没有多余的空格。输入保证两个矩阵的R和C都是正数，并且所有整数的绝对值不超过100。
    输出格式：
    若输入的两个矩阵的规模是匹配的，则按照输入的格式输出乘积矩阵AB，否则输出Error: Ca != Rb，
    其中Ca是A的列数，Rb是B的行数。
    输入样例1：
    2 3
    1 2 3
    4 5 6
    3 4
    7 8 9 0
    -1 -2 -3 -4
    5 6 7 8
    输出样例1：
    2 4
    20 22 24 16
    53 58 63 28
    输入样例2：
    3 2
    38 26
    43 -5
    0 17
    3 2
    -11 57
    99 68
    81 72
    输出样例2：
    Error: 2 != 3
    */
    int Ra, Ca, Rb, Cb, i, j; //R代表行，C代表列
    scanf("%d %d",&Ra, &Ca);
    int A[Ra][Ca];
    for(i=0; i<Ra; i++){
        for(j=0; j<Ca; j++){
            scanf("%d",&A[i][j]);
            //printf("%d\n",A[i][j]);
        }
    }
    scanf("%d %d",&Rb, &Cb);
    if(Ca!=Rb){
        printf("Error: %d != %d\n",Ca, Rb);
        return 0;
    }
    int B[Rb][Cb], temp, k, num=0;
    int newMatrix[Ra][Cb];
    temp = Ca;
    for(i=0; i<Rb; i++){
        for(j=0; j<Cb; j++){
            scanf("%d",&B[i][j]);
        }
    }
    //计算新矩阵
    for(i=0; i<Ra; i++){
        for(j=0; j<Cb; j++){
            for(k=0; k<temp; k++){ //循环计算矩阵每一行的数字
                num+=(A[i][k]*B[k][j]); 
            }
            newMatrix[i][j] = num;
            num=0;
        }
    }
    printf("%d %d\n",Ra, Cb);
    for(i=0; i<Ra; i++){
        for(j=0; j<Cb; j++){
            if(j==Cb-1){
                printf("%d\n",newMatrix[i][j]);
            }else{
                printf("%d ",newMatrix[i][j]);
            }
        }
    }

    return 0;
}