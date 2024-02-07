#include <stdio.h>
#include <string.h>
 
int main(){
    /*
    L1-094 剪切粘贴
    分数 15
    作者 DAI, Longao
    单位 杭州百腾教育科技有限公司
    使用计算机进行文本编辑时常见的功能是剪切功能（快捷键：Ctrl + X）。请实现一个简单的具有剪切和粘贴功能的文本编辑工具。
    工具需要完成一系列剪切后粘贴的操作，每次操作分为两步：
    剪切：给定需操作的起始位置和结束位置，将当前字符串中起始位置到结束位置部分的字符串放入剪贴板中，
    并删除当前字符串对应位置的内容。例如，当前字符串为 abcdefg，起始位置为 3，结束位置为 5，则剪贴操作后， 
    剪贴板内容为 cde，操作后字符串变为 abfg。字符串位置从 1 开始编号。
    粘贴：给定插入位置的前后字符串，寻找到插入位置，将剪贴板内容插入到位置中，并清除剪贴板内容。例如，
    对于上面操作后的结果，给定插入位置前为 bf，插入位置后为 g，则插入后变为 abfcdeg。如找不到应该插入的位置，
    则直接将插入位置设置为字符串最后，仍然完成插入操作。查找字符串时区分大小写。
    每次操作后的字符串即为新的当前字符串。在若干次操作后，请给出最后的编辑结果。
    输入格式:
    输入第一行是一个长度小于等于 200 的字符串 S，表示原始字符串。字符串只包含所有可见 ASCII 字符，不包含回车与空格。
    第二行是一个正整数 N (1≤N≤100)，表示要进行的操作次数。
    接下来的 N 行，每行是两个数字和两个长度不大于 5 的不包含空格的非空字符串，前两个数字表示需要剪切的位置，
    后两个字符串表示插入位置前和后的字符串，用一个空格隔开。如果有多个可插入的位置，选择最靠近当前操作字符串开头的一个。
    剪切的位置保证总是合法的。
    输出格式:
    输出一行，表示操作后的字符串。
    输入样例:
    AcrosstheGreatWall,wecanreacheverycornerintheworld
    5
    10 18 ery cor
    32 40 , we
    1 6 tW all
    14 18 rnerr eache
    1 1 e r
    输出样例:
    he,allcornetrrwecaneacheveryGreatWintheworldAcross
    */
    // 1.输入
    char s[200];
    scanf("%s", &s);
    int n;
    scanf("%d", &n); 
    // 2.计算
    int i;
    for (i = 0; i < n; i++){
        int len = strlen(s); // 字符串长度
        int j = 0, k = 0, m = 0;
        // 输入
        char s2[200];      // 剪贴板
        int a = 0, b = 0;  // 剪切位置
        char c1[6], c2[6]; // 黏贴位置
        scanf("%d %d %s %s", &a, &b, &c1, &c2);
        // 2.1剪切
        for (j = a - 1; j < len; j++){ // 第a个元素的数组下标为a-1
            if (k < b - a + 1){ // 剪贴字符串长度为 b-a+1
                s2[k] = s[j]; // 剪贴板存放
                k++;          // 剪贴长度
            }
            s[j] = s[j + b - a + 1]; // 从第a个元素开始被覆盖直到最后
        }
        // 注：此处for不是终止于len-(b-a+1)是因为整合了剪贴板的存放
        // 否则应该为
        /*
        for (j = a - 1; j < b; j++){
            s2[k] = s[j];
            k++;
        }
        for (j = a - 1; j < len - (b - a + 1); j++)
            s[j] = s[j + b - a + 1];
        */
        // 2.2粘贴
        int flag = 0;
        int len1 = strlen(c1); // 开始字符串长度
        int len2 = strlen(c2); // 结束字符串长度
        // 有位置
        for (j = 0; j < len; j++){ // 从头开始找有没有插入位置
            // 找到位置
            int start = j, num;
            int sum1 = 0, sum2 = 0;
            // 开始字符串，s[start+len1]为开始赋新值处
            for (num = 0; num < len1; num++){
                if (s[start] == c1[num]){
                    sum1++;
                    start++;
                }
                // 找到了，确认结尾字符串是否正确
                if (sum1 == len1){
                    int q = 0;
                    for (q = 0; q < len2; q++){
                        if (s[start] == c2[q]){
                            sum2++;
                            start++;
                        }
                        if (sum2 == len2){
                            flag = 1; // 确认完毕
                            break;
                        }
                    }
                }
                if (flag == 1)
                    break;
            }
            if (flag == 1)
                break;
        }
        //找到了位置
        if (flag == 1){
            // 后移
            for (m = len - 1; m >= j + len1 + k; m--){
                s[m] = s[m - k];
            }
 
            // 插入
            int number = 0;
 
            for (number = 0; number < k; number++){
                s[m - k + 1] = s2[number];
                m++;
            }
            // puts(s);
        }
 
        // 没有位置
        else{
            // 在队尾插入
            int number = 0;
            for (m = len - k; m < len; m++){
                s[m] = s2[number];
                number++;
            }
        }
    }
    // 3.输出
    puts(s);
    return 0;
}