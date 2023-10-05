// A family of frogs in a pond are traveling towards dry land to hibernate. They hope to do so by hopping across a trail of NN lily pads, numbered from 11 to NN in order.
// There are FF frogs, numbered from 11 to FF. Frog ii is currently perched atop lily pad PiPi​. No two frogs are currently on the same lily pad. Lily pad NN is right next to the shore, and none of the frogs are initially on lily pad NN.
// Each second, one frog may hop along the trail towards lily pad NN. When a frog hops, it moves to the nearest lily pad after its current lily pad which is not currently occupied by another frog (hopping over any other frogs on intermediate lily pads along the way). If this causes it to reach lily pad NN, it will immediately exit onto the shore. Multiple frogs may not simultaneously hop during the same second.
// Assuming the frogs work together optimally when deciding which frog should hop during each second, determine the minimum number of seconds required for all FF of them to reach the shore.
// Constraints
// 2≤N≤10122≤N≤1012
// 1≤F≤500,0001≤F≤500,000
// 1≤Pi≤N−11≤Pi​≤N−1

#include <bits/stdc++.h>
using namespace std;

long long getSecondsRequired(long long N, int F, vector<long long> P) { 
  int size = P.size();
  long long min = N;
  for(int i = 0 ; i < size; i++){
    if(P[i] < min){
      min = P[i];
    }
  }
  return N - min;
}
