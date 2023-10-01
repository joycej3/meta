// You are spectating a programming contest with NN competitors, each trying to independently solve the same set of programming problems. Each problem has a point value, which is either 1 or 2.
// On the scoreboard, you observe that the iith competitor has attained a score of SiSi​, which is a positive integer equal to the sum of the point values of all the problems they have solved.
// The scoreboard does not display the number of problems in the contest, nor their point values. Using the information available, you would like to determine the minimum possible number of problems in the contest.

int getMinProblemCount(int N, vector<int> S) {
  // Write your code here
  if(N==0){
    return 0;
  }
  int max = 0;
  bool has_odd = 0;
  for(int i = 0 ; i < N; i++){
    if( S[i] > max ){
      max = S[i];
    }
    if(has_odd == 0 && S[i] % 2 == 1 ){
      has_odd = 1;
    }
  }
  return (max/2) + has_odd;
}
