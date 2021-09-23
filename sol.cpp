#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	int n;
	cin >> n;
	if(n==1) {
		cout << "3\n";
		return;
	}
	cout << 3;
	for(int i=1; i<n-1; ++i)
		cout << 0;
	cout << "3\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
