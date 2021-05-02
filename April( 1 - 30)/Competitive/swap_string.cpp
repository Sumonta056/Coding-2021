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
#define s second
#define lb lower_bound
#define ub upper_bound
#define sz(x) (int)x.size()
#define endl '\n'
#define Y    cout << "YES\n"
#define No    cout << "NO\n"

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
    ll cases=1;
    //cin>>cases;
    while(cases--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll q;
        cin>>q;
        ll c=0;
        while(q--)
        {
            ll t,i1,i2;
            cin>>t>>i1>>i2;
            if(t==2)
            {
                c++;
                continue;
            }
            else
            {
                if(c%2==1)
                {
                    if(i1<=n)
                        i1+=n;
                    else
                        i1-=n;
                    if(i2<=n)
                        i2+=n;
                    else
                        i2-=n;
                    swap(s[i1-1],s[i2-1]);
                }
                else
                {
                    swap(s[i1-1],s[i2-1]);
                }
            }
        }
        if(c%2==1)
        {
                string tmp=s.substr(0,n);
                string tmp2=s.substr(n,n);
                s="";
                s=tmp2+tmp;
        }
        cout<<s<<"\n";
    }
    return 0;
}