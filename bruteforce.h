#include <bits/stdc++.h>
using namespace std;

void GenerateBruteForceSolution() {
  ofstream cout;
  ifstream cin;
  
  cin.open("testCase.txt");
  cout.open("bruteforceSolution.txt");


  // solution code
  const int N = 1e5 + 3;
  const int mod = 17;
  int pow2[N], arr[N];

  pow2[0] = 1;
  for (int i = 1; i < N; ++i) {
    pow2[i] = 1ll * pow2[i - 1] * 2 % mod;
  }

  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  sort(arr, arr + n, greater<int>());

  int ans = 0;
  for (int i = 0; i < n; ++i) {
    int x = n - i - i - 1;
    ans += ((1LL * arr[i] * x) % mod + mod)% mod;
    ans %= mod;
  }
  if (n > 1) {
    ans = 1LL * ans * pow2[n - 2] % mod;
  }

  cout << ans << '\n';
}