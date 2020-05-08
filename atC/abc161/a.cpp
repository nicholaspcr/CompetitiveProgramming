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

void swap(int* a, int* b){
	int t = *a;
	*a = *b;
	*b = t;
}

void solve(){	
    int a, b, c;
    cin >> a >> b >> c;
    swap(a, b);
    swap(a, c);
    cout <<a<<" "<<b<<" "<<c<<endl;
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