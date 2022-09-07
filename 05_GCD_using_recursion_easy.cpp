#include<bits/stdc++.h>
using namespace std;
long long Euclidean_GCD(long long , long long);

int main()
{
    int t;
    cin >> t;
    //Test Cases
    while(t--)
    {
        long long n, p;
        cin >> n >> p;
        cout << Euclidean_GCD(n, p) << "\n";
    }
}

long long Euclidean_GCD(long long a, long long b)
{
    
    if( b == 0)
    {
        return a;
    }
    else
    {
        return Euclidean_GCD(b, a % b);
    }

}