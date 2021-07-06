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

#define q         \
    cout << "? "; \
    fflush(stdout)

int main()
{
    //fast;
    int n;
    cin >> n;

    int arr[n];

    int x, y, z;

    q;
    cout << 1 << " " << 2 << endl;
    fflush(stdout);
    cin >> x;

    q;
    cout << 1 << " " << 3 << endl;
    fflush(stdout);
    cin >> y;

    q;
    cout << 2 << " " << 3 << endl;
    fflush(stdout);
    cin >> z;

    int a, b, c;

    c = (z - x + y) / 2;
    b = z - c;
    a = x - b;

    arr[0] = a;
    arr[1] = b;
    arr[2] = c;

    int j = 3;

    for (int i = 4; i <= n; i++)
    {
        int lastindex = i - 1;

        q;
        cout << lastindex << " " << i << endl;
        fflush(stdout);

        int x;
        cin >> x;

        arr[j] = x - arr[lastindex - 1];
        j++;
    }

    cout << "! ";
    fflush(stdout);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        fflush(stdout);
    }
}
