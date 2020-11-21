#include <bits/stdc++.h>
 
#define INF 0x3f3f3f3f
#define mp make_pair
#define pb push_back
#define fori(i, n) for(int i = 0; i < n; i++)
#define For(i, a, b) for(i = a; i < b; i++)
#define roF(i, a, b) for(i = a; i > b; i--)
#define trace(x) cerr << #x << ": " << x << endl
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl "\n"
 
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pair<int,int> > vii;
 
int cont;
 
vector<int> mergesort(vector<int> a){
    if(a.size() == 1){
        return a;
    }
    vector<int> l;
    vector<int> r;
    for(int i=0;i<a.size();i++){
        if(i<a.size()/2){
            l.pb(a[i]);
        }else{
            r.pb(a[i]);
        }
    }
    l = mergesort(l);
    r = mergesort(r);
    vector<int> ans;
    int i =0,j=0;
    while(i<l.size() || j<r.size()) {
        if(i == l.size()){
            ans.pb(r[j]);
            j++;
        }else if(j == r.size()){
            ans.pb(l[i]);
            i++;
        }else if(l[i] <= r[j]){
            ans.pb(l[i]);
            i++;
        }else{
            ans.pb(r[j]);
            cont += (l.size()-i);
            j++;
        }
    }
    return ans;
}
 
 
int main(){_
    int n;
    while(cin>>n && n) {
        map<string,int > frodo;
        vector<int> sam;
        for(int i=1;i<=n;i++){
            string cur;
            cin >> cur;
            frodo[cur] = i;
        }
 
        cont=0;
        for(int i=1;i<=n;i++){
            string cur;
            cin >> cur;
            sam.pb(frodo[cur]);
        }
        mergesort(sam);
        cout<<cont<<endl;
    }
	return 0;
}
