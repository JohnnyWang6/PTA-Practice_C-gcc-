#include<stdio.h>
 /*
    L1-027 出租
    分数 20
    作者 陈越
    单位 浙江大学
    下面是新浪微博上曾经很火的一张图：
    一时间网上一片求救声，急问这个怎么破。其实这段代码很简单，index数组就是arr数组的下标，index[0]=2 对应 arr[2]=1，
    index[1]=0 对应 arr[0]=8，index[2]=3 对应 arr[3]=0，以此类推…… 很容易得到电话号码是18013820100。
    本题要求你编写一个程序，为任何一个电话号码生成这段代码 —— 事实上，只要生成最前面两行就可以了，后面内容是不变的。
    输入格式：
    输入在一行中给出一个由11位数字组成的手机号码。
    输出格式：
    为输入的号码生成代码的前两行，其中arr中的数字必须按递减顺序给出。
    输入样例：
    18013820100
    输出样例：
    int[] arr = new int[]{8,3,2,1,0};
    int[] index = new int[]{3,0,4,3,1,0,2,4,3,4,4};
    */
void BubbleSort(int *a, int n){ //冒泡排序 降序
    int i, j, temp;
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            if(a[j] < a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
int main()
{
    int num[10]={0}; //num[]记录电话号码中出现的数字，如果出现，那就把索引为这个数字的值设为1
    char str[11]; //记录输入的电话号码
    scanf("%s",str);
    int arr[11], index[11], i, j, len=0, k; //len是arr数组的实际有效的长度
    for(i=0; i<11; i++){
        arr[i] = str[i] - '0';
        num[arr[i]]=1; //（即使该数字重复出现也不会影响）
    }
    for(j=0; j<10; j++){
        if(num[j] == 1){
            arr[len] = j; //j就是当前arr[len]的值
            len++; //len一开始充当索引，随着循环进行，索引++，结束循环后，len就变成了arr数组的实际有效长度
        }
    }
    BubbleSort(arr, len); //把arr降序排列
    for(i=0; i<11; i++){
        k = str[i] - '0';
        for(j=0; j<len; j++){
            if(arr[j] == k){
                index[i] = j; //如果arr[j]=str当前的数字=k，那么index[i]就是j这个数字，因为arr[index[i]]=k
            }
        }
    }
    printf("int[] arr = new int[]{");
    for(i=0; i<len; i++){
        if(i==len-1){
            printf("%d",arr[i]);
            break;
        }
        printf("%d,",arr[i]);
    }
    printf("};\nint[] index = new int[]{");
    for(j=0; j<11; j++){
        if(j==10){
            printf("%d",index[j]);
            break;
        }
        printf("%d,",index[j]);
    }
    printf("};\n");
    return 0;
}



   
