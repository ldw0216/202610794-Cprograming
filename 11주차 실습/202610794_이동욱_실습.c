#include <stdio.h>
#include <string.h>

int main(void)
{
    int i = 0;
    char str[4] = {0,};
    str[0] = 'a';
    str[1] = 'b';
    str[2] = 'c';
    str[3] = 'NULL';

    i = 0;
    while (str[i] != 'NULL') {
        printf("%c", str[i]);
        i++;
    }
    return 0;
}