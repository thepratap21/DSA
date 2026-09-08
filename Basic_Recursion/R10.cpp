#include<bits/stdc++.h>
using namespace std;

int rec(int n, int count)
{
    if(n <= 0)
        return count;

    n = n / 10;

    return rec(n, count + 1);
}

int main()
{
    cout << "Enter No: ";

    int n;
    cin >> n;

    int c = rec(n, 0);

    cout << c;

    return 0;
}
