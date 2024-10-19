#include <stdio.h>
int main()
{
    int i,j;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if((i==0 || j == 0 )||( i == 4 || j == 4) )
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
}