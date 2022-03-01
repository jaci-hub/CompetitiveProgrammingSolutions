//https://www.facebookrecruiting.com/portal/coding_practice_question/?problem_id=510655302929581&c=4813009892153577&ppid=5892836577408537&practice_plan=0

vector <int> findMaxProduct(vector <int> arr) {
  vector <int> res, temp;
  res.push_back(-1);
  res.push_back(-1);
  temp.push_back(arr[0]);
  temp.push_back(arr[1]);
  for(int i=2; i<arr.size(); i++){
    temp.push_back(arr[i]);
    sort(temp.begin(), temp.end());
    res.push_back(temp[temp.size()-1]*temp[temp.size()-2]*temp[temp.size()-3]);
  }
    
  return res;
}