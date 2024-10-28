#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);
    
    for (int i = m; i <= n; i++)
    {
        if (i % 3 != 0)
        {
            printf("%d ", i);
        }
    }
    
    return 0;
}