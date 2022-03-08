//https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup

int jumpingOnClouds(vector<int> c) {
  int count=0, i=0;
  while(i<c.size()-1){
    if(c[i+2]==0){
      count++;
      i+=2;
    }
    else if(c[i+1]==0){
      count++;
      i++;
    }
  }
return count;
}