#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[1250];
    int res[26] = {0};
    while (scanf("%[^\n]%*c", str) != EOF){
        for (int j = 0; j < 1200; j++)
            if (isupper(str[j]))
                str[j] = tolower(str[j]);
        for (int j = 0; output[j] != '\0'; ++j)
            if (output[j] >= 'a' && output[j] <= 'z')
                res[output[j] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
        printf("%c : %d\n", 'a' + i, res[i]);
}
