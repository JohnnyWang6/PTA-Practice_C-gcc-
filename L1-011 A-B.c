#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char s1[100000], s2[100000];
    gets(s1);
    gets(s2);
    int i;
    for(i=0; i<strlen(s1); i++){
        if(strchr(s2,s1[i])){ //strchr函数：在s2中查找有没有与s1[i]相同的字符，如果有就返回s2中对应字符的指针，如果没有，就返回NULL
            continue; //如果有这个字符就不打印，继续循环，相当于s1[i]这个字符没有打印，即删去了
        }else{ //如果s2中没有这个字符，就打印s1[i]
            printf("%c",s1[i]);
        }
    }
    return 0;
}
