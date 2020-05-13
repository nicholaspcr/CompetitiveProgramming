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

int points(pair<int,pi> p){
  return p.F + p.S.F + p.S.S;
}


void solve(){	
  int n,m,x; cin>>n>>m>>x;
  vector<pair<int,vi>> info(n);
  for(int i=0;i<n;++i){
    cin>>info[i].F;
    for(int j=0;j<m;++j){
      int ent;
      cin>>ent;
      info[i].S.PB(ent);
    }
  }
  sort(all(info));
  /*
  for(int i=0;i<n;i++){
    cout<<info[i].F<<" ";
    for(int j=0;j<m;j++)
      cout<<info[i].S[j]<<" ";
    cout<<endl;
  }*/
  int qtd = 0;
  while(qtd <= n){
    vi indexes;
    vi ans(m);
    int currAns = 0;
    for(int i=0; i<n, ans.size()<qtd; i++){
      vi currSkills(m);
      vi tempSkills(m);
      pi best = MP(0,0);
      int bestCost = 0;
      for(int j=0;j<n;j++){
        bool btr = false;
        for(int k=0;k<(int)indexes.size();k++){
          if(indexes[k] == j){ btr = true; break;}
        }
        if(btr) continue;
        int tmp = 0;
        for(int k=0;k<m;k++){
          if(info[j].S[k]+currSkills[k] >= 10) tmp++;
        }
        if(tmp > best.F){
          best = MP(tmp, j);
          bestCost = info[j].F;
          for(int k=0;k<m;k++)
            tempSkills[k] = currSkills[k] + info[j].S[k];
        }
      }
      indexes.PB(best.S);
      for(int k=0;k<m;k++)
        ans[k] += tempSkills[k];

      currAns += bestCost;
    }
    bool t = true;
    for(int i=0;i<m;i++){
      if(ans[i] < 10){
        t = false;
        break;
      }
    }
    if(t){
      cout<<currAns<<endl;
      break;
    }
    qtd++;
  }
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
