#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

void solve(){
    int a, b;
    cin >> a >> b;
    if( a < 2 || b < 2 ){
        if(a == 2*b || b == 2*a)
            cout << "YES\n";
        else
            cout << "NO\n";
    }else{
        if((a+b)%3 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main(){
    int t; cin >> t;
    while(t--) solve();
    //
    //solve();
    return 0;
}
