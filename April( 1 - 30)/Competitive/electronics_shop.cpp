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
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, m, s;
    cin >> s >> n >> m;

    vector<int> keyboard(n);
    vector<int> usb(m);
    for (int i = 0; i < n; i++)
        cin >> keyboard[i];
    for (int i = 0; i < m; i++)
        cin >> usb[i];
    sort(usb.begin(), usb.end());
    sort(keyboard.begin(), keyboard.end());
    if (keyboard[0] + usb[0] > s)
        cout << -1 << endl;
    else
    {
        int mini = s - keyboard[0] - usb[0];
        for (int i = 0; i < n; i++)
        {
            if (keyboard[i] + usb[0] > s)
                break;
            for (int j = 0; j < m; j++)
            {
                if (keyboard[i] + usb[j] > s)
                    break;
                else
                    mini = min(s - keyboard[i] - usb[j], mini);
            }
        }
        cout << s - mini << endl;
    }
