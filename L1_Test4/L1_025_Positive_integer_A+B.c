/*
    L1-025 正整数A+B
    分数 15
    作者 陈越
    单位 浙江大学
    题的目标很简单，就是求两个正整数A和B的和，其中A和B都在区间[1,1000]。稍微有点麻烦的是，输入并不保证是两个正整数。
    输入格式：
    输入在一行给出A和B，其间以空格分开。问题是A和B不一定是满足要求的正整数，有时候可能是超出范围的数字、负数、
    带小数点的实数、甚至是一堆乱码。
    注意：我们把输入中出现的第1个空格认为是A和B的分隔。题目保证至少存在一个空格，并且B不是一个空字符串。
    输出格式：
    如果输入的确是两个正整数，则按格式A + B = 和输出。如果某个输入不合要求，则在相应位置输出?，显然此时和也是?。
    输入样例1：
    123 456
    输出样例1：
    123 + 456 = 579
    输入样例2：
    22. 18
    输出样例2：
    ? + 18 = ?
    输入样例3：
    -100 blabla bla...33
    输出样例3：
    ? + ? = ?
*/
#include<stdio.h>
#include<string.h>
int main(){
    int i,A=0,B=0,lenA,lenB,t=1,flagA=1,flagB=1;
    char a[20],b[20];
    scanf("%s",a);
    gets(b);//b字符串的第一个字符必是空格，因为scanf的输入格式是遇空格就结束
    lenA = strlen(a);
    lenB = strlen(b);
    for(i=lenA-1;i>=0;i--){
        if(a[i]-'0'<0||a[i]-'0'>9){
            flagA=0;
            break;
        }
        A+=t*(a[i]-'0');
        t*=10;
    }
    if(A>1000 || A<1){
            flagA=0;
        }
    t=1;
    for(i=lenB-1;i>=1;i--){
        if(b[i]-'0'<0||b[i]-'0'>9){
            flagB=0;
            break;
        }
        B+=t*(b[i]-'0');
        t*=10;
    }
    if(B>1000||B<1){
            flagB=0;
        }
    if(flagA==1 && flagB==1){
        printf("%d + %d = %d",A, B, A+B);
    }else if(flagA==0 && flagB==0){
        printf("? + ? = ?");
    }else if(flagA == 0 && flagB != 0){
        printf("? + %d = ?",B);
    }else if(flagA != 0 && flagB == 0){
        printf("%d + ? = ?",A);
    }


    // if(flagA==1&&flagB==1){
    //     printf("%d + %d = %d\n",A,B,A+B);
    // }else if(flagA==1&&flagB==0){
    //     printf("%d + ? = ?\n",A);
    // }else if(flagA==0&&flagB==1){
    //     printf("? + %d = ?\n",B);
    // }else if(flagA==0&&flagB==0){
    //     printf("? + ? = ?\n");
    // }
    return 0;
}