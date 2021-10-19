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
        int l;
        cin >> l;

        string s;
        cin >> s;

        int dot = 0;
        int numH = 0;
        int numT = 0;

        string track;
        int check = 0;

        for (int i = 0; i < l; i++)
        {
            if (check == 0 && s[i] != '.')
            {
                track = s[i];
                check++;
            }
            else if (s[i] != '.' && check != 0)
            {
                track = track + s[i];
                //cout << track << endl;
            }

            if (s[i] == '.')
                dot++;
            else if (s[i] == 'H')
                numH++;
            else
                numT++;
        }

       // cout << dot << numH << numT << endl;

        if (dot == l)
            cout << "Valid" << endl;
        else if (numH == l || numT == l)
            cout << "Invalid" << endl;
        else if (numH != numT)
            cout << "Invalid" << endl;
        else
        {
            if (track[0] == 'T')
                cout << "Invalid" << endl;
            else
            {
                bool possible = true;

                for (int i = 0; i < track.length(); i++)
                {
                    if (track[i] == 'H' && i % 2 != 0)
                    {
                        possible = false;
                        break;
                    }

                    if (track[i] == 'T' && i % 2 == 0)
                    {
                        possible = false;
                        break;
                    }
                }

                if (possible)
                    cout << "Valid" << endl;

                else
                    cout << "Invalid" << endl;
            }
        }
    }
}
