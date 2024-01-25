#include<stdio.h>
#include<string.h>
int main(){
    int N, len, x, i;
    char c, str[10000];
    scanf("%d %c\n",&N,&c);
    gets(str);
    len = strlen(str);
    printf("len=%d\n",len);
    if(N > len){
        x = N - len;
        for(i=0; i<x; i++){
            printf("%c",c);
        }
        for(i=0; i<len; i++){
            printf("%c",str[i]);
        }
    }else{
        x = len - N;
        for(i=x; i<len; i++){
            printf("%c",str[i]);
        }
    }
    return 0;
}