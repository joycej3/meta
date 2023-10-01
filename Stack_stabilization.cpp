#include <bits/stdc++.h>
using namespace std;
// Write any include statements here

int getMinimumDeflatedDiscCount(int N, vector<int> R) {
  // Write your code here
  int changes = 0;
  for(int i = N - 1; i > 0; i --){
    if(R[i] <= R[i - 1] ){
      changes++;
      R[i - 1] = R[i] - 1;
    }
  }
  if(R[0] <= 0 ){
    return -1;
  }
  return changes;
}
