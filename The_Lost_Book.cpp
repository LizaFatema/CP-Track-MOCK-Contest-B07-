#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long int> books(n);
    for (int i = 0; i < n; i++)
    {
        cin >> books[i];
    }

    long long int target;
    cin >> target;

    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (books[i] == target)
        {
            idx = i;
            break;
        }
    }

    cout << idx << "\n";

    return 0;
}
