//https://www.hackerrank.com/challenges/minimum-swaps-2/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays

int minimumSwaps(vector<int> arr) {
  int count=0;
  vector<int>::iterator myiter;
  for(int i=0; i<arr.size(); i++){
    if(arr[i]!=i+1){
      myiter=find(arr.begin()+i+1, arr.end(), i+1);
      swap(arr[i], arr[myiter - arr.begin()]);
      count++;
    }
  }
return count;
}