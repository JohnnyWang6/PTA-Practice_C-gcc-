#include <stdio.h>
#include<string.h>
int main(){
    
    /*
    7-32 说反话-加强版
    分数 20
    作者 陈越
    单位 浙江大学
    给定一句英语，要求你编写程序，将句中所有单词的顺序颠倒输出。
    输入格式：
    测试输入包含一个测试用例，在一行内给出总长度不超过500 000的字符串。字符串由若干单词和若干空格组成，
    其中单词是由英文字母（大小写有区分）组成的字符串，单词之间用若干个空格分开。
    输出格式：
    每个测试用例的输出占一行，输出倒序后的句子，并且保证单词间只有1个空格。
    输入样例：
    Hello World   Here I Come
    输出样例：
    Come I Here World Hello
    */
    char str[500001] = { '0' };  //初始化
    int size = -1; //数组大小
    int s = 0; //一组字符串（单词）长度
    int i = 0;
    int j = 0;
    gets(str);
    int len = strlen(str);
    //按空格分割字符串 并打印输出
    for(i = len - 1; i >= 0; i--){ //从数组末尾开始
        if (str[i] == ' ' && s != 0){
            for (j = i + 1; j <= i + s; j++)//输出一组字符串
                printf("%c", str[j]);
            s = 0;
            while (i >= 0 && str[i] == ' ')//跳过连续空格
                i--;
            if (i > 0 && str[i] != ' ')//当前位置前面还有非空格字符
                printf(" ");
        }
        if (str[i] != ' ')//统计单词长度
            s++;
        if (i == 0){
            for (j = 0; j < s; j++)
                printf("%c", str[j]);
        }
    }
    return 0;
}
