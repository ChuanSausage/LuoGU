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
    printf("%ld",line-1);
    long int loc=(line-1)-(sum_line-n);
    printf("\n%ld\n",loc);
    if(danshuang(line-1)==true)
    printf("%ld/%ld",line-loc,loc);
    else
    printf("%ld/%ld",loc,line-loc);

    return 0;
}
bool danshuang(long int linet)
{
    if ((linet%2)==0)
    return false;
    else
    return true;
}