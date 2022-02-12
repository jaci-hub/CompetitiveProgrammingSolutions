//https://www.hackerrank.com/challenges/ctci-ransom-note/problem?h_l=interview&isFullScreen=false&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=dictionaries-hashmaps
void checkMagazine(vector<string> magazine, vector<string> note) {
  sort(magazine.begin(), magazine.end());
  sort(note.begin(), note.end());
  int count=0, j=0;
  for(int i=0; i<note.size(); i++){
    while(note[i]>magazine[j]){
      if(j<magazine.size())
        j++;
      if(j==magazine.size()) 
        break;
    }
    if(note[i]==magazine[j]){
      count++;
    }
    if(j>=magazine.size()-1)
      break;
    j++;
  }
  if(count==note.size())
    cout<<"Yes\n";
  else cout<<"No\n";
}