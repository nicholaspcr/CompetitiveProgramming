#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define FOR(i,a,b) for(int i = a; i < b; i++)

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

void solve(){
    char l, r;
    char op[4] = {'<', '^', '>', 'v'};
    // for(int i = 0; i < 4; i++)
    // cout << (int)op[i] << endl;    
    scanf("%c %c", &l, &r);
    int n; scanf("%d", &n);
    int pos = 0;
    for(int i = 0; i < 4; i++)
        if(op[i] == l)
            pos = i;
    n = n%4;   

    if(~n & 1){
        cout << "undefined\n";
        return;
    }

    if(op[(pos+n+4)%4] == r){
        cout << "cw\n";
        return;
    }

    if(op[(pos-n+4)%4] == r){
        cout << "ccw\n";
        return;
    }

    // if(n == 1){
    //     if(op[(pos+1+4)%4] == r){
    //         cout << "cw\n";
    //         return;
    //     }

    //     if(op[(pos-1+4)%4 == r])
    //         cout << "ccw\n";
    //         return;
    //     }
        
    //     if((int)l == 118){ // down

    //     }else if((int)l == 94){ // up

    //     }else if((int)l == 60){ // left
        
    //     }else{ // right
    //     } 
    // }else if(n == 3){
    //     if((int)l == 118){ // down
        
    //     }else if((int)l == 94){ // up

    //     }else if((int)l == 60){ // left
        
    //     }else{ // right
    //     } 
    // }    
    cout << "undefined\n";
}

int main() {
    //int t; cin >> t;
    //while(t--) solve();

    solve();
    return 0;
}
