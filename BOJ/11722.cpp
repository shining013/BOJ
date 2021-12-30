#include <stdio.h>
using namespace std;
#include <algorithm>

int main()
{
    int N;
    scanf("%d",&N);

    int A[N];
    int dp[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i=0; i<N;i++)
    {
        dp[i]=1;
        for(int j=0;j<i;j++)
        {
            if(A[i]<A[j])
            {
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
    }
    printf("%d",*max_element(dp,dp+N));
}