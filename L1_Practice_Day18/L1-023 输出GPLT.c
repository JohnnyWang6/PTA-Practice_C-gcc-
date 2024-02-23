#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    /*
    L1-023 输出GPLT
    分数 20
    作者 陈越
    单位 浙江大学
    给定一个长度不超过10000的、仅由英文字母构成的字符串。请将字符重新调整顺序，按GPLTGPLT....这样的顺序输出，
    并忽略其它字符。当然，四种字符（不区分大小写）的个数不一定是一样多的，若某种字符已经输出完，
    则余下的字符仍按GPLT的顺序打印，直到所有字符都被输出。
    输入格式：
    输入在一行中给出一个长度不超过10000的、仅由英文字母构成的非空字符串。
    输出格式：
    在一行中按题目要求输出排序后的字符串。题目保证输出非空。
    输入样例：
    pcTclnGloRgLrtLhgljkLhGFauPewSKgt
    输出样例：
    GPLTGPLTGLTGLGLL
    */
    char str[100050]; 
    int i, n, sum, countG=0, countP=0, countL=0, countT=0;
    gets(str);
    n = strlen(str);
    for(i=0; i<n; i++){
        if(str[i] == 'G' || str[i] == 'g'){
            countG++;
        }else if(str[i] == 'P' || str[i] == 'p'){
            countP++;
        }else if(str[i] == 'L' || str[i] == 'l'){
            countL++;
        }else if(str[i] == 'T' || str[i] == 't'){
            countT++;
        }
    }
    sum = countG+countP+countL+countT;
    while(sum!=0){
        if(countG>0){
            printf("G");
            countG--;
            sum--;
        }
        if(countP>0){
            printf("P");
            countP--;
            sum--;
        }
        if(countL>0){
            printf("L");
            countL--;
            sum--;
        }
        if(countT>0){
            printf("T");
            countT--;
            sum--;
        }
    }
    return 0;
}
