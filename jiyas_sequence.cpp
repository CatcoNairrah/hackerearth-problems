#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;

        long long multi = 1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            multi *= x;
        }
        int seq = multi % 10;
        if (seq == 2 || seq == 3 || seq == 5)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}