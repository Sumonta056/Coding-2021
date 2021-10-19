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
    int n;
    cin >> n;

    string s;
    cin >> s;

    int firstp[n];
    int secondp[n];

    int j = 0;

    for (int i = 0; i < n; i++)
    {
        firstp[i] = s[j] - 48;
        j++;
    }
    for (int i = 0; i < n; i++)
    {
        secondp[i] = s[j] - 48;
        j++;
    }

    sort(firstp, firstp + n);
    sort(secondp, secondp + n);

    int check = 0;
    int b = 0, c = 0;

    for (int i = 0; i < n; i++)
    {
        if (firstp[i] > secondp[i])
            b++;

        if (firstp[i] < secondp[i])
            c++;
    }

    // if (firstp[0] > secondp[0] && firstp[n - 1] > secondp[n - 1])
    //     check = 1;

    // if (firstp[0] < secondp[0] && firstp[n - 1] < secondp[n - 1])
    //     check = 1;

    if (b == n || c == n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
