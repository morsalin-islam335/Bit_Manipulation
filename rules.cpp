/*
    Some important rules for Bit manipulation

    1. n << i = n * 2^i
    2. n >> i = n / 2^i
    3. A ^ A = A
    4. 0 ^ A = A
    5. A & A = A 
    6. A | 0 = A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout << (5 << 2); // answer will be 20
    cout << "\n" << (5 >> 2) ; // answer will be 1
    int a = 5;
    cout << (a ^ a ) << "\n";
    cout << (0 ^ a) << "\n";
    cout << (a & a) << "\n";
    cout << (a | 0) << "\n";
    return 0;
}