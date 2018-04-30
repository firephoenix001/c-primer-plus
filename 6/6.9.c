#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    long int num;
    long sum = 0L;
    _Bool input_is_good;
    printf("Please enter an integer to be summed. ");
    printf("(q to quit): ");

    input_is_good = (scanf("%ld", &num) == 1);
    while(input_is_good)
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        input_is_good = (scanf("%ld", &sum) == 1);
    }
    printf("Those integers sum to %ld.\n", sum);


    return 0;
}


