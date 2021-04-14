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

bool arraySortedOrNot(ll arr[], ll n)
{
    if (n == 0 || n == 1)
        return true;
 
    for (ll i = 1; i < n; i++)
 
        if (arr[i - 1] > arr[i])
            return false;
 
    return true;
}

int main()
{
    fast;
    
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        ll a[n];

        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }

        if(arraySortedOrNot(a,n))
        {
            cout<<"YES"<<endl;
            cout<<0<<endl;
        }
        else
        {
            ll f=1;
            if(a[0]<a[n-1])
            {
                f=0;
            }
            else
            {
                for(ll i =n-1;i>0;i--)
                {
                    if(a[i-1]<=a[i])
                    {
                    }
                    else
                    {
                        ll e=i;
                        if(arraySortedOrNot(a,e))
                        {
                            f=1;
                            break;
                        }
                        else
                        {
                            f=0;
                            break;
                        }
                    }
                }
            }


            if(f==1)
            {
                cout<<"YES"<<endl;
                cout<<1<<endl;
            }
            else if(f==0)
            {
                cout<<"NO"<<endl;
            }


        }
    }
    return 0;
}