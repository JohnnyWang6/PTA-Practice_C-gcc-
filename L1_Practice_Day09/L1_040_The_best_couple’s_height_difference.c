#include<stdio.h>w
int main(){
    /*
    L1-040 最佳情侣身高差
    分数 10
    作者 陈越
    单位 浙江大学
    专家通过多组情侣研究数据发现，最佳的情侣身高差遵循着一个公式：（女方的身高）×1.09 =（男方的身高）。
    如果符合，你俩的身高差不管是牵手、拥抱、接吻，都是最和谐的差度。
    下面就请你写个程序，为任意一位用户计算他/她的情侣的最佳身高。
    输入格式：
    输入第一行给出正整数N（≤10），为前来查询的用户数。随后N行，每行按照“性别 身高”的格式
    给出前来查询的用户的性别和身高，其中“性别”为“F”表示女性、“M”表示男性；“身高”为区间 [1.0, 3.0] 之间的实数。
    输出格式：
    对每一个查询，在一行中为该用户计算出其情侣的最佳身高，保留小数点后2位。
    输入样例：
    2
    M 1.75
    F 1.8
    输出样例：
    1.61
    1.96
    */
    int N, i;
    scanf("%d",&N);
    double height, coupleHeight;
    char sex[N];
    //printf("%2lf\n",coupleHeight);
    for(i=0; i<N; i++){
        getchar(); //经典getchar()接收额外字符
        scanf("%c %lf",&sex[i], &height);
        if(sex[i] == 'M'){
            coupleHeight = height / 1.09;
        }else if(sex[i] == 'F'){
            coupleHeight = height * 1.09;
        }
        printf("%.2lf\n",coupleHeight);
    }
    return 0;
}