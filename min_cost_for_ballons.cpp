#include <iostream>
using namespace std;

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        int cost_g, cost_p;
        cin >> cost_g >> cost_p;

        int n;
        cin >> n;

        int min1 = 0;
        int min2 = 0;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;

            min1 += (a == 1) ? cost_g : 0;
            min1 += (b == 1) ? cost_p : 0;

            min2 += (a == 1) ? cost_p : 0;
            min2 += (b == 1) ? cost_g : 0;
        }
        cout << min(min1, min2) << endl;
    }
        return 0;
}
