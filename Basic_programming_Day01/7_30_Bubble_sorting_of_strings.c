#include<stdio.h>
#include<string.h>
int main(){
    /*
    7-30 字符串的冒泡排序
    分数 20
    作者 陈越
    单位 浙江大学
    我们已经知道了将N个整数按从小到大排序的冒泡排序法。本题要求将此方法用于字符串序列，并对任意给定的K（<N），
    输出扫描完第K遍后的中间结果序列。
    输入格式：
    输入在第1行中给出N和K（1≤K<N≤100），此后N行，每行包含一个长度不超过10的、仅由小写英文字母组成的非空字符串。
    输出格式：
    输出冒泡排序法扫描完第K遍后的中间结果序列，每行包含一个字符串。
    输入样例：
    6 2
    best
    cat
    east
    a
    free
    day
    输出样例：
    best
    a
    cat
    day
    east
    free
    */
    int N,K,i,j;
    scanf("%d %d",&N,&K);
    getchar();
    char str[N][11],temp[11];
    for(i=0;i<N;i++){
        gets(str[i]);
    }
    for(i=0;i<K;i++){
        for(j=0;j<N-i-1;j++){
            // puts(str[j]);
            if(strcmp(str[j],str[j+1])>0){
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],temp);
            }
        }
    }
    for(i=0;i<N;i++){
        puts(str[i]);
    }
    return 0;
}