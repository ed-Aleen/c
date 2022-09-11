#include <stdio.h>

int main()
{
    char x = 'd';
    printf("%d", x);
    for(int i=0; i<26; i++)
    {
        printf("%c ", x+i);
    }

    return 0;
}