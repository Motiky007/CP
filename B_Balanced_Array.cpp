#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    if (n % 4 == 0)
    {
        cout << "YES\n";
        n /= 2;
        for (int i = 1; i <= n; i++)
        {
            cout << i * 2 << " ";
        }
        for (int i = 1; i < n; i++)
        {
            cout << i * 2 - 1 << " ";
        }
        cout << n * 3 - 1 << "\n";
    }
    else
        cout << "NO\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //#endif

    ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
