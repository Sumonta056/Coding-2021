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

    int t;
    cin >> t;

    vector<ll> v;

    v.push_back(3);
    v.push_back(11);
    v.push_back(101);
    v.push_back(1009);
    v.push_back(10007);
    v.push_back(100003);
    v.push_back(1000003);
    v.push_back(10000019);
    v.push_back(100030001);

    while(t--)
    {
        ll ans1 = 0, ans2 = 0;
        int a, b, c;
        cin >> a >> b >> c;
        int s = 0;

        ll x = v[c - 1];
        
        while (true)
        {

            long long int p = x;
            while (p > 0)
            {
                p = p / 10;
                s++;
            }
            if (s == a)
            {
                ans1 = x;
                break;
            }
            x = x * 2;
            s = 0;
        }

        x = v[c - 1];
        s = 0;
        
        while (true)
        {

            long long int p = x;
            while (p > 0)
            {
                p = p / 10;
                s++;
            }
            if (s == b)
            {
                ans2 = x;
                break;
            }
            x = x * 3;
            s = 0;
        }
        cout << ans1 << " " << ans2 << endl;
    }
}
