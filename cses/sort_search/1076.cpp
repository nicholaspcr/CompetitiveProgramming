#include <bits/stdc++.h> 
using namespace std;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 


typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<pi> vpi;
typedef long long ll;

template <typename T> void max_self(T& a, T b){
  a = max(a,b);
}

template <typename T> void min_self(T& a, T b){
  a = min(a,b);
}


#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/trie_policy.hpp> 
using namespace __gnu_pbds;


void solve(){	
  int n, k;
  cin>>n>>k;
  vi v(n);
  for(int i=0;i<n;i++)
    cin>>v[i];
  
  ordered_set s;
  for(int i=0;i<n;i++){
    s.insert(v[i]);
    if(i >= k-1){
      for(auto it : s)
        cout<<it<<" ";
      
      cout<<"-> ";
      if(k & 1)
        cout<<*(s.find_by_order(k/2))<<" ";
      else
        cout<<min(*(s.find_by_order(k/2)), *(s.find_by_order(k/2-1))) <<" ";
      s.erase(s.find(v[i-k+1]));

      cout<<endl;
    }
  }
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
