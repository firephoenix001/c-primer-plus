#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;

    printf("%f can be writen %e\n", aboat, aboat);
  //下一行要求编译器支持C99或其中的相关特性
    printf("%f can be writen %e\n", abet, abet);
    printf("%lf can be writen %le\n", dip, dip);
    return 0;
}
