#include<bits/stdc++.h>
using namespace std;

void binaryPattern(string op, int zero, int one)
{
    if (!one && !zero)
    {
        cout << op << " ";
        return;
    }

    if (zero) 
    {
        binaryPattern(op+"0", zero-1, one);
    }

    if (one)
    {
        binaryPattern(op+"1", zero, one-1);
    }
}

int getCount(int n, int binary)
{
    // Returns the count of binary i.e. 1 or 0 in the numbers binary num.
    int count = 0;
    while(n>0)
    {
        if (n%2 == binary) count++;
        n/=2;
    }
    return count;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int zero = getCount(n, 0);
        int one = getCount(n, 1);
        binaryPattern("", zero, one);
        cout << endl;
    }
    
}