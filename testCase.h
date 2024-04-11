#include <bits/stdc++.h>
using namespace std;

void GenerateTestCase() {
  ofstream cout;
  
  cout.open("testCase.txt");

  srand(time(0));

  int MOD = 17;
  int n = 3;
  cout << n << '\n';

  for (int i = 0; i < n; i++) {
    cout << rand() % MOD << ' ';
  }
}
