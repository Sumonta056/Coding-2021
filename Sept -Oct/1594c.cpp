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
        int n;
        char c;
        cin >> n;
        cin >> c;

        string s;
        cin >> s;

        bool sort = true;

        int evenans = 0;
        if (n % 2 == 0)
            evenans = n - 1;
        else
            evenans = n;

        for (int i = 0; i < n; i++)
        {
            if (s[i] != c)
            {
                sort = false;
                break;
            }
        }

        if (sort)
            cout << 0 << endl;
        else
        {

            int eq = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == c)
                    eq++;
            }

            if (eq == n - 1)
            {
                cout << 1 << endl;
                if (s[n - 1] != c)
                    cout << n - 1 << endl;
                else
                    cout << n << endl;
                continue;
            }

            bool done = true;
            for (int i = n / 2; i < n; i++)
            {
                if (s[i] == c)
                {
                    cout << 1 << endl;
                    cout << i + 1 << endl;
                    done = false;
                    break;
                }
            }
            if (!done)
                continue;

            cout << 2 << endl;
            cout << 2 << " " << evenans << endl;
        }
    }
}
