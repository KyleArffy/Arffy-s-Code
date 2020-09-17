#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "kyle is here " << __LINE__ << endl;
  freopen("photo.in","r",stdin);
  freopen("photo.out","w",stdout);
  int N;
  cout << "kyle is here" << __LINE__ << endl;
  cin >> N;
  int a [N], b [N];
  bool r [N];
  for (int i = 0; i < N - 1; i++) {
    cin >> a[i];
  }
  cout << "kyle is here" << __LINE__ << endl;
  for (int i = 1; i <= N; i++) {
    b[0] = i;
      cout << "kyle is here " << i << "," << __LINE__ << endl;
    for(int j = 1; j < N; j++) {
      b[j] = a[j] - b[j-1];
      if (r[b[j]]) {
        break;
      } else {
        r[b[j]] = true;
      }
    }
  }
    cout << "kyle is here" << __LINE__ << endl;
  return 0;
}
