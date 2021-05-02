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

int main()
{
    fast;

    ll a, b;
    cin >> a >> b;

    vector<ll> arr;

    if (a == b)
    {
        ll t = 1;
        for (ll i = 1; i <= a; i++)
        {
            arr.push_back(t);
            arr.push_back((-1) * t);

            t++;
        }
    }

    else if (a > b)
    {
        ll sum = 0;
        ll t = 1;

        for (ll i = 1; i <= a; i++)
        {
            arr.push_back(t);
            sum = sum + t;

            t++;
        }

        if (b == 1)
            arr.push_back((-1) * sum);
        else
        {
            t = -1;
            for (ll i = 1; i < b; i++)
            {
                arr.push_back(t);
                sum = sum + t;

                t--;
            }
            arr.push_back((-1) * sum);
        }
    }

    else
    {
        ll sum = 0;
        ll t = -1;

        for (ll i = 1; i <= b; i++)
        {
            arr.push_back(t);
            sum = sum + t;

            t--;
        }

        if (a == 1)
            arr.push_back((-1) * sum);
        else
        {
            t = 1;
            for (ll i = 1; i < a; i++)
            {
                arr.push_back(t);
                sum = sum + t;

                t++;
            }
            arr.push_back((-1)* sum);
        }
    }

    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << " ";
    }
}
