#include <stdio.h>
#include <stdlib.h>
#define SEC_PER_MIN 60  // ÿ���ӵ�����

int main(void)
{
    int sec, min, left;

    printf("Convert sconds to minutes and seconds!\n");
    printf("Enter the number of seconds(<=0 to quit):\n");
    scanf("%d", &sec); //��������
    while(sec>0)
    {
        min = sec / SEC_PER_MIN;  // ��β��õ��ķ�����
        left = sec % SEC_PER_MIN; //ʣ�µ�����
        printf("%d seconds is %d minutes, %d seconds.\n", sec, min,
               left);
        printf("Enter next value (<=0 to quit):\n");
        scanf("%d", &sec);
    }
    printf("Done!\n");
    return 0;
}
