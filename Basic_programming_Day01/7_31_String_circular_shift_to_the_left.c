#include<stdio.h>
#include<string.h>
int main(){
    /*
    7-31 字符串循环左移
    分数 20
    作者 白洪欢
    单位 浙江大学
    输入一个字符串和一个非负整数N，要求将字符串循环左移N次。
    输入格式：
    输入在第1行中给出一个不超过100个字符长度的、以回车结束的非空字符串；第2行给出非负整数N。
    输出格式：
    在一行中输出循环左移N次后的字符串。
    输入样例：
    Hello World!
    2
    输出样例：
    llo World!He
    */
    int N,i,j;
    char str[101],temp;
    gets(str);
    scanf("%d",&N);
    int len = strlen(str);
    for(i=0;i<N;i++){
        for(j=0;j<len;j++){
            if(j==0){
                temp = str[len-1];
                str[len-1]=str[j];
                str[j]=str[j+1];
                continue;
            }
            if(j==len-1){
                str[j-1]=temp;
                continue;
            }
            str[j]=str[j+1];
        }
    }
    puts(str);
    return 0;
}