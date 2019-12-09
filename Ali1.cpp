#include <bits/stdc++.h>
#define m 1e9 + 7
#define lld long long int
#define ull unsigned long long int
#define for0(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define forrev(i, n) for (int i = (int)(n)-1; i >= 0; --i)
#define endl "\n"

using namespace std;

/*
It is not a disgrace if you don't reach the stars,
But a disgrace if you don't have stars to reach.
*/

lld t;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> t;
    while (t--)
    {
        lld n, k, i, j, cnt = 0, c = 0, x, y, sum = 0;
        cin >> n >> k;
        j = n;
        int a[n];

        while (j / k > 0)
        {
            x = j / k;
            y = j % k;
            j = x + y;
        }
        for0(i, n)
        {
            cin >> a[i];
            if (i <= n - j)
                sum += a[i];
        }
        cout << sum << " ";
        for (i = n - j + 1; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    } //end of while
    return 0;
}