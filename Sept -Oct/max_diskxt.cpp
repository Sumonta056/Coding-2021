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

#define INF numeric_limits<ll>::max();
#define NINF numeric_limits<ll>::min();
const int N = int(1e5 + 3);

//* char a = 'A';   int num = (int) a;
//* char a = '2';   int num = a-48;
bool pairCompare(const pair<int, int> &i, const pair<int, int> &j)
{
    return i.first < j.first;
}
bool paircompare(const pair<int, int> &i, const pair<int, int> &j)
{
    return i.second < j.second;
}
int main()
{
    fast;
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        int arr[n];
        ll mod = 0;

        
        ll ans;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            darr[i].first = arr[i];
            darr[i].second = i;
        }
        sort(darr.begin(), darr.end(), pairCompare);

        // for (int i = 0; i < n; i++)
        //     cout << darr[i].first << darr[i].second << endl;

        for (int i = 0; i < n; i++)
        {
            if (mod < darr[i].first)
            {

                darr[i].first = mod;
                mod++ ;
            }

            else
            {
                darr[i].first = mod;
            }
        }

        sort(darr.begin(), darr.end(), paircompare);

        for (int i = 0; i < n; i++)
            cout << darr[i].first << " ";

        cout << endl;
    }
}
