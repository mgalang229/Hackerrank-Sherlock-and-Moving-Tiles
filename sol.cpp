#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void decode() {
	ll z, s1, s2, q;
	cin >> z >> s1 >> s2 >> q;
	if(s1 < s2) {
		swap(s1, s2);
	}
	while(q--) {
		ll ki;
		cin >> ki;
		double p = sqrt(ki);
		cout << fixed << setprecision(4) << ((double) z - p) * sqrt(2) / (double) (s1 - s2);
		cout << "\n";
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
