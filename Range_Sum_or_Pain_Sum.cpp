#include <bits/stdc++.h>
using namespace std;

long long prefix_sum(long long x)
{
    long long full_pairs = x / 2;
    long long rem = x % 2;
    return full_pairs * (full_pairs + 1) + rem * (full_pairs + 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, q;
    cin >> n >> q;

    while (q--)
    {
        long long l, r;
        cin >> l >> r;
        long long ans = prefix_sum(r) - prefix_sum(l - 1);
        cout << ans << "\n";
    }

    return 0;
}
