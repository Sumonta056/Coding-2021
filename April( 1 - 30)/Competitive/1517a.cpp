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
#define Y cout << "YES\n"
#define No cout << "NO\n"

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

ll countDigit(ll n)
{
    return floor(log10(n) + 1);
}

ll power(ll base, ll powr)
{
    ll res = 1;
    while (powr)
    {
        if (powr % 2 == 0)
            base *= base, powr /= 2;
        else
            res *= base, powr--;
    }
    return res;
}

int main()
{
    fast;
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        if (n < 2050)
            cout << -1 << endl;

        else
        {
            ll k = countDigit(n) - 4;
     
            ll x = (2050 * power(10, k));

            if (n == x)
            {
                cout << 1 << endl;
            }

            else
            {
                ll count = 0;
                ll j = k;

                ll rem = n;

                while (j >= 0)
                {

                    ll h = (2050 * power(10, j));

                    // cout << j << " ";

                    count = count + (rem / h);
                    rem = rem % h;
                    // cout << h << " " << rem << " " << count << endl;
                    j--;
                }

                if (rem == 0)
                    cout << count << endl;
                else
                    cout << -1 << endl;
            }
        }
    }
}
