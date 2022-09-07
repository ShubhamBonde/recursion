// recursive code to convert decimal to binary.
#include <iostream>
using namespace std;

string bin(int, string);
int main()
{
    int n;
    cin >> n;
    bin(n);
}

string bin(int n, string sol)
{
    if (!n/10) return sol;
}