#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
    int j;

    char str[1250];
    char output[1250];
    scanf("%[^\n]%*c",str);

    for (int j = 0; j < 1200; j++)
        if (isupper(str[j]))
            output[j] = tolower(str[j]);
        else if (islower(str[j]))
            output[j] = toupper(str[j]);
        else
            output[j] = str[j];

    printf("%s\n", output);

    return 0;
}
