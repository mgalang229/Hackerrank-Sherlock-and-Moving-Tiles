#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void decode() {
	ll l, s1, s2, Q;
	cin >> l >> s1 >> s2 >> Q;
	while(Q--) {
		double q;
		cin >> q;
		q = sqrt(q);
		cout << fixed << setprecision(4) << (sqrt(2 * (l - q) * (l - q))) / abs(s1-s2);
		cout << "\n"; 
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
