#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    double n;
    int k;
    double sum_n=0;
    scanf("%d",&k);
    for(n=1;;n++)
    {
        if(sum_n<=(double)k)
        sum_n+=1/n;
        else 
        break;
    }
    printf("%d",(int)n-1);
    return 0;

}