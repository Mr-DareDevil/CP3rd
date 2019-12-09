/********************************
* AUTHOR:  ARNAB SEN             *
* NICK  :  arnab1729             *
* INSTITUTION: IIEST, SHIBPUR    *
********************************/

#include<bits/stdc++.h>

using namespace std;

typedef string                         STR;
typedef long long                      LL;
typedef long double                    LD;
typedef unsigned long long             ULL;
typedef vector<int>                    VI;
typedef priority_queue<int>            PQI;
typedef vector<LL>                     VLL;
typedef vector<ULL>                    VULL;
typedef vector<STR>                    VS;
typedef vector<char>                   VC;
typedef pair<int,int>                  PII;
typedef pair<LL,LL>                    PLL;
typedef pair<STR,int>                  PSI;
typedef pair<int,STR>                  PIS;
typedef vector<PII>                    VII;
typedef map<int,int>                   MII;
typedef map<LL,LL>                     MLL;
typedef map<STR,int>                   MSI;
typedef map<char,int>                  MCI;
typedef map<int,STR>                   MIS;
typedef set<STR>                       SS;
typedef set<int>                       SI;
typedef set<LL>                        SLL;

#define FF                             first
#define SS                             second
#define PB                             push_back
#define PF                             push_front
#define MP                             make_pair
#define all(a)                         (a).begin(), (a).end()
#define dec(n)                         cout<<fixed<<setprecision(n);
#define f(i, n)                     for(LL i=0; i<n; i++)
#define fr(i,n)                     for(LL i=n-1; i>=0; i--)

#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);srand(time(NULL))

const LL MOD     = 1000000007;
const LL SIZE    = 100000;
const int INF    = 0x3f3f3f3f;
const LL LL_INF  = 0x3f3f3f3f3f3f3f3f;
const LD PI      = acos(-1);
const LL MAXN    = numeric_limits<LL>::max();

template<class T>  T maxT(T a, T b){return (a>b?a:b);}
template<class T>  T minT(T a, T b){return (a<b?a:b);}
template<class T>  void setmin(T &a, T b){a=(a>b ?a:b);}
template<class T>  void setmax(T &a, T b){a=(a<b ?a:b);}

void fileio(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
}

void ofileio(){
  freopen("input.txt","r", stdin);
  freopen("output.txt", "w", stdout); 
}

void clock_out(){
  cerr<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
}


void debug_out() { cerr << endl; }

template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
  cerr << " " << H;
  debug_out(T...);
}
 
#ifndef ONLINE_JUDGE
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#define fio() fileio()
#define ofio ofileio()
#define clock() clock_out()
#else
#define debug(...) 1
#define fio() 1
#define ofio() ofileio()
#define clock() 1
#endif

void solve(){
   
}

int main(){
  fast;
  fio();

  LL t=1;
  //cin>>t;
  while(t--){
      solve();
  }
  clock();
  return 0;
}
