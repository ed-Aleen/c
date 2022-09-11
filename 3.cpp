#include <stdio.h>
int main()
{
    int i, k, n, j, x;
    int count = 0;
    scanf("%d%d", &n, &x);
    while (n != 0 || x != 0)
    {
        count = 0;
        for (i = 1; i <= n; i++)
        {
            for (k = i + 1; k <= n; k++)
            {
                for (j = k + 1; j <= n; j++)
                    if (i + k + j == x)
                    {
                        // printf("%d %d %d\n", i, k ,j);
                        count++;
                    }
            }
        }
        printf("%d\n", count);
        scanf("%d%d", &n, &x);
        
    }

    return 0;
}