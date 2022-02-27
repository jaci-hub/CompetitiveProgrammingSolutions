//https://www.hackerrank.com/challenges/maximizing-xor/problem?isFullScreen=true

int maximizingXor(int l, int r) {
  int mymax=0;
  for(int i=l; i<=r; i++){
    for(int j=l; j<=r; j++){
      mymax=(j^i)>=mymax?j^i:mymax;
    }
  }
  return mymax;
}