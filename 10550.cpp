#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"

ll s, a, b, c, ans;

int main() {
	while(cin >> s >> a >> b >> c) {
		ans = 0;
		if(a==b && b==c) return 0;

		ans+=(s+40-a)%40;
		ans+=(b+40-a)%40;
		ans+=(b+40-c)%40;

		cout << ans*9 + 1080 << endl;
	}
}