#include <iostream>
#include <string>

using namespace std;

int main() {
  freopen("word.in","r",stdin);
  freopen("word.out","w",stdout);
  int N, K;
  cin >> N>> K;
  int cnt = 0;
  string result;
  cin >> result;
  cnt = result.length();
  for (int i = 1; i < N; i++) {
    string s;
    cin >> s;
    int len = s.length();
    if(len+cnt <= K){
      result+=" " + s;
      cnt +=len;
    }
    else{
      result+="\n" + s;
      cnt=len;
    }
  }
  cout << result;
  return 0;
}
