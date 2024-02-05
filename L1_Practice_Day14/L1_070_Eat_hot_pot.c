// #include<stdio.h>
// #include<string.h>
// int main(){
//     int i, len, flag=1, count=0, countHuo=0, first;
//     char str[81];
//     while(flag){
//         gets(str);
//         if(!strcmp(str,".")){
//             break;
//         }
//         count++;
//         len = strlen(str);
//         for(i=0;i<len;i++){
//             if(str[i]=='c'&&len-i>=14){
//                 if(str[i+1]=='h'&&str[i+2]=='i'&&str[i+3]=='1'&&str[i+4]==' '&&str[i+5]=='h'&&str[i+6]=='u'&&str[i+7]=='o'&&str[i+8]=='3'&&str[i+9]==' '&&str[i+10]=='g'&&str[i+11]=='u'&&str[i+12]=='o'&&str[i+13]=='1'){
//                     if(countHuo==0){
//                         first = count;
//                     }
//                     countHuo++;
//                 }
//             }
//         }
//     }
//     printf("%d\n",count);
//     if(countHuo==0){
//         printf("-_-#\n");
//     }else{
//         printf("%d %d\n",first,countHuo);
//     }
//     return 0;
// }
#include<stdio.h>
#include<string.h>
int main()
{
    /*
    L1-070 吃火锅
    分数 15
    作者 陈越
    单位 浙江大学
    chg.jpg
    以上图片来自微信朋友圈：这种天气你有什么破事打电话给我基本没用。但是如果你说“吃火锅”，那就厉害了，我们的故事就开始了。
    本题要求你实现一个程序，自动检查你朋友给你发来的信息里有没有 chi1 huo3 guo1。
    输入格式：
    输入每行给出一句不超过 80 个字符的、以回车结尾的朋友信息，信息为非空字符串，仅包括字母、数字、空格、可见的半角标点符号。
    当读到某一行只有一个英文句点 . 时，输入结束，此行不算在朋友信息里。
    输出格式：
    首先在一行中输出朋友信息的总条数。然后对朋友的每一行信息，检查其中是否包含 chi1 huo3 guo1，
    并且统计这样厉害的信息有多少条。在第二行中首先输出第一次出现 chi1 huo3 guo1 的信息是第几条（从 1 开始计数），
    然后输出这类信息的总条数，其间以一个空格分隔。题目保证输出的所有数字不超过 100。
    如果朋友从头到尾都没提 chi1 huo3 guo1 这个关键词，则在第二行输出一个表情 -_-#。
    输入样例 1：
    Hello!
    are you there?
    wantta chi1 huo3 guo1?
    that's so li hai le
    our story begins from chi1 huo3 guo1 le
    .
    输出样例 1：
    5
    3 2
    输入样例 2：
    Hello!
    are you there?
    wantta qi huo3 guo1 chi1huo3guo1?
    that's so li hai le
    our story begins from ci1 huo4 guo2 le
    .
    输出样例 2：
    5
    -_-#
    */
	char a[81],b[15]="chi1 huo3 guo1";
	int total=0,first=-88,total_now=0;
	char *p;
	while(1) 
	{
		gets(a);
		if(strcmp(a,".")==0)
		break;
		total++;
		p = strstr(a,b);
		if(p!=NULL)
		{
			total_now+=1;
			if(first<0)
			{
				first=total;
			}
		}	
	}
	printf("%d\n",total);
	if(total_now!=0)
		printf("%d %d\n",first,total_now);
	else
		printf("-_-#");
	return 0;
}
