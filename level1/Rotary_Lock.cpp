// You're trying to open a lock. The lock comes with a wheel which has the integers from 11 to NN arranged in a circle in order around it (with integers 11 and NN adjacent to one another). The wheel is initially pointing at 11.
// For example, the following depicts the lock for N=10N=10 (as is presented in the second sample case).
// It takes 11 second to rotate the wheel by 11 unit to an adjacent integer in either direction, and it takes no time to select an integer once the wheel is pointing at it.
// The lock will open if you enter a certain code. The code consists of a sequence of MM integers, the iith of which is CiCi​. Determine the minimum number of seconds required to select all MM of the code's integers in order.
// Please take care to write a solution which runs within the time limit.

#include <bits/stdc++.h>
using namespace std;
// Write any include statements here

long long getMinCodeEntryTime(int N, int M, vector<int> C) {
  // Write your code here
  long long time = 0;
  int prev = 1;
  
  for(int i = 0 ; i < M ; i++){
    int clockwise = (C[i] - prev + N) % N;
    int counterclockwise = N - clockwise;
    int min_distance = min(clockwise, counterclockwise);
    
    time += min_distance;
    prev = C[i];
  }
  
  return time;
}
