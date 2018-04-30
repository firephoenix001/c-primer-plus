#include <stdio.h>
#include <stdlib.h>
void butler(void);

int main(void)
{
    printf("I will summon the butler function.\n");  //我将召唤管家函数
    butler();
    printf("Yes. Bring me some tea and writeable CD-ROMS.\n");
    return 0;
}

void butler(void)
{
    printf("You rang, sir?\n");
}
