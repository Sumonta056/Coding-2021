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
const int MOD=1e9+7;

int main()
{
    fast;
    ll cnt[26] = {0};

    string s;
    cin >> s;
    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'c')
            cnt[0]++;
        else if (s[i] == 'h')
            cnt[1] += cnt[0];
        else if (s[i] == 'o')
            cnt[2] += cnt[1];
        else if (s[i] == 'k')
            cnt[3] += cnt[2];
        else if (s[i] == 'u')
            cnt[4] += cnt[3];
        else if (s[i] == 'd')
            cnt[5] += cnt[4];
        else if (s[i] == 'a')
            cnt[6] += cnt[5];
        else if (s[i] == 'i')
            cnt[7] += cnt[6];
        for (int j = 0; j < 8; j++)
            cnt[j] %= MOD;
    }

    cout << cnt[7] << endl;
}
