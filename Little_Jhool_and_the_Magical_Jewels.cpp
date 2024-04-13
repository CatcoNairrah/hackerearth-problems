#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        // Initialize counts for 'r', 'u', 'b', and 'y'
        int count_r = 0, count_u = 0, count_b = 0, count_y = 0;

        // Count occurrences of each character
        for (char ch : s) {
            if (ch == 'r') count_r++;
            else if (ch == 'u') count_u++;
            else if (ch == 'b') count_b++;
            else if (ch == 'y') count_y++;
        }

        // Find the minimum count among the characters
        int min_count = min({count_r, count_u, count_b, count_y});

        // Output the minimum count
        cout << min_count << endl;
    }

    return 0;
}
