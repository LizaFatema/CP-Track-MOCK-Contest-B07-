#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int q;
    cin >> q;

    priority_queue<long long int, vector<long long int>, greater<long long int>> minHeap;

    while (q--)
    {
        long long int query;
        cin >> query;

        if (query == 1)
        {
            long long int x;
            cin >> x;
            minHeap.push(x);
        }
        else if (query == 2)
        {
            if (minHeap.empty())
            {
                cout << "empty\n";
            }
            else
            {
                long long int min = minHeap.top();
                cout << min << "\n";

                while (!minHeap.empty() && minHeap.top() == min)
                {
                    minHeap.pop();
                }
            }
        }
    }
    return 0;
}
