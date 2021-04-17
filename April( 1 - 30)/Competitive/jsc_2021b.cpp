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

void printUncommon(int arr1[], int arr2[],
                   int n1, int n2)
{

    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {

        // If not common, print smaller
        if (arr1[i] < arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
            k++;
        }
        else if (arr2[j] < arr1[i])
        {
            cout << arr2[j] << " ";
            k++;
            j++;
        }

        // Skip common element
        else
        {
            i++;
            j++;
        }
    }

    // printing remaining elements
    while (i < n1)
    {
        cout << arr1[i] << " ";
        i++;
        k++;
    }
    while (j < n2)
    {
        cout << arr2[j] << " ";
        j++;
        k++;
    }
}

// Driver code
int main()
{
    int n1,n2 ;
    cin >> n1 >> n2 ;
    
    int arr1[n1];
    int arr2[n2];

    for ( int i  = 0 ; i <  n1 ; i++)
    {
        cin >> arr1[i];
    }

    for ( int i  = 0 ; i <  n2 ; i++)
    {
        cin >> arr2[i];
    }

    sort( arr1 , arr1+n1) ;
    sort( arr2 , arr2+n2);


    printUncommon(arr1, arr2, n1, n2);

    return 0;
}
