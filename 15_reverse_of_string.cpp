// Reverse of a string using recursion.
#include<bits/stdc++.h>
using namespace std;

string revString(string, int, int);
int main()
{
    string str;
    cin >> str;
    revString(str, 0, str.length()-1);
}

string revString(string str, int l, int r)
{
    if (l > r) 
    {
        cout << str << endl;
        return str;
    }
    swap(str[l], str[r]);
    revString(str, ++l, --r); 
}