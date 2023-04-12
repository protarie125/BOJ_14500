#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	auto f = vvi(n, vi(m));
	for (auto i = 0; i < n; ++i) {
		for (auto j = 0; j < m; ++j) {
			cin >> f[i][j];
		}
	}

	auto ans = int{ 0 };
	for (auto i = 0; i < n; ++i) {
		for (auto j = 0; j < m; ++j) {
			// O
			// **
			// **
			if (i + 1 < n && j + 1 < m) {
				const auto& temp = f[i][j] + f[i][j + 1] + f[i + 1][j] + f[i + 1][j + 1];
				if (ans < temp) {
					ans = temp;
				}
			}
			// I
			// *
			// *
			// *
			// *
			if (i + 3 < n) {
				const auto& temp = f[i][j] + f[i + 1][j] + f[i + 2][j] + f[i + 3][j];
				if (ans < temp) {
					ans = temp;
				}
			}
			// ****
			if (j + 3 < m) {
				const auto& temp = f[i][j] + f[i][j + 1] + f[i][j + 2] + f[i][j + 3];
				if (ans < temp) {
					ans = temp;
				}
			}
			// T
			// ***
			// .*.
			if (i + 1 < n && j + 2 < m) {
				const auto& temp = f[i][j] + f[i][j + 1] + f[i][j + 2] + f[i + 1][j + 1];
				if (ans < temp) {
					ans = temp;
				}
			}
			// x*.
			// ***
			if (i + 1 < n && j + 2 < m) {
				const auto& temp = f[i][j + 1] + f[i + 1][j] + f[i + 1][j + 1] + f[i + 1][j + 2];
				if (ans < temp) {
					ans = temp;
				}
			}
			// *.
			// **
			// *.
			if (i + 2 < n && j + 1 < m) {
				const auto& temp = f[i][j] + f[i + 1][j] + f[i + 1][j + 1] + f[i + 2][j];
				if (ans < temp) {
					ans = temp;
				}
			}
			// x*
			// **
			// .*
			if (i + 2 < n && j + 1 < m) {
				const auto& temp = f[i][j + 1] + f[i + 1][j] + f[i + 1][j + 1] + f[i + 2][j + 1];
				if (ans < temp) {
					ans = temp;
				}
			}
			// J, L
			// ***
			// ..*
			if (i + 1 < n && j + 2 < m) {
				const auto& temp = f[i][j] + f[i][j + 1] + f[i][j + 2] + f[i + 1][j + 2];
				if (ans < temp) {
					ans = temp;
				}
			}
			// ***
			// *..
			if (i + 1 < n && j + 2 < m) {
				const auto& temp = f[i][j] + f[i][j + 1] + f[i][j + 2] + f[i + 1][j];
				if (ans < temp) {
					ans = temp;
				}
			}
			// *..
			// ***
			if (i + 1 < n && j + 2 < m) {
				const auto& temp = f[i][j] + f[i + 1][j] + f[i + 1][j + 1] + f[i + 1][j + 2];
				if (ans < temp) {
					ans = temp;
				}
			}
			// x.*
			// ***
			if (i + 1 < n && j + 2 < m) {
				const auto& temp = f[i][j + 2] + f[i + 1][j] + f[i + 1][j + 1] + f[i + 1][j + 2];
				if (ans < temp) {
					ans = temp;
				}
			}
			// **
			// *.
			// *.
			if (i + 2 < n && j + 1 < m) {
				const auto& temp = f[i][j] + f[i][j + 1] + f[i + 1][j] + f[i + 2][j];
				if (ans < temp) {
					ans = temp;
				}
			}
			// **
			// .*
			// .*
			if (i + 2 < n && j + 1 < m) {
				const auto& temp = f[i][j] + f[i][j + 1] + f[i + 1][j + 1] + f[i + 2][j + 1];
				if (ans < temp) {
					ans = temp;
				}
			}
			// *.
			// *.
			// **
			if (i + 2 < n && j + 1 < m) {
				const auto& temp = f[i][j] + f[i + 1][j] + f[i + 2][j] + f[i + 2][j + 1];
				if (ans < temp) {
					ans = temp;
				}
			}
			// x*
			// .*
			// **
			if (i + 2 < n && j + 1 < m) {
				const auto& temp = f[i][j + 1] + f[i + 1][j + 1] + f[i + 2][j] + f[i + 2][j + 1];
				if (ans < temp) {
					ans = temp;
				}
			}
			// S, Z
			// **.
			// .**
			if (i + 1 < n && j + 2 < m) {
				const auto& temp = f[i][j] + f[i][j + 1] + f[i + 1][j + 1] + f[i + 1][j + 2];
				if (ans < temp) {
					ans = temp;
				}
			}
			// x**
			// **.
			if (i + 1 < n && j + 2 < m) {
				const auto& temp = f[i][j + 1] + f[i][j + 2] + f[i + 1][j] + f[i + 1][j + 1];
				if (ans < temp) {
					ans = temp;
				}
			}
			// *.
			// **
			// .*
			if (i + 2 < n && j + 1 < m) {
				const auto& temp = f[i][j] + f[i + 1][j] + f[i + 1][j + 1] + f[i + 2][j + 1];
				if (ans < temp) {
					ans = temp;
				}
			}
			// x*
			// **
			// *.
			if (i + 2 < n && j + 1 < m) {
				const auto& temp = f[i][j + 1] + f[i + 1][j] + f[i + 1][j + 1] + f[i + 2][j];
				if (ans < temp) {
					ans = temp;
				}
			}
		}
	}

	cout << ans;

	return 0;
}