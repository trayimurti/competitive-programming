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

vector<int> divisor(1000001);

void solve(){
	int n, k;
	cin >> n >> k;
	n += divisor[n];
	k--;
	n += (k*2);
	cout << n << endl;
}

int main(){
    // usaco("");
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    for(int i=0;i<1000001;i++)
    	divisor[i]  = i;
    for(int i=2;i<=1000;i++)
    	if(divisor[i] == i)
    		for(int j=2*i;j<1000001;j+=i)
    			if(divisor[j] == j)
    				divisor[j] = i;

    int t = 1;
    cin >> t;
    for(int i=1;i<=t;i++){
        // Google
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}