#include<stdio.h>
int main()
{
    char x;
    x = getchar();
    switch (x)
    {
    case 'A':printf("85～100\n"); break;
    case'B':printf("70～84\n"); break;
    case'C':printf("60～69\n"); break;
    case'D':printf("<60\n"); break;
    default:printf("兄弟不是我代码敲错了就是你输入错了");
    }
    return 0;
}
