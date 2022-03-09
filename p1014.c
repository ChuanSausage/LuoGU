#include <stdio.h>
#include <stdbool.h>
bool danshuang(long int linet);
int main(void)
{
    long int n;
    long int line,sum_line=0;
    scanf("%ld",&n);
    //sum_line=line*(line+1)
    //how to find the line 
    for(line=0;sum_line<n;line++)
    {
        sum_line+=line;
    }
//这时上一个line符合条件后自加，而下一个line不符合，需要减一
    printf("%ld",line-1);//确定在哪一行
    long int loc=(line-1)-(sum_line-n);//确定在这一行中的哪个位置
    printf("\n%ld\n",loc);
    if(danshuang(line-1)==true)
    printf("%ld/%ld",line-loc,loc);//找到所在元素和行数和位置数的关系
    else
    printf("%ld/%ld",loc,line-loc);

    return 0;
}
bool danshuang(long int linet)//bool值判断行数是奇数还是偶数，奇数和偶数的排列规则是不一样的
{
    if ((linet%2)==0)
    return false;
    else
    return true;
}
