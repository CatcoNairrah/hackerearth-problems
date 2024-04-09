#include <bits/stdc++.h>
using namespace std;
char upper(char c)
{
    return (c - 'a' + 'A');
}
char lower(char c)
{
    return 'a' + c - 'A';
}
int main()
{
    string s;
    for (int i = 0; i <= s.size(); ++i)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = upper(s[i]);
        }
        else
        {
            s[i] = lower(s[i]);
        }
    }
    int result = 0;
    for (int i = 0; i <= s.size(); ++i)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            result -= s[i];
        }
        else
        {
            result += s[i];
        }
    }
    int flag = 0;
    result = abs(result);
    for (int i = 2; i < result; i++)
    {
        if (result % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << 0 << endl;
    }
    else{
        cout<<1<<endl;
    }

    return 0;
}