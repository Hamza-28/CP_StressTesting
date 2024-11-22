#include <bits/stdc++.h>
using namespace std;

void GenerateTestCase() {
  ofstream cout;
  
  cout.open("testCase.txt");

  mt19937 mt(time(0));      // generates unsigned random number between 0 to 2^32 - 1
  // mt19937_64 mt(time(0));   // geerates unsigned random number between 0 to 2^64 - 1
  // mt19937 mt(chrono::steady_clock::now().time_since_epoch().count());

  int MOD = 17;
  int n = 3;
  cout << n << '\n';

  for (int i = 0; i < n; i++) {
    cout << mt() % MOD << ' ';
  }
}
