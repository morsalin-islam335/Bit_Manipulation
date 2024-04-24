// program to check if i^th bit is set or not
// approach : Right Shift
/*
    1.  right shift that number i times
    2.  than execute AND(&) operation with that number and 1
    3. if it return 1 than that bit is set otherwise not
    4. Example:  1010 here bit range are => 3210
*/

bool ifSet(int i, int n)
{
    return ((n >> i)& 1);
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number; cin >> number;
    int ith_Bit; cin >> ith_Bit;
    ifSet(ith_Bit, number)? cout << "YES": cout << "NO";

    return 0;
}