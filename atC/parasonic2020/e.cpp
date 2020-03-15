#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define INF 0x3f3f3f3f

using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<int,int> pi;

void solve(){
    string a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    for(int i = 0; i < a.size(); i++){
        int j = 0;
        while(j < a.size() && j < b.size()){
           if(a[i+j] == b[j] || b[j] == '?' || a[i+j] == '?' ) j++;
           else break;
        }
        if( j == b.size() ){
            ans = i + 1;
            break;
        }
    }
    for(int i = 0; i < b.size(); i++){
        int j = 0;
        while( j < b.size() && j < c.size()){
            if(b[i+j] == c[j] || b[i+j] == '?' ||  c[j] == '?') j++;
            else break;
        }
        if(j == c.size() ){
            ans = i+1;
            break;
        }
    }
    cout << ans << endl;
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();

    solve();
    return 0;
}
