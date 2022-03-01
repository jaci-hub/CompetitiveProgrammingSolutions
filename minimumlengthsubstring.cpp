//https://www.facebookrecruiting.com/portal/coding_practice_question/?problem_id=2237975393164055&c=4813009892153577&ppid=5892836577408537&practice_plan=0

int minLengthSubstring(string s, string t) {
  int minim=1000000, maxim=0;
  for(int i=0; i<t.size(); i++){
    if(count(t.begin(), t.end(), t[i])>count(s.begin(), s.end(), t[i]))
      return -1;
  }
  for(int i=0; i<t.size(); i++){
    for(int j=0; j<s.size(); j++){
      if(t[i]==s[j]){
        minim=minim<j?minim:j;
        maxim=maxim>j?maxim:j;
      }
    }
  }
  return maxim-minim+1;
}