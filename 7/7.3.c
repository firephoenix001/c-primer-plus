#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char ch;

    while((ch = getchar()) != '\n')
    {
        if(isalpha(ch))  // �������ĸ
            putchar(ch + 1);
        else
            putchar(ch);
    }
    putchar(ch);
    return 0;
}
