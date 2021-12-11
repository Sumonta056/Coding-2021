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

#define f first
#define se second
#define lb lower_bound
#define ub upper_bound
#define pb push_back

#define pii pair<int, int>
#define pll pair<long, long>
#define mp(a, b) make_pair(a, b)
#define vi vector<int>
#define vll vector<ll>
#define vii vector<pii>
#define sll set<ll>
#define qll queue<ll>
#define stll stack<ll>
#define Mi map<int, int>
#define mii map<pii, int>
#define alls(a) (a).begin(), (a).end()
#define sz(x) (int)x.size()

#define size(s) s.length()
#define all(v) (v.begin, v.end)
#define rev(v) reverse(v.begin, v.end)
#define srt(v) sort(v.begin, v.end)

#define F(i, s, e) for (ll i = s; i < e; ++i)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rem(i, a, b) for (int i = a; i > b; i--)
#define pv(v)             \
    for (ll i : v)        \
        cout << i << " "; \
    cout << endl;

#define max3(a, b, c) max(max((a), (b)), (c))
#define min3(a, b, c) min(min((a), (b)), (c))

#define cin(n) cin >> n
#define cin2(a, b) cin >> a >> b;
#define cin3(a, b, c) cin >> a >> b >> c;
#define printE(str) cout << str << endl
#define print(str) cout << str << endl
#define endl '\n'
#define Y cout << "YES\n"
#define No cout << "NO\n"
#define ye cout << "Yes\n"
#define no cout << "No\n"

#define sp " "
#define enter cout << endl;

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define mod 1000000007
#define inf 1000000000000000005
#define INF numeric_limits<ll>::max();
#define NINF numeric_limits<ll>::min();
const int N = int(1e5 + 3);

#define fo(i, a, b) for (int i = a; i <= b; i++)

//* char a = 'A';   int num = (int) a;
//* char a = '2';   int num = a-48;

ll mod_mul(ll a, ll b)
{
    a = a % mod;
    b = b % mod;
    return (((a * b) % mod) + mod) % mod;
}
ll mod_add(ll a, ll b)
{
    a = a % mod;
    b = b % mod;
    return (((a + b) % mod) + mod) % mod;
}

int main()
{
    fast;
    int t;
    cin >> t;

    string c;
    getline(cin, c);
    
    while (t--)
    {
        string s;
        getline(cin, s);

        int size = s.length();

        stack<char> brack_seq;

        if (size % 2 != 0)
        {
            cout << "No" << endl;
            continue;
        }

        // int first_b = 0;
        // int second_b = 0;
        bool correct = true;

        for (int i = 0; i < size; i++)
        {
            if (s[i] == '(')
                brack_seq.push(s[i]);

            if (s[i] == '[')
                brack_seq.push(s[i]);

            if (brack_seq.empty())
            {
                correct = false;
                break;
            }

            else if (s[i] == ')')
            {
                if (brack_seq.top() == '[')
                {
                    correct = false;
                    break;
                }
                brack_seq.pop();
            }

            else if (s[i] == ']')
            {
                if (brack_seq.top() == '(')
                {
                    correct = false;
                    break;
                }
                brack_seq.pop();
            }
        }

        if (!brack_seq.empty())
            correct = false;

        if (correct)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
