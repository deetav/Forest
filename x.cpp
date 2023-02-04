#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &e : a)
        cin >> e;
    vector<int> res;
    for (int i = 0; i < a.size(); i++)
    {
        auto it = std::lower_bound(res.begin(), res.end(), a[i]);
        if (it == res.end())
            res.push_back(a[i]);
        else
            *it = a[i];
    }
    int N = (int)res.size();
    int M = 1000007;
    for (int x = 1; x < M; ++x)
    {
        if (((N % M) * (x % M)) % M == 1)
        {
            cout << x;
            return 0;
        }
    }
    cout << 0;

    return 0;
}