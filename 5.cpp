#include <stdio.h>
int main()
{
    int i, j;
    int a[r][c];

    scanf("%d%d", &r, &c);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }

        printf("%d", a[i][j]);
    }
}