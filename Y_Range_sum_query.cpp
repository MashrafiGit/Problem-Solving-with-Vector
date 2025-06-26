#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l, r;
    while (cin >> l >> r)
    {
        cout << accumulate(a.begin() + l - 1, a.begin() + r, 0) << endl;
    }

    return 0;
}

// Time complexity: O(N*N)