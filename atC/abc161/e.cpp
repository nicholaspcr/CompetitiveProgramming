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
    int n,k,c;
    cin >>n>>k>>c;
    string str;
    cin>>str;
    int memo[str.size()+1][str.size()+1];
    memset(memo,0,sizeof memo);
    for(int i = 0; i < str.size(); i++){
		
	}
    
    for(int i = 0; i < (int)str.size(); i++){
		
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
