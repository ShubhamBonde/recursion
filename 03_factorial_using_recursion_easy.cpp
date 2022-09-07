#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll fact(int);
int main()
{
    int t;
    cin >> t;
    //Test Cases
    while(t--)
    {
        int n;
        cin >> n;

        cout << fact(n) << "\n";
    }
}

ll fact(int n)
{
    if (n == 0) return 1;
    return n * fact(n-1);
}