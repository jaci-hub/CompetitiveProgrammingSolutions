//https://www.hackerrank.com/challenges/ctci-fibonacci-numbers/problem?h_l=interview&isFullScreen=true&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=recursion-backtracking

int fibonacci(int n) {
  if(n==0)
    return 0;
  else if(n==1)
    return 1;
  else return fibonacci(n-1)+fibonacci(n-2);
}