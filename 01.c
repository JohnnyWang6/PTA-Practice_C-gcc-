#include<stdio.h>
#include<string.h>
int main(){
    char str[500002], c[10000];
    gets(str);
    int len = strlen(str), i, j, count=0;
    for(i=len-1; i>=0; i--){
        if(str[i]!=' '){
            count++;
            if(i==0){
                for(j=i;j<i+count;j++){
                    if(j==i+count-1){
                        printf("%c\n",str[j]);
                    }else{
                        printf("%c",str[j]);
                    }
                }
            }
            continue;
        }else{
                if(i==0){
                    for(j=i+1;j<i+1+count;j++){
                        if(j==i+count){
                            printf("%c\n",str[j]);
                        }else{
                            printf("%c",str[j]);

       
                        }
                    }
                    break;
                }
            for(j=i+1;j<i+1+count;j++){
                if(j==i+count){
                    printf("%c ",str[j]);
                }else{
                    printf("%c",str[j]);
                }
            }
            
            count=0;
        }
    }
    return 0;
}