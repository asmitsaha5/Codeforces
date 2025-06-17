#include <stdio.h>
int main()
{
    int x = 10, y = 20;
    int *ptr = &x;
    (*ptr)++;
    y++;
    x = x / 2;
    y = y-- / 3;
    printf("%d%d", x, y);
    return 0;
}