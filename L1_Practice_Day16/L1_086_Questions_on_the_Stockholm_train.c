# include <stdio.h>
#include<string.h>
int max(int a,int b){
    return a>b?a:b;
}
int main(){
    /*
    L1-086 斯德哥尔摩火车上的题
    分数 15
    作者 陈越
    单位 浙江大学
    tt.png
    上图是新浪微博上的一则趣闻，是瑞典斯德哥尔摩火车上的一道题，看上去是段伪代码：
    s = ''
    a = '1112031584'
    for (i = 1; i < length(a); i++) {
    if (a[i] % 2 == a[i-1] % 2) {
        s += max(a[i], a[i-1])
    }
    }
    goto_url('www.multisoft.se/' + s)
    其中字符串的 + 操作是连接两个字符串的意思。所以这道题其实是让大家访问网站 www.multisoft.se/112358
    （注意：比赛中千万不要访问这个网址！！！）。
    当然，能通过上述算法得到 112358 的原始字符串 a 是不唯一的。本题就请你判断，两个给定的原始字符串，
    能否通过上述算法得到相同的输出？
    输入格式：
    输入为两行仅由数字组成的非空字符串，长度均不超过 10的4次方，以回车结束。
    输出格式：
    对两个字符串分别采用上述斯德哥尔摩火车上的算法进行处理。如果两个结果是一样的，则在一行中输出那个结果；
    否则分别输出各自对应的处理结果，每个占一行。题目保证输出结果不为空。
    输入样例 1：
    1112031584
    011102315849
    输出样例 1：
    112358
    输入样例 2：
    111203158412334
    12341112031584
    输出样例 2：
    1123583
    112358
    */
    char ch1[10001];
    char ch2[10001];
    char result1[10001];
    char result2[10001];
    gets(ch1);
    gets(ch2);
    int len1,len2,i,j=0;
    len1 = strlen(ch1);
    len2 = strlen(ch2);
    for(i=1;i<len1;i++){
        if(ch1[i]%2==ch1[i-1]%2){
            result1[j++]=max(ch1[i],ch1[i-1]);
        }
    }
    j=0;
    for(i=1;i<len2;i++){
        if(ch2[i]%2==ch2[i-1]%2){
            result2[j++]=max(ch2[i],ch2[i-1]);
        }
    }
    if(!strcmp(result1,result2)){
        puts(result1);
    }else{
        puts(result1);
        puts(result2);
    }
}