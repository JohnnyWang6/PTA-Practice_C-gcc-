#include<stdio.h>
int main(){
    int hour, minute, countDang, i;
    scanf("%d:%d",&hour,&minute);
    //1、判断hour是不是在后半日，如果不是，就输出Only...，然后直接return。
    if(hour>=0 && hour<12 || hour == 12 && minute == 0){ //注意后面的是特殊情况，当hour=12,minute=0时也不敲钟
        printf("Only %02d:%02d.  Too early to Dang.\n",hour,minute);
        return 0;
    }
    countDang = hour - 12; //不考虑minute时，敲钟数等于hour减12
    if(minute > 0){ //当minute大于0时，敲钟数加1
        countDang += 1;
    }
    for(i=0; i<countDang; i++){
        printf("Dang");
    }


    /*
    L1-018 大笨钟
    分数 10
    作者 陈越
    单位 浙江大学
    微博上有个自称“大笨钟V”的家伙，每天敲钟催促码农们爱惜身体早点睡觉。不过由于笨钟自己作息也不是很规律，所以敲钟并不定时。
    一般敲钟的点数是根据敲钟时间而定的，如果正好在某个整点敲，那么“当”数就等于那个整点数；如果过了整点，就敲下一个整点数。
    另外，虽然一天有24小时，钟却是只在后半天敲1~12下。例如在23:00敲钟，就是“当当当当当当当当当当当”，而到了23:01就会
    是“当当当当当当当当当当当当”。在午夜00:00到中午12:00期间（端点时间包括在内），笨钟是不敲的。
    下面就请你写个程序，根据当前时间替大笨钟敲钟。
    输入格式：
    输入第一行按照hh:mm的格式给出当前时间。其中hh是小时，在00到23之间；mm是分钟，在00到59之间。
    输出格式：
    根据当前时间替大笨钟敲钟，即在一行中输出相应数量个Dang。如果不是敲钟期，则输出：
    Only hh:mm.  Too early to Dang.
    其中hh:mm是输入的时间。
    输入样例1：
    19:05
    输出样例1：
    DangDangDangDangDangDangDangDang
    输入样例2：
    07:05
    输出样例2：
    Only 07:05.  Too early to Dang.
    */
    return 0;
}