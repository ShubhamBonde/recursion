#include<bits/stdc++.h>
using namespace std;

int sumDigits(int);


int main()
{
    int t;
    cin >> t;
    //Test Cases
    while(t--)
    {
        int n;
        cin >> n;
        cout << sumDigits(n) << "\n";
    }
}

int sumDigits(int n)
{
    if (n / 10 == 0) return n; 
    return (n % 10 + sumDigits(n / 10));
}
