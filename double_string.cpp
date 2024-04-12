#include <bits/stdc++.h>
using namespace std;
string find_double(string s)
{
    int center = s.length() / 2;
    center--;
}
int main()
{
    int n;
    cin >> n;

    int a[26] = {0};
    while (n--)
    {
        int f = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            a[s[i] - 'a']++;
        }
        
        for (int i = 0; i < 26; i++)
        {
            if(a[i] > 1){
                f = 1;
                break;
            }
        }
        if(f == 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}