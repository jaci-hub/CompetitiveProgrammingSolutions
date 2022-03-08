//https://www.hackerrank.com/challenges/repeated-string/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup

long repeatedString(string s, long n) {
  return (n/s.size())*count(s.begin(), s.end(), 'a')+count(s.begin(), s.begin()+(n%s.size()), 'a');
}