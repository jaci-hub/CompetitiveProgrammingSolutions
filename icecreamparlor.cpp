//https://www.hackerrank.com/challenges/icecream-parlor/problem?isFullScreen=true

vector<int> icecreamParlor(int m, vector<int> arr) {
  vector<int> result;
  bool feito=false;
  for(int i=0; i<arr.size(); i++){
    for(int j=i+1; j<=arr.size()-1; j++){
      if(arr[i]+arr[j]==m){
        result.push_back(i+1);
        result.push_back(j+1);
        feito=true;
        break;
      }
    }
    if(feito)
      break;
  }
  sort(result.begin(), result.end());
  return result;
}