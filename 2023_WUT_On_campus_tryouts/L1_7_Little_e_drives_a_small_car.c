#include<stdio.h>
void change(int **car, int n){
    int k ,p;
    for(k=0; k<n-1; k++){
        for(p=k+1; p<n; p++){
            if(car[k][0] == car[p][0]){
                car[k][1] *= -1;
                car[p][1]  *= -1;
            }
        }
    }
}
int main(){
    /*
    L1-7 小e开小车
    分数 20
    作者 ACM@WUT
    单位 武汉理工大学
    众所周知，小e是单身狗，所以他喜欢和小伙伴们一起开车。
    现在在一条横向的公路上，小e和小伙伴们一共有n辆车，每辆车有一个起始位置和一个起始方向
    （1表示向右走，-1表示向左走）。
    一开始所有人的车以1m/s的速度向起始方向运动，当两车相遇时，两车同时瞬间转向，并继续以1m/s速度移动。
    现在小e想知道，t秒后所有车的位置。
    输入格式
    第一行两个正整数n,t，表示车的个数和行驶时间。
    接下来n行，每行两个数字x 
    i
    ,d 
    i
    分别表示第i辆车的起始位置和起始方向。
    注意输入的x 
    i
    无序，保证每个初始位置至多一辆车，最终的位置可能为负数，也可能一个位置有多辆车。
    输出格式
    一行共n个数字，表示第i辆车的最终位置。
    样例 #1
    样例输入 #1
    4 2
    2 1
    5 1
    4 -1
    1 -1
    样例输出 #1
    2 7 4 -1
    数据范围
    1≤n,t≤10的5次方
    1≤xi≤10的5次方
    di​∈{1,−1}
    */
    int n , t, i, j, k, p;
    scanf("%d %d",&n, &t);
    int car[n][2];
    for(i=0; i<n; i++){
        scanf("%d %d",&car[i][0], &car[i][1]);
        //printf("%d %d\n",car[i][0],car[i][1]);
    }
    // for(j=0; j<t; j++){
    //     for(i=0; i<n; i++){
    //         car[i][0] += car[i][1];
    //     }
    //     for(k=0; k<n-1; k++){
    //         for(p=k+1; p<n; p++){
    //             if(car[k][0] == car[p][0]){
    //                 car[k][1] *= -1;
    //                 car[p][1]  *= -1;
    //             }
    //         }
    //     }
    // }
    int index=0,count[t][n], flag[2];
    while(t--){
        for(i=0; i<n; i++){
            car[i][0] += car[i][1];
        }
        for(k=0; k<n-1; k++){
            for(p=k+1; p<n; p++){
                if(car[k][0] == car[p][0]){
                    car[k][1] *= -1;
                    car[p][1]  *= -1;
                }
            }
        }
//         void BubbleSort(int *a, int n){ //冒泡排序 降序
//     int i, j, temp;
//     for(i=0; i<n; i++){
//         for(j=0; j<n-i-1; j++){
//             if(a[j] < a[j+1]){
//                 temp = a[j];
//                 a[j] = a[j+1];
//                 a[j+1] = temp;
//             }
//         }
//     }
// }
    }
    for(i=0; i<n; i++){
        if(i==n-1){
            printf("%d\n",car[i][0]);
        }else{
            printf("%d ",car[i][0]);
        }
    }
    // for(i=0; i<n; i++){
    //     printf("%d %d\n",car[i][0],car[i][1]);
    // }
    return 0;
}