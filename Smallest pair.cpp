
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int mi = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int re = arr[i] + arr[j] + (j - i);
                mi = min(mi, re);
            }
        }

        cout << mi << "\n";
    }
    return 0;
}

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int mi = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int re = arr[i] + arr[j] + (j - i);
                mi = min(mi, re);
            }
        }

        cout << mi << "\n";
    }
    return 0;
}
