#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

int const MOD = 1e9+7;

void solve(){
    int m[3][3];
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> m[i][j];

    bool op[3][3];
    int n; cin >> n;
    vi v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        for(int x = 0; x < 3; x++){
            for(int y = 0; y < 3; y++){
                if(v[i] == m[x][y]) op[x][y] = true;
            }
        }
    }
    for(int i = 0; i < 3; i++){
        int c = 1;
        for(int j = 0; j < 3; j++){
            if(!op[i][j]){
                c = 0; continue;
            }
        }
        if(c){
            cout << "Yes" << endl;
            exit(0);
        }
        c = 1;
        for(int j = 0; j < 3; j++){
            if(!op[j][i]){
                c = 0; continue;
            }
        }
        if(c){
            cout << "Yes" << endl;
            exit(0);
        }
    }
    int c = 1;
    for(int i = 0; i < 3; i++){
        if(!op[i][i]){
            c = 0;
            break;
        }
    }
    if(c){
        cout << "Yes" << endl;
        exit(0);
    }
    c = 1;
    for(int i = 2; i >= 0; i--){
        if(!op[i][i]){
            c = 0;
            break;
        }
    }
    if(c){
        cout << "Yes" << endl;
        exit(0);
    }
    cout << "No" << endl;
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();
    //
    solve();
    return 0;
}
