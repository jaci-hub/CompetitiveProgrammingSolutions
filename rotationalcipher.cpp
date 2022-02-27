//https://www.facebookrecruiting.com/portal/coding_practice_question/?problem_id=238827593802550&c=4813009892153577&ppid=5892836577408537&practice_plan=1

string rotationalCipher(string input, int rotationFactor) {
  for(int i=0; i<input.size(); i++){
    //upper-case letters
    if(isupper(input[i])){
      int mycharint;
      mycharint=int(input[i]);
      rotationFactor=rotationFactor%26;
      mycharint+=rotationFactor;
      if(mycharint>90){
        mycharint=mycharint%91;
        for(int i=0; i<=25; i++){
          if(mycharint==i){
            mycharint+=65;
            break;
          }
        }
      }
      input[i]=char(mycharint);
    }
    //lower-case letters
    if(islower(input[i])){
      int mycharint;
      mycharint=int(input[i]);
      rotationFactor=rotationFactor%26;
      mycharint+=rotationFactor;
      if(mycharint>122){
        mycharint=mycharint%123;
        for(int i=0; i<97; i++){
          if(mycharint==i){
            mycharint+=97;
            break;
          }
        }
      }
      input[i]=char(mycharint);
    }
    //digits
    if(isdigit(input[i])){
      int myint;
      myint=input[i]-'0';
      rotationFactor=rotationFactor%9;
      myint=(myint+rotationFactor)%10;
      input[i]=myint+'0';
    }
  }
  return input;
}