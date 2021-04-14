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
#include <algorithm> 
using namespace std;

#define ll          long long
#define ull         unsigned long long
#define pb          push_back
#define pii         pair<int,int>
#define pll         pair<long,long>
#define mp(a,b)     make_pair(a,b)
#define vi          vector<int>
#define vll         vector<ll>
#define vii         vector<pii>
#define Mi          map<int,int>
#define mii         map<pii,int>
#define all(a)      (a).begin(),(a).end()
#define f           first
#define s           second
#define lb          lower_bound
#define ub          upper_bound
#define sz(x)       (int)x.size()
#define endl         '\n'

#define F(i,s,e)    for(ll i=s;i<e;++i)
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define rem(i,a,b)  for(int i=a;i>b;i--)
#define P(str) cout << str << endl

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)  


#define mod   1000000007
#define INF   numeric_limits<ll>::max();
#define NINF  numeric_limits<ll>::min();
const int N = int(1e5 + 3);

ll sum_of_digits(ll input)
{
    long long total = 0;

    while (input != 0) 
    {
        total += input % 10;
        input /= 10;
    }
    return total;
}

ll gcdExtended(ll a, ll b, ll *x, ll *y)
{
   
    if (a == 0)
    {
        *x = 0;
        *y = 1;
        return b;
    }
 
    ll x1, y1; 
    ll gcd = gcdExtended(b%a, a, &x1, &y1);
 
    
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return gcd;
}

int main()
{ 
    fast;
    int t ;
    cin >> t;

    while (t--)
    {
        ll x ;
        cin >> x ;

        ll ans = 0 ;

        for (ll i = x ;  ; i++)
        {
            ll sumdigit = sum_of_digits(i) ;

            ll x , y ;

            ans = gcdExtended( sumdigit , i , &x , &y) ;

            if( ans  > 1 ) 
            {
                cout << i <<endl;
                break ;

            }

        }
    }
    

 
    


}


