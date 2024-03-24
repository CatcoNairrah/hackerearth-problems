#include <iostream>
#include <vector>
#include <string>

using namespace std;
bool isSymmetric(vector<string> s)
{
    int n = s.size();
    int center = (n % 2 == 0) ? (n / 2) - 1 : n / 2;
    for (int i = 0; i <= center; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[i][j] != s[n - i - 1][j])
            {
                return false;
            }
            if (s[j][i] != s[j][n - i - 1])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N; // Read the size of the matrix for this test case

        vector<string> A(N);

        // Read the binary strings of length N
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        // Check if the matrix is symmetric and print the result
        if (isSymmetric(A))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
