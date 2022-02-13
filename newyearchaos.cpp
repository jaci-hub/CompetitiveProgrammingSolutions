//https://www.hackerrank.com/challenges/new-year-chaos/problem?h_l=interview&isFullScreen=true&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays

void minimumBribes(vector<int> q) {
  vector<int> countbribes(q.size(), 0);
  bool toochaotic=false;
  int count=0, i=0;
  while(i<q.size()-1){
    if(q[i]-q[i+1]>=1){
      countbribes[q[i]-1]++;
      if(countbribes[q[i]-1]>2){
        toochaotic=true;
        break;
      }
      swap(q[i], q[i+1]);
      count++;
      if(i>0)
        i--;
    }
    else i++;
  }
  if(toochaotic)
    cout<<"Too chaotic\n";
  else cout<<count<<"\n";
}