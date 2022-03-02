//https://www.facebookrecruiting.com/portal/coding_practice_question/?problem_id=226994905008716&c=4813009892153577&ppid=5892836577408537&practice_plan=0

bool balancedSplitExists(vector<int>& arr){
  sort(arr.begin(), arr.end());
  int s1=arr[0], s2=arr[arr.size()-1], p1=0, p2=arr.size()-1;
  vector<int>a, b;
  a.push_back(arr[0]), b.push_back(arr[arr.size()-1]);
  while(p1!=p2){
    if(s1<=s2){
      p1++;
      if(p1<p2){
        s1+=arr[p1];
        a.push_back(arr[p1]);
      }
    }
    else if(s2<s1){
      p2--;
      if(p2>p1){
        s2+=arr[p2];
        b.push_back(arr[p2]);
      }
    }
  }
  if(s1!=s2)
    return false;
  else if(s1==s2){
    for(auto x:a){
      for(auto y:b){
        if(x>=y)
          return false;
      }
    }
  }
  return true;
}