//https://www.facebookrecruiting.com/portal/coding_practice_question/?problem_id=211548593612944&c=4813009892153577&ppid=5892836577408537&practice_plan=0

bool isBalanced(string s) {
  stack<char>mystack;
  for(int i=0; i<s.size(); i++){
    if(s[i]=='(')
      mystack.push(s[i]);
    else if(s[i]==')' && mystack.top()=='(')
      mystack.pop();
    
    if(s[i]=='[')
      mystack.push(s[i]);
    else if(s[i]==']' && mystack.top()=='[')
      mystack.pop();
    
    if(s[i]=='{')
      mystack.push(s[i]);
    else if(s[i]=='}' && mystack.top()=='{')
      mystack.pop();
  }
  if(mystack.size()==0)
    return true;
  else return false;
}