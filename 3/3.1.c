#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float weight;  //你的体重
    float value;   //相同重量的白金量

    printf("Are you worth your weight in rhodium?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds:");
    scanf("%f", &weight);

    value = 770 * weight * 14.5833;

    printf("Your weight in rhodium is worth $%.2f.\n", value);
    printf("You are easily worth that! If rhodium prices drop,\n");
    printf("eat more to maintain your value.\n");
    return 0;
}