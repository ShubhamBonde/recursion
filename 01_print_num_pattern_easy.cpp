#include<bits/stdc++.h>
using namespace std;

void printPattern(int);
int main()
{
    int t;
    cin >> t;
    //Test Cases
    while(t--)
    {
        int n;
        cin >> n;

        printPattern(n);
        printf("\n");
    }

}

void printPattern(int n)
{
    printf("%d ",n);
    if (n <= 0) return;
    printPattern(n - 5);
    printf("%d ", n);
}
// Accepted.