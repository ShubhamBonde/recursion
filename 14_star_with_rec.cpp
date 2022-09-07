#include<iostream>
using namespace std;
void stars(int n, int num)
{
    if (n > num) return;
    for (int i = 0; i < n; i++)
    {
        cout << "*";
    }
    cout << "\n";
    stars(n+1, num);
    for (int i = n; i > 0; --i)
    {
        cout << "*";
    }
    cout << "\n";
}
int main()
{
    stars(1, 5);
}