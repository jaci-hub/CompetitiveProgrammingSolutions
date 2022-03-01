//https://www.facebookrecruiting.com/portal/coding_practice_question/?problem_id=836241573518034&c=4813009892153577&ppid=5892836577408537&practice_plan=0

int getTotalTime(vector <int> arr) {
  sort(arr.begin(), arr.end());
  int penalty=0, sum=arr[arr.size()-1];
  for(int i=arr.size()-2; i>=0; i--){
    sum+=arr[i];
    penalty+=sum;
  }
  return penalty;
}