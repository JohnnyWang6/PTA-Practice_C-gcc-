#include<stdio.h>
int main(){
    int T, n, temp1, temp2, temp3, i, j, k, p, m, count;
    scanf("%d",&T);
    for(i=0; i<T; i++){
        scanf("%d",&n);
        int time[n][n];
        char KillDes[n];
        for(j=0; j<n; j++){
            scanf("%02d:%02d %c",&time[j][0],&time[j][1],&KillDes[j]);
            for(k=j-1; k>=0; k--){
                temp1 = time[j][0];
                temp2 = time[j][1];
                temp3 = KillDes[j];
                if(time[j][0] < time[k][0]){
                    time[j][0] = time[k][0];
                    time[k][0] = temp1;
                    time[j][1] = time[k][1];
                    time[k][1] = temp2;
                    KillDes[j] = KillDes[k];
                    KillDes[k] = temp3;
                    j--;
                }
            }
        }
        for(m=0; m<n; m++){
            printf("%02d:%02d %c",time[m][0], time[m][1], KillDes[m]);
        }
        count = 0;
        for(p=0; p<n; p++){
            if(KillDes[p] == 'K'){
                if(count==0){
                    printf("%02d:%02d Kill\n",time[p][0],time[p][1]);
                    count++;
                    printf("看看我执行了咩\n");
                    printf("%d\n",count);
                }else if(KillDes[p-1] == 'K'){
                    printf("看看我执行mei\n");
                    if((time[p][0]*60+time[p][1]) - (time[p-1][0]*60+time[p][1]) <= 10){
                        if(count==1){
                            printf("%02d%02d Double Kill\n",time[p][0],time[p][1]);
                            count++;
                        }else if(count == 2){
                            printf("%02d%02d Triple Kill\n",time[p][0],time[p][1]);
                            count++;
                        }else if(count == 3){
                            printf("%02d%02d Quadra Kill\n",time[p][0],time[p][1]);
                            count++;
                        }else if(count>=4){
                            printf("%02d%02d Penta Kill\n",time[p][0],time[p][1]);
                            count++;
                        }
                    }else{
                        printf("%02d:%02d Kill\n",time[p][0],time[p][1]);
                        count=0;
                    }
                }
            }else{
                count = 0;
            }
        }
    }
    return 0;
}

/*
1
5
11:15 K
11:11 K
11:19 A
01:20 K
05:27 D
*/