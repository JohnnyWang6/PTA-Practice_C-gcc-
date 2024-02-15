#include<stdio.h>
int main(){
    /*
    L1-087 机工士姆斯塔迪奥
    分数 20
    作者 DAI, Longao
    单位 杭州百腾教育科技有限公司
    在 MMORPG《最终幻想14》的副本“乐欲之所瓯博讷修道院”里，BOSS 机工士姆斯塔迪奥将会接受玩家的挑战。
    你需要处理这个副本其中的一个机制：N×M 大小的地图被拆分为了 N×M 个 1×1 的格子，BOSS 会选择若干行或/及若干列释放技能，
    玩家不能站在释放技能的方格上，否则就会被击中而失败。
    给定 BOSS 所有释放技能的行或列信息，请你计算出最后有多少个格子是安全的。
    输入格式:
    输入第一行是三个整数 N,M,Q (1≤N×M≤10的5次方，0≤Q≤1000)，表示地图为 N 行 M 列大小以及选择的行/列数量。
    接下来 Q 行，每行两个数Ti,Ci，其中 Ti=0 表示 BOSS 选择的是一整行，Ti=1 表示选择的是一整列，Ci
    为选择的行号/列号。行和列的编号均从 1 开始。
    输出格式:
    输出一个数，表示安全格子的数量。
    输入样例:
    5 5 3
    0 2
    0 4
    1 3
    输出样例:
    12
    */
    int N,M,Q,choose1,choose2,i,j;
    scanf("%d %d %d",&N,&M,&Q);
    int line[N+1],row[M+1];//定义行和列的数组全部赋值为1，每次攻击完后把数组中那一行或列的值设为0，后续攻击到时不再重复减
    for(i=0;i<N+1;i++){ //赋值
        line[i]=1;
    }
    for(i=0;i<M+1;i++){ //赋值
        row[i]=1;
    }
    long int sum = N*M;
    int tempLine=N,tempRow=M;
    for(i=0;i<Q;i++){
        scanf("%d %d",&choose1,&choose2);
        if(choose1==0){ //如果攻击的是行
            if(line[choose2]==1){ //只有该行没有被攻击过才减
                sum-=tempRow; //减去的是tempRow,即实时的列数，
                tempLine--; //减完之后，行数-1
                line[choose2]=0; //减完之后，该行数设为0
            }
        }else if(choose1==1){ //如果攻击的是列
            if(row[choose2]==1){ //同上
                sum-=tempLine;
                tempRow--;
                row[choose2]=0;
            }
        }
    }
    printf("%ld\n",sum);
    return 0;
}