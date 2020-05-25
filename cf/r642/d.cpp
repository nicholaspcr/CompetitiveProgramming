#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()

using namespace std;

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

struct customCompare{
  bool operator()(const pi& l, const pi& r){
    int lSz = abs(l.F - l.S);
    int rSz = abs(r.F - r.S);
    if(lSz == rSz)
      return l.F > r.F;
    return lSz < rSz;
  }
};

void solve(){	
  int n;cin>>n;
  priority_queue<pi, vector<pi>, customCompare> q;
  q.push(MP(1,n));
  int step = 1;
  vi ans(n+1);
  while(q.size()){
    pi t = q.top(); q.pop();
    int op = t.S - t.F + 1;
    int pos;
    if(op & 1){ // odd
      pos = (t.F+t.S)/2;
    }else{ // even
      pos = (t.F+t.S-1)/2;
    }
    ans[pos] = step;
    pi newSeg;
    newSeg = MP(t.F, pos-1);
    if(newSeg.F <= newSeg.S)q.push(newSeg);
    newSeg = MP(pos+1, t.S);
    if(newSeg.F <= newSeg.S)q.push(newSeg);
    step++;
  }
  for(int i=1;i<=n;i++)
    cout<<ans[i]<<" ";
  cout<<endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t; cin >> t;
  while(t--) solve();
  //
  //solve();
  return 0;
}
