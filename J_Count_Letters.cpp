#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<char> v;

    char c;
    while (cin >> c)
    {
        v.push_back(c);
    }

    vector<int> v2(26);

    for (int i = 0; i < v.size(); i++)
    {
        v2[v[i] - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (v2[i] != 0)
            cout << char(i + 97) << " : " << v2[i] << endl;
    }

    return 0;
}

// Time complexity: O(N)