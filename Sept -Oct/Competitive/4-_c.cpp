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

int main()
{
    fast;
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll arr[n];
        ll sortarr[n];

        ll top = 0, bottom = 0;

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            sortarr[i] = arr[i];

            if (i == 0)
                top = arr[i];
            if (i == n - 1)
                bottom = arr[i];
        }

        sort(sortarr, sortarr + n);

        bool sorted = true;

        for (ll i = 0; i < n; i++)
        {
            if (arr[i] != sortarr[i])
            {
                sorted = false;
                break;
            }
        }
        //cout << sorted << endl;

        if (sorted)
            cout << "YES" << endl;
        else
        {
            if (top < bottom)
                cout << "NO" << endl;
            else if (n == 2 && top > bottom)
                cout << "YES" << endl;
            else
            {
                ll spike = 0;

                for (ll i = 0; i < n - 1; i++)
                {
                    if (arr[i + 1] < arr[i])
                        spike++;
                }

                //cout << spike << endl;
                if (spike == 1)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }
}
