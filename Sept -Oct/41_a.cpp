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
#define se second
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

//* char a = 'A';   int num = (int) a;
//* char a = '2';   int num = a-48;

const ll arr_size = 1e5 + 7;
ll n, h;
ll pile[arr_size];

bool check_pile(ll k)
{
    ll time = 0;
    for (ll i = 0; i < n; i++)
    {
        time = time + ((pile[i]+k-1) / k);
    }

    return time <= h;
}

int main()
{
    fast;
    int t;
    cin >> t;

    while (t--)
    {
        cin >> n >> h;

        ll max_pile = 0;

        for (ll i = 0; i < n; i++)
        {
            cin >> pile[i];
            max_pile = max(max_pile, pile[i]);
        }

        ll begin = 1;
        ll end = max_pile;
        ll ans = max_pile;

        while (begin <= end)
        {
            ll mid = (begin + end) / 2;

            if (check_pile(mid))
            {
                ans = min(ans, mid);
                end = mid - 1;
            }

            else
                begin = mid + 1;
        }

        cout << ans << endl;
    }
}
