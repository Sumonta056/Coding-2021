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

bool is_prime(int n)
{
    if (n == 1)
        return false;

    int i = 2;

    while (i * i <= n)
    {
        if (n % i == 0)
            return false;
        i += 1;
    }

    return true;
}

int main()
{
    fast;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n + 1];
        int sum = 0;

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            sum = sum + arr[i];
        }

        if (!is_prime(sum))
        {
            cout << n << endl;

            for (int i = 1; i <= n; i++)
                cout << i << " ";

            cout << endl;
        }

        else
        {
            cout << n - 1 << endl;
            int check = 1;
            for (int i = 1; i <= n; i++)
            {
                // * find the odd number and delete
                if (check && arr[i] & 1)
                {
                    // * cout << check << (arr[i] & 1) << endl;
                    check = 0;
                    continue;
                }
                cout << i << ' ';
            }
            cout << endl;
        }
    }
}
