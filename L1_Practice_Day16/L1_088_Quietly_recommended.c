#include<stdio.h>
int main(){
    /*
    L1-088 静静的推荐
    分数 20
    作者 陈越
    单位 浙江大学
    天梯赛结束后，某企业的人力资源部希望组委会能推荐一批优秀的学生，这个整理推荐名单的任务就由静静姐负责。
    企业接受推荐的流程是这样的：
    只考虑得分不低于 175 分的学生；
    一共接受 K 批次的推荐名单；
    同一批推荐名单上的学生的成绩原则上应严格递增；
    如果有的学生天梯赛成绩虽然与前一个人相同，但其参加过 PAT 考试，且成绩达到了该企业的面试分数线，则也可以接受。
    给定全体参赛学生的成绩和他们的 PAT 考试成绩，请你帮静静姐算一算，她最多能向企业推荐多少学生？
    输入格式：
    输入第一行给出 3 个正整数：N（≤10的5次方）为参赛学生人数，K（≤5×10的3次方）
    为企业接受的推荐批次，S（≤100）为该企业的 PAT 面试分数线。
    随后 N 行，每行给出两个分数，依次为一位学生的天梯赛分数（最高分 290）和 PAT 分数（最高分 100）。
    输出格式：
    在一行中输出静静姐最多能向企业推荐的学生人数。
    输入样例：
    10 2 90
    203 0
    169 91
    175 88
    175 0
    175 90
    189 0
    189 0
    189 95
    189 89
    256 100
    输出样例：
    8
    样例解释：
    第一批可以选择 175、189、203、256 这四个分数的学生各一名，此外 175 分 PAT 分数达到 90 分的学生和 189 分 PAT 分数达到 95 分的学生可以额外进入名单。第二批就只剩下 175、189 两个分数的学生各一名可以进入名单了。最终一共 8 人进入推荐名单。
    */
    int n = 0;
    int k = 0;
    int s = 0;
    scanf("%d %d %d",&n,&k,&s);
    int i = 0;
    int x = 0;
    int y = 0;
    int count = 0;
    int arr[291]={0};
    for(i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        if(x>=175){
            if(y>=s){ //破格录取
                count++;
            }else if(arr[x]<k){ //如果该成绩现录取人数小于录取批次k，就可以被普通录取
                arr[x]++; //该成绩录取后，该成绩现录取的人数加1
                count++; //录取总人数加1
            }
        }
    }
    printf("%d",count);
    return 0;
}