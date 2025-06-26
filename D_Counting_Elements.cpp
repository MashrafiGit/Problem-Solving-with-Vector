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
    }

    int sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (v[i] + 1 == v[j])
    //         {
    //             sum++;
    //             j = n;
    //         }
    //     }
    // }

    for (auto it = v.begin(); it < v.end(); it++)
    {
        if ((find(v.begin(), v.end(), *it + 1) != v.end()))
            sum++;
    }

    cout << sum << endl;

    return 0;
}

// Time Complexity: O(N * N)