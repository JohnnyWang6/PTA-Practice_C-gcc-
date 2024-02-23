#include<stdio.h>
#include<string.h>
int main(){
    int N, i, j;
    scanf("%d",&N);
    char stu[N][9], str[11];
    int sex[N];
    for(i=0; i<N; i++){
        scanf("%d %s",&sex[i],stu[i]);
    }
    for(i=0; i<(N/2); i++){
        for(j=N-1; j>=N/2; j--){
            if(sex[i]!=sex[j] && sex[j]>=0){
                printf("%s %s\n",stu[i], stu[j]);
                sex[j] = -1;
                break;
            }
        }
    }
    return 0;
}

    /*
    L1-030 一帮一
    分数 15
    作者 陈越
    单位 浙江大学
    “一帮一学习小组”是中小学中常见的学习组织方式，老师把学习成绩靠前的学生跟学习成绩靠后的学生排在一组。本题就请你编写程序
    帮助老师自动完成这个分配工作，即在得到全班学生的排名后，在当前尚未分组的学生中，将名次最靠前的学生
    与名次最靠后的异性学生分为一组。
    输入格式：
    输入第一行给出正偶数N（≤50），即全班学生的人数。此后N行，按照名次从高到低的顺序给出每个学生的性别（0代表女生，
    1代表男生）和姓名（不超过8个英文字母的非空字符串），其间以1个空格分隔。这里保证本班男女比例是1:1，并且没有并列名次。
    输出格式：
    每行输出一组两个学生的姓名，其间以1个空格分隔。名次高的学生在前，名次低的学生在后。小组的输出顺序
    按照前面学生的名次从高到低排列。
    输入样例：
    8
    0 Amy
    1 Tom
    1 Bill
    0 Cindy
    0 Maya
    1 John
    1 Jack
    0 Linda
    输出样例：
    Amy Jack
    Tom Linda
    Bill Maya
    Cindy John
    */
   