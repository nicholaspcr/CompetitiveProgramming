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
 
int goods[] = {1, 2, 3, 3, 4, 10};
int bads[] = {1, 2, 2, 2, 3, 5, 11};
 
int main(){_
 
	int n, good, bad, a, j = 1;
 
	cin >> n;
	while(n--){
		good = 0; bad = 0;
		fori(i, 6){
			cin >> a;
			good += goods[i] * a;
		}
		fori(i, 7){
			cin >> a;
			bad += bads[i]*a;
		}
 
		cout << "Battle " << j << ": ";
		if(good == bad)
			cout << "No victor on this battle field" << endl;
		else if(good > bad)
			cout << "Good triumphs over Evil" << endl;
		else 
			cout << "Evil eradicates all trace of Good" << endl;
		j++;
	}
	
	return 0;
}
