//https://www.facebookrecruiting.com/portal/coding_practice_question/?problem_id=547645422524434&c=4813009892153577&ppid=5892836577408537&practice_plan=0

vector <int> findMedian(vector <int> arr) {
  vector <int> res, myv;
  for(int i=0; i<arr.size(); i++){
    myv.push_back(arr[i]);
    sort(myv.begin(), myv.end());
    if(myv.size()%2!=0)
      res.push_back(myv[myv.size()/2]);
    else{
      int r=myv[myv.size()/2], l=myv[(myv.size()/2)-1];
      res.push_back((r+l)/2);
    }
      
  }
  return res;
}