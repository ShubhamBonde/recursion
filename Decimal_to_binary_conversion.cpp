#include <bits/stdc++.h>
using namespace std;

string binToDec(int n)
{
    string sol;

    while(n > 0)
    {
        sol.push_back(n%2 + '0');
        n /= 2;
    }

    reverse(sol.begin(), sol.end());
    return sol;
}


int main()
{
    int n;
    cin >> n;
    cout << binToDec(n);
}
