#include<stdio.h>
#include<string.h>
int main(){
    /*
    L1-025 正整数A+B
    分数 15
    作者 陈越
    单位 浙江大学
    题的目标很简单，就是求两个正整数A和B的和，其中A和B都在区间[1,1000]。稍微有点麻烦的是，输入并不保证是两个正整数。
    输入格式：
    输入在一行给出A和B，其间以空格分开。问题是A和B不一定是满足要求的正整数，有时候可能是超出范围的数字、负数、带小数点
    的实数、甚至是一堆乱码。
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
    char a[20], b[20];
    scanf("%s",a);
    gets(b); //防止各种字符串错误，所以第二个字符串用gets接收
    int lenA, lenB, A=0, B=0, t=1, flagA=1, flagB=1, i, j;
    lenA = strlen(a);
    lenB = strlen(b);
    //printf("%d\n",lenB);
    for(i=lenA-1; i>=0; i--){ //采用倒序循环，累加的时候注意计算方法
        if(a[i] - '0' < 0 || a[i] - '0' > 9){ //如果该字符不是数字，则直接把flagA设为0
            flagA = 0;
            break;
        } //是数字，就累加
        A += t*(a[i]-'0');
        t *= 10;
    }
    if(A > 1000 || A < 1){
        flagA = 0;
    }
    t = 1;
    for(j=lenB-1; j>=1; j--){ //思路同第一个字符串的处理
        if(b[j] - '0'< 0 || b[j] - '0' > 9){
            //printf("看看我执行了没\n");
            flagB = 0;
            break;
        }
        B += t*(b[j]-'0');
        //printf("%d\n",B);
        t *= 10;
    }
    if(B > 1000 || B < 1){
        flagB = 0;
    }
    //printf("%d %d\n",A,B);
    //printf("%d %d\n",flagA,flagB);
    if(flagA==1 && flagB==1){ //判断
        printf("%d + %d = %d",A, B, A+B);
    }else if(flagA==0 && flagB==0){
        printf("? + ? = ?");
    }else if(flagA == 0 && flagB != 0){
        printf("? + %d = ?",B);
    }else if(flagA != 0 && flagB == 0){
        printf("%d + ? = ?",A);
    }







//这是自己写的方法，始终会有一个两分的案例过不去，但是能拿13分也行
    /* char s1[1005], s2[1005];
    scanf("%s %s",s1,s2);
    int n1, n2, i, flag1=1, flag2=1, x1, x2, sum;
    n1 = strlen(s1);
    n2 = strlen(s2);
    x1 = s1[0] - '0';
    x2 = s2[0] - '0';
    //printf("%d %d\n",x1,x2);
    if(x1 >= 1 && x1 <= 9){
        for (i = 1; i < n1; i++){
            if (s1[i] >= '0' && s1[i] <= '9'){
                x1 = x1 * 10 + (s1[i] - '0');
                // printf("%d\n",x1);
                continue;
            }else{
                flag1 = 0;
                break;
            }
        }
    }else{
        flag1 = 0;
    }
    //printf("flag1=%d\n",flag1);
    if(x2 >= 1 && x2 <= 9){
        for(i=1; i<n2; i++){
            if(s2[i] >= '0' && s2[i] <= '9'){
                x2 = x2*10+(s2[i]-'0');
                //printf("%d\n",x2);
                continue;
            }else{
                flag2 = 0;
                break;
            }
        }
    }else{
        flag2 = 0;
    }
    //printf("flag1=%d\n",flag1);
    if(x1<1 || x1>1000){
        flag1=0;
    }
    if(x2<1 || x2>1000){
        flag2=0;
    }
    if(flag1==1){
        if(flag2==1){
            sum = x1 + x2;
            printf("%d + %d = %d",x1, x2, sum);
        }else{
            printf("%d + ? = ?",x1);
        }
    }else{
        if(flag2==1){
            sum = x1 + x2;
            printf("? + %d = ?", x2);
        }else{
            printf("? + ? = ?");
        }
    }


 */
    return 0;
}