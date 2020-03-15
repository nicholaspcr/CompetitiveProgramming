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
    int n; cin >> n;
    int total = n;
    string s; cin >> s;
    vi v(n);
    vi values;
    for(int i = 0; i < n; i++){
        v[i] = (int)s[i] - (int)'a';
        values.PB(v[i]);
    }
    sort(values.begin(), values.end());
    auto last = unique(values.begin(), values.end());
    values.erase(last, values.end());
    sort(values.rbegin(), values.rend());
    /*
    for(int i = 0; i < values.size(); i++){
        cout << values[i] << " ";
    }
    cout << endl;
    */

    while(n > 1){
        int condi = 0;
        for(int i = 0; i < values.size(); i++){
            if(values[i] == 0) continue;
            for(int j = 0; j < n; j++){
                if(v[j] == values[i]){
                    if(j > 0 && v[j]-1 == v[j-1]){
                        v.erase(v.begin() + j);
                        j--;
                        n--;
                        condi++;
                    }else{
                        if(j < n-1 && v[j]-1 == v[j+1]){
                            v.erase(v.begin() + j);
                            j--;
                            n--;
                            condi++;
                        }
                    }
                }
            }
            if(condi) break;
        }
        if(!condi) break;
    }
    /*
    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    */
    cout << total - (int)v.size() << endl;
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();

    solve();
    return 0;
}
