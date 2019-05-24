//Equal Stacks -HackerRank 
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m, k;
  cin >> n >> m >> k;
  int a[n];
  int b[m];
  int c[k];
  int sum1 = 0, sum2 = 0, sum3 = 0, d1 = 0, d2 = 0, d3 = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum1 += a[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
    sum2 += b[i];
  }
  for (int i = 0; i < k; i++) {
    cin >> c[i];
    sum3 += c[i];
  }
  int h;
  while (1) {
    if (d1 == n || d2 == m || d3 == k) {
      h = 0;
      break;
    }
    if (sum1 == sum2 && sum2 == sum3) {
      h = sum1;
      break;
    }
    if (sum1 >= sum2 && sum1 >= sum3) {
      sum1 -= a[d1];
      d1++;
    } else if (sum2 >= sum1 && sum2 >= sum3) {
      sum2 -= b[d2];
      d2++;
    } else if (sum3 >= sum2 && sum3 >= sum1) {
      sum3 -= c[d3];
      d3++;
    }
  }
  cout << h << endl;
  return 0;
}
