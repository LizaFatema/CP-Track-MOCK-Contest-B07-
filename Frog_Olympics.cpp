#include <bits/stdc++.h>
using namespace std;

bool LeapyCanReach(long long n)
{
    for (long long x = 0; x <= n / 3; ++x)
    {
        long long r = n - 3 * x;
        if (r >= 0 && r % 4 == 0)
        {
            return true;
        }
    }
    return false;
}

bool JumpsterCanReach(long long n)
{
    for (long long x = 0; x <= n / 3; ++x)
    {
        long long r = n - 3 * x;
        if (r >= 0 && r % 5 == 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        bool leapy = LeapyCanReach(n);
        bool jumpster = JumpsterCanReach(n);
        if (leapy && jumpster)
            cout << "Both\n";
        else if (leapy)
            cout << "Leapy\n";
        else if (jumpster)
            cout << "Jumpster\n";
        else
            cout << "None\n";
    }
    return 0;
}
