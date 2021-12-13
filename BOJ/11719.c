#include <stdio.h>
int main(void)
{
    char a[102];
    int b;
    while(1)
    {
        b = scanf("%[^\n]s",a);
        getchar();
        if(b==EOF)
        {
            break;
        }
        if(b!=0)
        {
            printf("%s\n",a);
        }
        else
        {
            printf("\n");
        }
    }
    return 0;
}