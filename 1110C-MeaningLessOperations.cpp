#include <bits/stdc++.h>
#define mod 1000000007
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define pb push_back
#define eb emplace_back
#define sv() int t; scanf("%d",&t); while(t--)
inline bool EQ(double a, double b) { return fabs(a-b) < 1e-9; }
const int INF = 1<<29;
typedef long long ll;
inline int two(int n) { return 1 << n; }
inline int test(int n, int b) { return (n>>b)&1; }
inline void set_bit(int & n, int b) { n |= two(b); }
inline void unset_bit(int & n, int b) { n &= ~two(b); }
inline int last_bit(int n) { return n & (-n); }
inline int ones(int n) { int res = 0; while(n && ++res) n-=n&(-n); return res; }
template<class T> void chmax(T & a, const T & b) { a = max(a, b); }
template<class T> void chmin(T & a, const T & b) { a = min(a, b); }
ll gcd(ll a,ll b)
{if (a == 0 || b == 0) return 0;  if (a == b) return a;  if (a > b) return gcd(a-b, b); return gcd(a, b-a);} 
ll lcm(ll a,ll b)  
 {return (a*b)/gcd(a, b);} 
ll max(ll a,ll b)
{if(a>b) return a;return b;}
ll power(ll x,ll y) 
{ll res = 1;while (y > 0) { if (y & 1)res = res*x;y = y>>1;x = x*x; } return res; }
ll powermod(ll x,ll y) 
{ll res = 1; x = x % mod;while (y > 0) { if (y & 1) res = (res*x) % mod; 
y = y>>1; x = (x*x) % mod;} return res;} 
ll mulmod(ll a,ll b) 
{ll res = 0; a %= mod; 
while (b) { if (b & 1) res = (res + a) % mod; a = (2 * a) % mod; b >>= 1;}  
return res; }  
bool isPrime(ll n)
{if (n <= 1) return false; if (n <= 3) return true;
if (n%2 == 0 || n%3 == 0) return false;
for (int i = 5 ; i*i <= n ; i+=6){
if ((n%i==0) || (n%(i + 2) == 0)) return false; } return true;}
long double dist(ll x1 ,ll y1 ,ll x2 ,ll y2)
{return (long double)sqrt((long double)((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2)));}
ll squaredist(ll x1 ,ll y1 ,ll x2 ,ll y2)
{ return ((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2)); }
ll nCr(ll n ,ll r)
{if(r == 0) return 1; return (n*nCr(n - 1 , r - 1))/r;}
ll countDivisors(ll n) 
{ll cnt = 0; for (int i = 1; i <= sqrt(n); i++) { if (n % i == 0) 
{if (n / i == i) cnt++; else cnt = cnt + 2; } } return cnt; } 

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int q;
	cin>>q;
	while(q--)
	{
		int n;
		cin>>n;
		int flag=0;
		if(!((n+1)&(n)))
		{
			if(flag)
				continue;
			for(int i=3; i<=sqrt(n); i+=2)
			{	
				if(!(n%i))
				{
					cout<<n/i<<"\n";
					flag=1;
					break;
				}
			}
			if(!flag)
				cout<<1<<"\n";
		}
		else
		{
			int m=1;
			while(n)
			{
				n >>=1;
				m <<= 1;
			}
			cout<<m-1<<"\n";
		}
	}

	return 0;
}
