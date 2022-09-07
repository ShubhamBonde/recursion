#include<bits/stdc++.h>
using namespace std;

int fib(int);
int main()
{
    int t;
    cin >> t;
    //Test Cases
    while(t--)
    {
        int n;
        cin >> n;
        cout << fib(n) << "\n";
    }
}
int fib(int n)
{
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}