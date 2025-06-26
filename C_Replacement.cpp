#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (0 < v[i])
            replace(v.begin(), v.end(), v[i], 1);
        else if (0 > v[i])
            replace(v.begin(), v.end(), v[i], 2);
    }

    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}

// Time Complexity: O(N * N)