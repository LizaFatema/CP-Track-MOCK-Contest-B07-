#include <bits/stdc++.h>
using namespace std;

int minOperations(string s)
{
    int operations = 0;

    while (!s.empty())
    {
        string newStr;
        for (size_t i = 1; i < s.size(); i += 2)
        {
            newStr.push_back(s[i]);
        }
        s = newStr;
        operations++;
    }
    return operations;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minOperations(s) << "\n";
    }

    return 0;
}
