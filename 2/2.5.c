#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int n2;
    int n3;

    n = 5;
    n2 = n * n;
    n3 = n * n *n;
    printf("n = %d, squared = %d, n cubed = %d\n", n, n2, n3);
    return 0;
}
