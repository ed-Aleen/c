#include <stdio.h>

int char2int(char a)
{
    if (a == 'S')
        return 0;
    else if (a == 'H')
        return 1;
    else if (a == 'C')
        return 2;
    else
        return 3;


}

int main()
{
    char c = 'd';
    int aa;
    aa = char2int(c);
    printf("%d", aa);


    return 0;
}

