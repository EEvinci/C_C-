#include<stdlib.h>
# include<stdio.h>
# include<string.h>
int main()
{
    char dest[100];
    char src[40];
    memset(dest, 0, sizeof(dest));
    strcpy(src, "this is lichen");
    strcpy(dest,src);
    printf(dest);

    system("pause");
    return 0;
}