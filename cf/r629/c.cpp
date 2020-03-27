#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define INF 0x3f3f3f3f

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pi> vpi;

void solve(){
	int n; cin >> n;
	string str; cin >> str;
	string a = "", b = "";	
	bool setter = 0;
	for(int i = 0; i < (int) str.size(); i++){
		int op = (int)str[i] - (int)'0';
		int numA, numB;
		if(op == 0){
			numA = 0;
			numB = 0;			
		}else{
			if(setter){ // is there is one bigger than the other
				numA = 0;
				numB = op;
			}else{
				if(op == 1){
					setter = true;
					numA = 1;
					numB = 0;				
				}else{ // 2					
					numA = 1;
					numB = 1;
				}
			}
		}
		a += (char)(numA + (int)'0');
		b += (char)(numB + (int)'0');	
	}
	cout << a << endl;
	cout << b << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();

    //solve();
    return 0;
}
