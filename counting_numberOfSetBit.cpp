// Objective:  counting total number of set bit by using right shift operator


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number; cin >> number;
    int count = 0;

    while(number)
    {
        if(number & 1) count ++; // if that bit is set than it wont be 0
        number >>=1;
    }
    cout << count;
    return 0;
}