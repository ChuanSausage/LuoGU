#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int apple_height[10];//cm
    int max_length,num_apple_catch;
    
    for(int i=0;i<10;i++)
    scanf("%d",apple_height+i);//不使用int * apple_height的原因是定义时指针未初始化，指向的是随机的位置，不能解引用随机位置的指针
    scanf("%d",&max_length);

    if(*apple_height>=100&&*apple_height<=200&&max_length>=100&&max_length<=120)
    {
        for(int j=0;j<10;j++)
        {
            if(max_length>=apple_height[j])
            num_apple_catch++;
            else if(max_length+30>=apple_height[j])
            num_apple_catch++;
        }
    }
    printf("%d",num_apple_catch);
    return 0;

}