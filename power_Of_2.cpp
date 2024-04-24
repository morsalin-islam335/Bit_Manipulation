// objective: determine if a number is power of 2 or not
// approach: if a number's total set bit is 1 then it is power of 2 otherwise no
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number; cin >> number;
    int count = 0;
    while(number)
    {
        if((number & 1)) count ++;
        number >>=1;
    }
    (count == 1)? cout << "YES": cout << "NO";
    return 0;
}