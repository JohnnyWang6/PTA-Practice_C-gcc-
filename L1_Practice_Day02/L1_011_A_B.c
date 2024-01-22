// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main(){
//     char s1[10000], s2[10000];
//     gets(s1);
//     gets(s2);
//     int i;
//     for(i=0; i<strlen(s1); i++){
//         if(strchr(s2,s1[i])){ //strchr函数：在s2中查找有没有与s1[i]相同的字符，如果有就返回s2中对应字符的指针，如果没有，就返回NULL
//             continue; //如果有这个字符就不打印，继续循环，相当于s1[i]这个字符没有打印，即删去了
//         }else{ //如果s2中没有这个字符，就打印s1[i]
//             printf("%c",s1[i]);
//         }
//     }
//     return 0;
// }
//第二种方法

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
char delete(char *str,char target){
	int i,j=0;
	for(i=0;str[i]!='\0';i++){
		if(str[i]!=target){
			str[j++]=str[i];
		}
	}
    str[j] = '\0';
	return str;
}
int main(){
	char a[100000];
	char b[100000];
	gets(a);
	gets(b);
	int len1=strlen(a);
	int len2=strlen(b);
	for(int i=0;i<len2;i++){
		delete(a,b[i]);
	}
	printf("%s\n",a);
	return 0;
}


    //L1-011 A-B
    // 分数 20
    // 作者 陈越
    // 单位 浙江大学
    // 本题要求你计算A−B。不过麻烦的是，A和B都是字符串 —— 即从字符串A中把字符串B所包含的字符全删掉，剩下的字符组成的就是字符串A−B。
    // 输入格式：
    // 输入在2行中先后给出字符串A和B。两字符串的长度都不超过10的4次方
    // ，并且保证每个字符串都是由可见的ASCII码和空白字符组成，最后以换行符结束。
    // 输出格式：
    // 在一行中打印出A−B的结果字符串。
    // 输入样例：
    // I love GPLT!  It's a fun game!
    // aeiou
    // 输出样例：
    // I lv GPLT!  It's  fn gm!