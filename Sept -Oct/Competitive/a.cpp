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
        cin >> n;

        char s[n];
        char oddarr[n];
        int k = 0;

        int even = 0, odd = 0, sum = 0;
        int final = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> s[i];

            int check = s[i] - 48;

            if (i == n - 1)
                final = check;

            sum = sum + check;

            if (check % 2 == 0)
                even++;
            else
            {
                odd++;
                oddarr[k] = s[i];
                k++;
            }
        }

        if (even == n)
            cout << -1 << endl;
        else if (n == 1)
            cout << -1 << endl;
        else if (odd == 1)
            cout << -1 << endl;
        else if (sum % 2 == 0 && final % 2 != 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << s[i];
            }
            cout << endl;
        }
        else
        {
            int loop = 0;

            if (odd % 2 == 0)
                loop = odd;
            else
                loop = odd - 1;

            for (int j = 0; j < loop; j++)
            {
                cout << oddarr[j];
            }
            cout << endl;
        }
    }
}
