#include <iostream>
using namespace std;

int main()
{
    int sum(0);
    int N;
    char c[101];
    cin >> N;
    cin >> c;
    
    for(int i=0;i<N;i++){
        sum += (c[i]-'0');
    }
    cout << sum;
    
    return 0;
}