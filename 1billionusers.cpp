//https://www.facebookrecruiting.com/portal/coding_practice_question/?problem_id=951929261870357&c=4813009892153577&ppid=5892836577408537&practice_plan=0

int getBillionUsersDay(vector <float> growthRates) {
  return (9*log10(10))/log10(growthRates[growthRates.size()-1])+1;
}