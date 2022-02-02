#include<bits/stdc++.h>

using namespace std;

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

void solve(){
	int a,b,c;
	cin >> a >> b >> c;
	if(2*b != a+c){
		int x = (2*b-c);
		if(x > a && !(x%a)){
			cout << "YES\n";
			return;
		}
		x = (2*b-a);
		if(x > c && !(x%c)){
			cout << "YES\n";
			return;
		}
		x = (a+c);
		if(x > 2*b && !(x%(2*b))){
			cout << "YES\n";
			return;	
		}
	}
	if(2*b == a+c)	cout << "YES\n";
	else			cout << "NO\n";
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