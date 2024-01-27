#include<stdio.h>
#include<string.h>
int main(){
    /*
    L1-039 古风排版
    分数 20
    作者 陈越
    单位 浙江大学
    中国的古人写文字，是从右向左竖向排版的。本题就请你编写程序，把一段文字按古风排版。
    输入格式：
    输入在第一行给出一个正整数N（<100），是每一列的字符数。第二行给出一个长度不超过1000的非空字符串，以回车结束。
    输出格式：
    按古风格式排版给定的字符串，每列N个字符（除了最后一列可能不足N个）。
    输入样例：
    4
    This is a test case
    输出样例：
    asa T
    st ih
    e tsi
     ce s
    */
    int N, len, i, j, row, index=0, remainder, start, count=0, temp, max;
    char str[1001];
    scanf("%d",&N);
    getchar();
    gets(str);
    len = strlen(str);
    // if(N!=1){
    //     row = len / N + 1;
    // }else{
    //     row = len;
    // }
    if(N==len){
        row =  1; 
    }else if(N!=1){
        if(len % N == 0){
            row = len / N;
        }else{
            row = len / N + 1;
        }
    }else{
        row = len;
    }
    //printf("row=%d\n",row);
    remainder = len % N;
    char ch[row][N];
    for(i=0; i<row; i++){
        for(j=0; j<N; j++){
            ch[i][j]=str[index];
            // printf("%c\n",ch[i][j]);
            // printf("hello\n");
            index++;
        }
    }
    //printf("%c\n",ch[0][0]);
    // if(N!=1){
    //     start = len - remainder;
    // }else{
    //     start = len-1;
    // }
    if(N==len){
        start = 0;
    }else if(N==1){
        start = len -1;
    }else{
        if(len % N == 0){
            start = len - remainder - N;
        }else{
            start = len -remainder;
        }
    }
    
     //printf("start=%d\n",start);
    // if(ch[0][19] == '\0'){
    //     printf("hello");
    // }
    temp = start;
    max = row * N - 1;
    //printf("max=%d\n",max);
    while(start <= max && start >= 0){
        if(start>=len){
            if(N==1){
                break;
            }
            if(len<N){
                for(i=0;i<N-len;i++){
                    // if(i==N-len-1){
                    //     printf(" ");
                    // }else{
                    //     printf(" \n");
                    // }
                    printf(" \n");
                }
                break;
            }
            printf(" ");
            start -= N;
            count++;
            continue;
        }
        if(count==row-1){
            printf("%c\n",ch[0][start]);
            if(N!=len){
                temp++;
                start = temp;
                count=0;
                continue;
            }else{
                start++;
                continue;
            }
        }
        printf("%c",ch[0][start]);
        start -= N;
        count++;
    }
    return 0;
}