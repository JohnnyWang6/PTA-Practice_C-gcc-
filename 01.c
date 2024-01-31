#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[1001];
    int count=0,i=0,j,flag,k,p;
    gets(str);
    int len = strlen(str);
for(i=0; i<len; i++){
        if(str[i]=='6'){ 
            int j = i; //如果该字符等于6，将j设为当前索引，
            while(j<len && str[j]=='6'){ //循环查找j及j以后的字符中有多少个连续的6字符，连续一次j+1;
                j++;
            }
            if(j-i>9){ //j-i=6的个数，当j-i的个数超过9时，输出27
                printf("27");
            }else if(j-i>3){ //当j-i的个数超过3小于等于9时，输出9
                printf("9");
            }else{ //当j-i的个数大于0小于等于3时，原封不动的输出6
                for(int k=i; k<j; k++){
                    printf("6");
                }
            }
            i=j-1; //变换结束后，将索引直接跳到连续的最后一个6的索引，因为这一次循环结束后，i还会++，所以i=j-1。
        }else{ //如果该字符不等于6，则直接输出
            printf("%c",str[i]);
        }
    }
    printf("\n");
    return 0;
}




// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main(){
//     char str[1001];
//     int count=0,i=0,j,flag,k,p;
//     gets(str);
//     int len = strlen(str);
//     while(i<len){
//         if(str[i]=='6'){
//             count++;
//             flag = 0;
//         }else{
//             // printf("str[i]");
//             flag = 1;
//         }
//         if(count>3 && count<=9 && flag==1){
//             // for(j=i-1;j>=i-count;j--){
//             //     str[j] = '9';
//             //     printf("%c",str[j]);
//             // }
//             printf("9");
//             printf("%c",str[i]);
//             count=0;
//         }else if(count>9 && flag==1 || (count>9 && flag==0 && i==len-1)){
//             printf("27");
//             if(i!=len-1){
//                 printf("%c",str[i]);
//             }
//             count=0;
//         }else if(count<=3 && flag==1 && str[i-1]=='6' && count!=0){
//             // printf("看看我执行了没\n");
//             for(k=i-1; k>=i-count; k--){
//                 printf("%c",str[k]);
//             }
//             printf("%c",str[i]);
//             count = 0;
//         }else if(count==0 && flag == 1){
//             printf("%c",str[i]);
//             // printf("看看我执行了没\n");
//             count=0;
//         }else if(i==len-1 && flag==0 && count>3 && count<=9){
//             // for(p=i; p>i-count; p--){
//             //     printf("9");
//             // }
//             printf("9");
//         }else if(i==len-1 && flag==0 && count>9){
//             printf("27");
//         }else if(i==len-1 && flag==0 && count<=3){
//             for(p=i; p>i-count; p--){
//                 printf("%c",str[p]);
//             }
//         }
//         i++;
//     }
// }
