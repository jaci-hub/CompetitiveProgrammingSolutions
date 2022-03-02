//https://www.facebookrecruiting.com/portal/coding_practice_question/?problem_id=192049171861831&c=4813009892153577&ppid=5892836577408537&practice_plan=0

vector <int> getMilestoneDays(vector <int> revenues, vector<int> milestones) {
  vector <int> res;
  int count=0, j=0;
  for(int i=0; i<milestones.size(); i++){
    while(count<milestones[i]){
      count+=revenues[j];
      j++;
    }
    res.push_back(j);
    j=0, count=0;
  }
  return res;
}