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
    ll u, v;
    cin >> u >> v;
    if(u > v)
        cout << -1 << endl;
    else{
        vector<ll> vec;
        if(u)
            vec.PB(u);
        v -= u;
        if(v & 1){
            cout << -1 << endl;
            return;
        }
        if(v > 0){
            vec.PB(v/2);
            vec.PB(v/2);

            if(vec.size() == 3){
                if(vec[0] == ((vec[0] ^ vec[1]) ^ vec[2]) 
                    && (vec[0]^vec[1]) != 0 
                    && (vec[0] & vec[1]) == false ){
                    vec[0] = vec[0] ^ vec[1];
                    vec.erase(vec.begin() + 1);
                }
            }
        }
        cout << vec.size() << endl;
        for(int i = 0; i < vec.size(); i++){
            cout << vec[i] << " ";
        }
        if(vec.size()) cout << endl;
    }
}

int main() {
    //int t; cin >> t;
    //while(t--) solve();

    solve();
    return 0;
}
