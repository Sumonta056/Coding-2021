//        ** Sumonta Saha Mridul **                                    SWE - SUST
/*     

 *        ######    ##     ##  ##     ##   #######   ##    ##   ########      ###
 !       ##    ##   ##     ##  ###   ###  ##     ##  ###   ##      ##        ## ##
 ?       ##         ##     ##  #### ####  ##     ##  ####  ##      ##       ##   ##
 *        ######    ##     ##  ## ### ##  ##     ##  ## ## ##      ##      ##     ##
 !             ##   ##     ##  ##     ##  ##     ##  ##  ####      ##      #########
 ?       ##    ##   ##     ##  ##     ##  ##     ##  ##   ###      ##      ##     ##
 *        ######     #######   ##     ##   #######   ##    ##      ##      ##     ##

*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define pll pair<long, long>
#define mp(a, b) make_pair(a, b)
#define vi vector<int>
#define vll vector<ll>
#define vii vector<pii>
#define Mi map<int, int>
#define mii map<pii, int>
#define all(a) (a).begin(), (a).end()
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define sz(x) (int)x.size()
#define endl '\n'

#define F(i, s, e) for (ll i = s; i < e; ++i)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rem(i, a, b) for (int i = a; i > b; i--)
#define P(str) cout << str << endl

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define mod 1000000007
#define INF numeric_limits<ll>::max();
#define NINF numeric_limits<ll>::min();
const int N = int(1e5 + 3);

int main()
{
    fast;
    ll i, j, k, n, t, m;
    cin >> n;
    ll a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll link[n];
    for (i = 0; i < n; i++)
    {
        link[i] = i + 1;
    }
    link[n - 1] = -1;
    cin >> t;
    while (t--)
    {
        ll pos;
        cin >> pos >> k;
        pos--;
        vector<ll> v;
        ll start = pos, ans = 0;
        while (start != -1 && a[start] <= k)
        {
            ans += (start - pos) * a[start];
            k -= a[start];
            a[start] = 0;
            v.pb(start);
            start = link[start];
        }
        if (start != -1 && k > 0)
        {
            a[start] = a[start] - k;
            ans += k * (start - pos);
        }
        for (i = 0; i < v.size(); i++)
        {
            link[v[i]] = start;
        }
        cout << ans << endl;
    }
    return 0;
}