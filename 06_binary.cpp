#include<bits/stdc++.h>
using namespace std;

void binary(int *, int, int);
int main()
{
    int t;
    cin >> t;
    //Test Cases
    while(t--)
    {
        int n;
        cin >> n;

        int a[n];
        a[0] = 0;
        binary(a, n, 0);
    }
}

void printArray(int* array, int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << array[i];
    }
    cout << endl;
}

void binary(int * a, int n, int k)
{
    // Base case
    if (n == k)
    {
        printArray(a, n);
        return;
    }

    if (a[k-1] != 1)
    {
        a[k] = 0;
        binary(a, n, k+1);
        a[k] = 1;
        binary(a, n, k+1);
    }
    else 
    {
        a[k] = 0;
        binary(a, n, k+1);
    }
}