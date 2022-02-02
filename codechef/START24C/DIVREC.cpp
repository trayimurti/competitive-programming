#include<bits/stdc++.h>

using namespace std;

#define TRAYIMURTI
#define MOD 1000000007
#define INF INT_MAX
#define reset(arr,n,i) fill(arr, arr+n, i)
#define iseql(a,b) ((abs(a-b) < 1e-9) ? 1 : 0)

typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;

//////////////////////////////////DEBUG////////////////////////////////////////

#ifdef TRAYIMURTI
#define debug(x) cerr << #x <<" : "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
    
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p) {cerr << "{\n"; _print(p.first); cerr << ", "; _print(p.second); cerr << "}\n";}
template <class T> void _print(vector <T> v) {cerr << "[\n"; for (T i : v) {_print(i); cerr << " ";} cerr << "]\n";}
template <class T> void _print(set <T> v) {cerr << "[\n"; for (T i : v) {_print(i); cerr << " ";} cerr << "]\n";}
template <class T> void _print(multiset <T> v) {cerr << "[\n"; for (T i : v) {_print(i); cerr << " ";} cerr << "]\n";}
template <class T> void _print(queue <T> v) {cerr << "[\n"; queue <T> dv = v; while(!dv.empty()) {_print(dv.front()); dv.pop(); cerr << " ";} cerr << "]\n";}
template <class T> void _print(stack <T> v) {cerr << "[\n"; stack <T> dv = v; while(!dv.empty()) {_print(dv.top()  ); dv.pop(); cerr << " ";} cerr << "]\n";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[\n"; for (auto i : v) {_print(i); cerr << " ";} cerr << "]\n";}

// USACO
void usaco(string file){
    freopen((file + ".in").c_str(),"r", stdin );
    freopen((file + ".out").c_str(),"w",stdout);  
    freopen((file + ".err").c_str(),"w",stderr);  
}

ll divSum(ll num){
    ll result = 0;
    if(num == 1ll)
      return result;
    for (ll i=2ll; i<=sqrt(num); i++){
        if (num%i==0){
            if (i==(num/i))
                result += i;
            else
                result += (i + num/i);
        }
    }
    return (result + 1ll);
}

void solve(){
    int x,a,b;
    cin >> x >> a >> b;
    if(x%a) cout << "-1\n";
    else{
        b = (x/a)*b;
        if((divSum(b)+b) != x){
            cout << "-1\n";
        }else{
            cout << b << endl;
        }
    }
}

int main(){
    // usaco("");
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;
    for(int i=1;i<=t;i++){
        // Google
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}