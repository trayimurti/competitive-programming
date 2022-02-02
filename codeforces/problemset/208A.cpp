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

#ifdef EKAKSH
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
    string s;
    cin >> s;
    if((int)s.length() < 3)	cout << s;
    else{
    	bool flag = false;
    	int n = (int) s.length();
    	int i = 0;
    	for(;i<n-2;){
    		if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
    			if(flag)	cout << " ";
    			flag = false;
    			i += 2;
    		}else{
    			cout << s[i];
    			flag = true;
    		}
    		i++;
    	}
    	if(!((s[n-3] == 'W' && s[n-2] == 'U' && s[n-1] == 'B')
    	    	|| (s[n-4] == 'W' && s[n-3] == 'U' && s[n-2] == 'B')))
    		cout << s[n-2];
    	if(!(s[n-3] == 'W' && s[n-2] == 'U' && s[n-1] == 'B'))
    		cout << s[n-1];
    }
}

int main(){
    // usaco("");
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;
    for(int i=1;i<=t;i++){
        // Google
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}