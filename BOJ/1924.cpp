#include <iostream>
using namespace std;
int main()
{
    int x,y,sum(0);
    cin >> x >> y;
    for(int i=1;i<x;i++){
        switch(i){
            case 1:
                sum += 31;
                break;
            case 2:
                sum += 28;
                break;
            case 3:
                sum += 31;
                break;
            case 4:
                sum += 30;
                break;
            case 5:
                sum += 31;
                break;
            case 6:
                sum += 30;
                break;
            case 7:
                sum += 31;
                break;
            case 8:
                sum += 31;
                break;
            case 9:
                sum += 30;
                break;
            case 10:
                sum += 31;
                break;
            case 11:
                sum += 30;
                break;
        }
    }
    sum += y;
    switch(sum%7){
        case 1:
            cout << "MON";
            break;
        case 2:
            cout << "TUE";
            break;
        case 3:
            cout << "WED";
            break;
        case 4:
            cout << "THU";
            break;
        case 5:
            cout << "FRI";
            break;
        case 6:
            cout << "SAT";
            break;
        case 0:
            cout << "SUN";
            break;
    }
    return 0;
}