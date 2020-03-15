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

bool check(string a, string b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        for(int j = i+1; j < a.size(); j++){
            if( (a[i] == a[j] && b[i] != b[j])
                || (a[i] != a[j] && b[i] == b[j]) )
                return false;
        }
    }
    return true;
}


void solve(){
    int n; cin >> n;
    vector<string> vs;
    string ent = "";
    for(int i = 0; i < n; i++) ent += 'a';
    vs.PB(ent);

    for(int i = 1; i < n; i++){
        string str = vs[0];
        int pos = n-1;
        str[pos] = (int)str[pos] + i;
        while(!check(vs[0], str)){
            str[pos]++;
            if(str[pos] > 'z'){
                str[pos] = 'a';
                str[pos-1]++;
            }
        }
        vs.PB(str);
    }
    for(int i = 0; i < n; i++)
        cout << vs[i] << endl;
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();
    solve();
    return 0;
}
