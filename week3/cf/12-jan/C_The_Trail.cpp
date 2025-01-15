#include <bits/stdc++.h>
using namespace std;

#define FAST_IO              \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vpii = vector<pii>;

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)((x).size())

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORD(i, a, b) for (int i = (a); i >= (b); --i)
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define REPD(i, n) for (int i = (n) - 1; i >= 0; --i)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

ll mod_exp(ll base, ll exp, ll mod)
{
    ll res = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
            res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

template <typename T>
void debug(T x)
{
    cerr << x << "\n";
}

template <typename T1, typename T2>
void debug(pair<T1, T2> p)
{
    cerr << "(" << p.first << ", " << p.second << ")" << "\n";
}

void solve()
{
    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    vector<vector<ll>> grid(n, vector<ll>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    vector<pair<int, int>> path;
    int x = 0, y = 0;
    path.push_back({x, y});

    for (char step : s)
    {
        if (step == 'R')
        {
            y++;
        }
        else if (step == 'D')
        {
            x++;
        }
        path.push_back({x, y});
    }

    vector<ll> rowSum(n, 0), colSum(m, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] != 0)
            {
                rowSum[i] += grid[i][j];
                colSum[j] += grid[i][j];
            }
        }
    }
    int i = 0;
    for (char c : s)
    {
        if (c == 'D')
        {
            grid[path[i].first][path[i].second] = -rowSum[path[i].first];
        }
        else
        {
            grid[path[i].first][path[i].second] = -colSum[path[i].second];
        }
        rowSum[path[i].first] += grid[path[i].first][path[i].second];
        colSum[path[i].second] += grid[path[i].first][path[i].second];
        i++;
    }
    grid[n-1][m-1] = -colSum[m-1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    FAST_IO;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

