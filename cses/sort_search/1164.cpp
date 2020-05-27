#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define MAXN 200001

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<pi> vpi;
typedef long long ll;

template <typename T> void max_self(T& a, T b){
  a = max(a,b);
}

void solve(){	
  int n; cin>>n;
  vi ans(n);
  set<int> unused;
  for(int i=1;i<n;i++) unused.insert(i);
  set<pair<int,int>> occupied;

  vector<pair<pi,int>> entry(n);
  for(int i=0;i<n;i++){
    cin>>entry[i].F.F>>entry[i].F.S;
    entry[i].S = i;
  }
  sort(all(entry));

  priority_queue<pi,vector<pi>, greater<pi>> departure;
  for(int i=0;i<n;i++){
    /*
    cout<<"\nSet:\n";
    for(auto elem : unused)
      cout<<elem<<" ";
    cout<<endl;
    */
    //if(departure.size())
    //  cout<<"departure top: "<< departure.top().F << " " <<departure.top().S<<endl;
    while(departure.size() && departure.top().F < entry[i].F.F){
      unused.insert(departure.top().S);
      departure.pop();
    }
    auto it = unused.lower_bound(1);
    unused.erase(*it);
    ans[entry[i].S] = *it;
    departure.push(MP(entry[i].F.S, *it));
  }
  int big = 0;
  for(int i=0;i<n;i++) max_self(big,ans[i]);
  cout<<big<<endl;
  for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";
  cout<<endl;
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
