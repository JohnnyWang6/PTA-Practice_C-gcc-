#include<stdio.h>
#include<math.h>
int main(){
    /*
    L1-050 倒数第N个字符串
    分数 15
    作者 陈越
    单位 浙江大学
    给定一个完全由小写英文字母组成的字符串等差递增序列，该序列中的每个字符串的长度固定为 L，
    
    从 L 个 a 开始，以 1 为步长递增。例如当 L 为 3 时，序列为 
    { aaa, aab, aac, ..., aaz, aba, abb, ..., abz, ..., zzz }。
    这个序列的倒数第27个字符串就是 zyz。对于任意给定的 L，本题要求你给出对应序列倒数第 N 个字符串。
    输入格式：
    输入在一行中给出两个正整数 L（2 ≤ L ≤ 6）和 N（≤10的5次方）。
    输出格式：
    在一行中输出对应序列倒数第 N 个字符串。题目保证这个字符串是存在的。
    输入样例：
    3 7417
    输出样例：
    pat
    */
    int L, N, i, num, x, remainder[6][2];
    scanf("%d %d",&L, &N);
    x = L - 1;
    num = pow(26,x);
    while(N / num == 0 && x >= 1){ //算出要求的第N个数据在26的几(x)次方内，x的初值是L-1
        x--;
        num = pow(26,x);
    }
    if(num<26){ //这个num最小只能是26
        num=26;
    }
    int temp = x; //记录原始x的值
    char s[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v',
    'w','x','y','z'};
    while(x>=0){ //求出remainder数组的数值方便后面给字符串赋值
        remainder[x][0] = N / num;
        remainder[x][1] = N % num;
        N%=num;
        x--;
        if(x>=1){
            num = pow(26,x);
        }
    }
    char result[L];
    x=0;
    for(i=L-1; i>=0; i--){ //从后往前给result赋值
        if(x>temp){ //当x超过原始x的值时，说明后面的字符不会被变化，都是z
            result[i] = s[25];
            continue;
        }
        if(i==L-1){ //当result[i]是最后一个字符时，如果remainder[x][1]!=0，那就给result[i]赋s[26-remainder[x][1]];
            if(remainder[x][1]!=0){
                result[i] = s[26-remainder[x][1]];
            }else{ //如果remainder[x][1]==0，就赋值为s[0]即'a'
                result[i] = s[0];
            }
            x++;
            continue;
        }
        if(remainder[x][0]==0){
            result[i] = s[0];
            x++;
            continue;
        }
        if(remainder[x][1]==0){
            result[i] = s[26-remainder[x][0]];
            x++;
            continue;
        }
        result[i] = s[26-remainder[x][0]-1];
        x++;
    }
    puts(result);

    return 0;
}