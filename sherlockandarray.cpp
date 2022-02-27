//https://www.hackerrank.com/challenges/sherlock-and-array/problem?isFullScreen=true

string balancedSums(vector<int> arr) {
  int suml=0, sumr=0;
  for(int j=0; j<arr.size(); j++)
    sumr+=arr[j];
  for(int i=0; i<arr.size(); i++){
    if(i>0)
      suml+=arr[i-1];
    sumr-=arr[i];
    if(suml==sumr)
      return "YES";
  }
  return "NO";
}