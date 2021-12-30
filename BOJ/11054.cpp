#include <iostream>
using namespace std;
#include <algorithm>

int main()
{
    int N;
    scanf("%d",&N);
    int arr[N]={};
    int dp[N]={};
    int dp2[N]={};

    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++)
    {
        dp[i]=1;
        for(int j=0;j<i;j++)
        {
            if(arr[i]>arr[j])
            {
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
    }
    for(int i=N-1;i>=0;i--)
    {
        dp2[i]=1;
        for(int j=N-1;j>i;j--)
        {
            if(arr[i]>arr[j])
            {
                dp2[i]=max(dp2[i],dp2[j]+1);
            }
        }
    }
    int result=1;
    for(int i=0;i<N;i++)
    {
        result = max(result,dp[i]+dp2[i]-1);
    }
}