//https://www.facebookrecruiting.com/portal/coding_practice_question/?problem_id=226517205173943&c=4813009892153577&ppid=5892836577408537&practice_plan=0

vector <int> CountSubarrays(vector <int> arr) {
  int count=0, pos=0;
  vector <int> res;
  while(pos<arr.size()){
    //check right
    for(int i=pos; i<arr.size(); i++){
      if(arr[i]<=arr[pos])
        count++;
      else break;
    }
    //check left
    for(int i=pos; i>=0; i--){
      if(arr[i]<=arr[pos])
        count++;
      else break;
    }
    //store count in res
    res.push_back(count-1);
    //reset variables
    count=0, pos++;
  }
  return res;
}