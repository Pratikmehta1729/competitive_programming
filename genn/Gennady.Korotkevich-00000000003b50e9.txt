/**
 *    author:  tourist
 *    created: 08.08.2020 17:40:18       
**/
#include <bits/stdc++.h>

using namespace std;

bool IsWinningForA(const vector<int>& a) {
  int n = (int) a.size();
  for (int i = 0; i < n - 1; i++) {
    if (a[i] != -1 && a[i + 1] != -1 && abs(a[i] - a[i + 1]) == 1) {
      return true;
    }
  }
  vector<bool> free_num(n, true);
  for (int i = 0; i < n; i++) {
    if (a[i] != -1) {
      free_num[a[i]] = false;
    }
  }
  for (int i = 0; i < n; i++) {
    if (a[i] == -1) {
      for (int j = 0; j < n; j++) {
        if (free_num[j]) {
          if (i > 0 && a[i - 1] != -1 && abs(j - a[i - 1]) == 1) {
            return true;
          }
          if (i < n - 1 && a[i + 1] != -1 && abs(j - a[i + 1]) == 1) {
            return true;
          }
        }
      }
    }
  }
  vector<int> x;
  {
    int t = 0;
    for (int i = 0; i <= n; i++) {
      if (i == n || a[i] != -1) {
        if (t != 0) {
          x.push_back(t);
        }
        t = 0;
      } else {
        t += 1;
      }
    }
  }
  vector<int> y;
  {
    int t = 0;
    for (int i = 0; i <= n; i++) {
      if (i == n || !free_num[i]) {
        if (t != 0) {
          y.push_back(t);
        }
        t = 0;
      } else {
        t += 1;
      }
    }
  }
  sort(x.begin(), x.end());
  sort(y.begin(), y.end());
  if (x.empty() || x.back() <= 1) {
    return false;
  }
  if (y.empty() || y.back() <= 1) {
    return false;
  }
  if (x.back() >= 3 && y.back() >= 3) {
    return true;
  }
  if (y.back() >= 3) {
    swap(x, y);
  }
  assert(x.back() >= 2);
  assert(y.back() == 2);
  int sum = accumulate(x.begin(), x.end(), 0);
  if (sum % 2 == 0) {
    if (sum == 2 && x[0] == 2 && y[0] == 2) {
      return true;
    }
    return false;
  }
  int x_ones = 0;
  int y_ones = 0;
  for (int v : x) {
    x_ones += (v == 1);
  }
  for (int v : y) {
    y_ones += (v == 1);
  }
  int x_pairs = 0;
  int y_pairs = 0;
  for (int v : x) {
    x_pairs += v / 2;
  }
  for (int v : y) {
    y_pairs += v / 2;
  }
  if (x_ones >= 2 * y_pairs) {
    return false;
  }
  if (y_ones >= 2 * x_pairs) {
    return false;
  }
  return true;
/*  int ones = x_ones + y_ones;
  for (int mv = 0; mv < sum; mv++) {
    if (mv % 2 == 0) {
      ones -= 2;
    } else {
      if (ones == 0) {
        return true;
      }
    }
  }
  return false;*/
}

bool IsWinningForB(vector<int> a) {
  int n = (int) a.size();
  for (int i = 0; i < n - 1; i++) {
    if (a[i] != -1 && a[i + 1] != -1 && abs(a[i] - a[i + 1]) == 1) {
      return false;
    }
  }
  vector<bool> free_num(n, true);
  for (int i = 0; i < n; i++) {
    if (a[i] != -1) {
      free_num[a[i]] = false;
    }
  }
  bool any = false;
  for (int i = 0; i < n; i++) {
    if (a[i] == -1) {
      for (int j = 0; j < n; j++) {
        if (free_num[j]) {
          any = true;
          a[i] = j;
          if (!IsWinningForA(a)) {
            return true;
          }
          a[i] = -1;
        }
      }
    }
  }
  if (!any) {
    return true;
  }
  return false;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  for (int qq = 1; qq <= tt; qq++) {
    cout << "Case #" << qq << ": ";
    int n;
    cin >> n;
    vector<int> a(n, -1);
    vector<bool> b(1, true);
    bool last = true;
    int mA = 0, mB = 0;
    for (int i = 0; i < n; i++) {
      int x, y;
      cin >> x >> y;
      --x; --y;
      a[x] = y;
      if (i % 2 == 0) {
        bool cur = IsWinningForB(a);
        if (last && cur) {
          mA += 1;
        }
        last = cur;
      } else {
        bool cur = IsWinningForA(a);
        if (last && cur) {
          mB += 1;
        }
        last = cur;
      }
    }
    cout << mA << " " << mB << '\n';
  }
  return 0;
}
