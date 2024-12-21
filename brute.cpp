#include <bits/stdc++.h> 
using namespace std;

void solve() {
	int w;
	cin >> w;
	for (int i = 1; i < w; ++i) {
		int j = w - i;
		if (i % 2 == 0 and j % 2 == 0) {
			cout << "Yes\n";
			return;
		}
	}
	cout << "No\n";
}

int main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}