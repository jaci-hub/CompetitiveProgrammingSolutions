//https://www.facebookrecruiting.com/portal/coding_practice_question/?problem_id=513590792640579&c=4813009892153577&ppid=5892836577408537&practice_plan=0

int maxCandies(vector <int> arr, int k) {
  int count=0;
  while(k>0){
    sort(arr.begin(), arr.end());
    count+=arr[arr.size()-1];
    arr[arr.size()-1]=arr[arr.size()-1]/2;
    k--;
  }
  return count;
}