//        ** Sumonta Saha Mridul **                                    SWE - SUST
/*     

         ######    ##     ##  ##     ##   #######   ##    ##   ########      ###
        ##    ##   ##     ##  ###   ###  ##     ##  ###   ##      ##        ## ##
        ##         ##     ##  #### ####  ##     ##  ####  ##      ##       ##   ##
         ######    ##     ##  ## ### ##  ##     ##  ## ## ##      ##      ##     ##
              ##   ##     ##  ##     ##  ##     ##  ##  ####      ##      #########
        ##    ##   ##     ##  ##     ##  ##     ##  ##   ###      ##      ##     ##
         ######     #######   ##     ##   #######   ##    ##      ##      ##     ##

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
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int total = 0;
        if (n == 1)
        {
            if (s[0] == '*')
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }

        else
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '*')
                {
                    s[i] = 'X';
                    total++;
                    break;
                }
            }
            for (int i = n - 1; i >= 0; i--)
            {
                if (s[i] == '*')
                {
                    s[i] = 'X';
                    total++;
                    break;
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '.')
                    continue;
                if (s[i] == 'X')
                {
                    // cout<<"in"<<"\n";
                    bool flag = false;
                    for (int j = 1; j <= k; j++)
                    {
                        if (i + j < n && s[i + j] == 'X')
                        {
                            flag = true;
                            break;
                        }
                        else if (i + j >= n)
                        {
                            flag = true;
                            break;
                        }
                    }
                    if (flag == false)
                    {
                    
                        for (int j = i + k; j > i; j--)
                        {
                            if (j < n && s[j] == '*')
                            {
                                s[j] = 'X';
                                total++;
                                break;
                            }
                        }
                    }
                }
            }
            // cout<<s<<"\n";
            cout << total << "\n";
        }
    }
}
