#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<pi> vpi;
typedef long long ll;

template <typename T> void max_self(T& a, T b){
	a = max(a,b);
}
	
void solve(){	
   int n; cin >> n;
   vi v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   sort(all(v));
   int ans = v[n-1];
   int ptr = 0;
   while(v[ptr] <= v[n-1]){
	   v[n-1] -= v[ptr];
	   ptr++;
   }
   
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    //int t; cin >> t;
    //while(t--) solve();
    //
    solve();
    return 0;
}
