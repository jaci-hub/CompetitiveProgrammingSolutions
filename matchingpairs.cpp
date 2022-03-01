//https://www.facebookrecruiting.com/portal/coding_practice_question/?problem_id=559324704673058&c=4813009892153577&ppid=5892836577408537&practice_plan=0

int matchingPairs(string s, string t) {
  int count=0;
  if(s==t)
    count=s.size()-2;
  else{
    for(int i=0; i<s.size(); i++){
      if(s[i]!=t[i]){
        for(int j=0; j<s.size(); j++){
          if(s[j]==t[i])
            swap(s[i], s[j]);
        }
      }
    }
    for(int i=0; i<s.size(); i++){
      if(s[i]==t[i])
        count++;
    }
  }
  return count;
}