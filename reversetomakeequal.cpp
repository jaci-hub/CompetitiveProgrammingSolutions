//https://www.facebookrecruiting.com/portal/coding_practice_question/?problem_id=2869293499822992&c=4813009892153577&ppid=5892836577408537&practice_plan=0

bool areTheyEqual(vector<int>& array_a, vector<int>& array_b){
  sort(array_a.begin(), array_a.end());
  sort(array_b.begin(), array_b.end());
  if(array_a==array_b)
    return true;
  else return false;
}