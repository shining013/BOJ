#include <stdio.h>
#include <string.h>
int main()
{
    int N;
    scanf("%d",&N); 
    // 100,000보다 작거나 같은 자연수 N
    for(int i=0;i<N;i++)
    {
        printf("%d\n",i+1);
    }
    return 0;
}