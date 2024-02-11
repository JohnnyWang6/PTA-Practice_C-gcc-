#include <stdio.h>
#include <string.h>
int is_cap(char ch)
{
    if(ch>='A' && ch<='Z')
        return 1;
    return 0;
}
int is_zm(char ch)
{
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') ||(ch>='0' && ch<='9'))
        return 1;
    return 0;
}
int main(){
    /*
    L1-064 估值一亿的AI核心代码
    分数 20
    作者 陈越
    单位 浙江大学
    AI.jpg
    以上图片来自新浪微博。
    本题要求你实现一个稍微更值钱一点的 AI 英文问答程序，规则是：
    无论用户说什么，首先把对方说的话在一行中原样打印出来；
    消除原文中多余空格：把相邻单词间的多个空格换成 1 个空格，把行首尾的空格全部删掉，把标点符号前面的空格删掉；
    把原文中所有大写英文字母变成小写，除了 I；
    把原文中所有独立的 can you、could you 对应地换成 I can、I could—— 这里“独立”是指被空格或标点符号分隔开的单词；
    把原文中所有独立的 I 和 me 换成 you；
    把原文中所有的问号 ? 换成惊叹号 !；
    在一行中输出替换后的句子作为 AI 的回答。
    输入格式：
    输入首先在第一行给出不超过 10 的正整数 N，随后 N 行，每行给出一句不超过 1000 个字符的、以回车结尾的用户的对话，
    
    对话为非空字符串，仅包括字母、数字、空格、可见的半角标点符号。
    输出格式：
    按题面要求输出，每个 AI 的回答前要加上 AI: 和一个空格。
    输入样例：
    6
    Hello ?
    Good to chat   with you
    can   you speak Chinese?
    Really?
    Could you show me 5
    What Is this prime? I,don 't know
    输出样例：
    Hello ?
    AI: hello!
    Good to chat   with you
    AI: good to chat with you
    can   you speak Chinese?
    AI: I can speak chinese!
    Really?
    AI: really!
    Could you show me 5
    AI: I could show you 5
    What Is this prime? I,don 't know
    AI: what Is this prime! you,don't know
    */
    int n = 0;
    char arr[1006] = {0};
    char arr2[1006] = {0};
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        gets(arr);
        printf("%s\n",arr);
        int len = strlen(arr);
        int i = 0;
        while(arr[i]==' ')//首空格
        {
            arr[i] = '@';
            i++;
        }
        i = len-1;
        while(arr[i]==' ')//尾空格
        {
            arr[i] = '@';
            i--;
        }
 
        for(i = 0;i<len;i++)
        {
            if(is_cap(arr[i]) && arr[i]!='I')//大写转小写
                arr[i]+=32;
            if(arr[i]==' ' && is_zm(arr[i+1])==0)//去除多余空格
                arr[i] = '@';
            if(arr[i]=='?')
                arr[i] = '!';
        }
        int j = 0;
        for(i = 0;i<len;i++)
        {
            if(arr[i]!='@')
                arr2[j++]=arr[i];//去除空格后的字符串
        }
        arr2[j] = '\0';//添加‘\0’
        len = j;
        for(i = 0;i<len;i++)
        {
            //单独的I变为you
            if(i==0 && arr2[i]=='I' && is_zm(arr2[i+1])==0)
                arr2[i] = '@';//在开头
            else if(i==len-1 && arr2[i]=='I' && is_zm(arr2[i-1])==0)
                arr2[i]='@';//在末尾
            else if(arr2[i]=='I' && is_zm(arr2[i-1])==0 && is_zm(arr2[i+1])==0)
                arr2[i]='@';//在中间
            // me -> you
            if(i==0 && arr2[i] == 'm' && arr2[i+1] == 'e' && is_zm(arr2[i+2])==0)
                arr2[i] = '@';//开头
            else if(i==len-2 && arr2[i] == 'm' && arr2[i+1] == 'e' && is_zm(arr2[i-1])==0)
                arr2[i] = '@';//末尾
            else if(is_zm(arr2[i-1])==0 && arr2[i]=='m' && arr2[i+1]=='e' && is_zm(arr2[i+2])==0)
                arr2[i] = '@';//中间
        }
        char* ch2 = NULL;
        //can you -> I can
        while(1)
        {
            ch2 = strstr(arr2,"can you");
            if(ch2==NULL)
                break;
            else
            {
                if(ch2-arr2==0 && is_zm(*(ch2+7)==0))
                    *ch2 = '#';//开头
                else if(ch2-arr2==len-7 && is_zm(*(ch2-1))==0)
                    *ch2 = '#';//末尾
                else if(is_zm(*(ch2-1))==0 && is_zm(*(ch2+7))==0)
                    *ch2 = '#';//中间
                else//防止无限循环
                      *ch2 = 'C';//先改成大写
            }
        }
        //could you -> I could
        while(1)
        {
            ch2 = strstr(arr2,"could you");
            if(ch2==NULL)
                break;
            else
            {
                if(ch2-arr2==0 && is_zm(*(ch2+9)==0))
                    *ch2 = '%';//开头
                else if(ch2-arr2==len-9 && is_zm(*(ch2-1))==0)
                    *ch2 = '%';//末尾
                else if(is_zm(*(ch2-1))==0 && is_zm(*(ch2+9))==0)
                    *ch2 = '%';//中间
                else//防止无限循环
                    *ch2 = 'C';//先改成大写
            }
        }
        //printf("AI: %s\n",arr2);
        ///*
        printf("AI: ");
        for(int k = 0;k<len;k++)
        {
            if(arr2[k]!='#' && arr2[k]!='%' && arr2[k]!='@')
            {
                if(arr2[k]=='C')
                    printf("c");//改回来
                else
                    printf("%c",arr2[k]);
            }
            else if(arr2[k]=='@' && arr2[k+1]=='e')
            {
                k++;
                printf("you");
            }
            else if(arr2[k]=='@')
                printf("you");
            else if(arr2[k]=='#')
            {
                k+=6;
                printf("I can");
                
            }
            else if(arr2[k]=='%')
            {
                k+=8;
                printf("I could");
                
            }
        }
        printf("\n");
        //*/
    }
    return 0;
}