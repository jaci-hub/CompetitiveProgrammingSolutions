//https://www.hackerrank.com/challenges/special-palindrome-again/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=strings

// Complete the substrCount function below.
long substrCount(int n, string s) {
long ans=n;
int count=0, j=0;
char mychar=s[0], firstLeftChar;
for(int i=0; i<n; i++){
  //check special palindromes
  while(j<n && s[j]==mychar)
    count++, j++;
  mychar=s[j];
  for(int k=count-1; k>0; k--)
    ans+=k;
  i=j;
  //check left and right aka condition 2
  int posl=i-1, posr=i+1;
  firstLeftChar=s[posl];
  while(posl>=0 && posr<n && s[i]!=firstLeftChar){
    if(s[posl]==s[posr] && firstLeftChar==s[posl])
      ans++, posl--, posr++;
    else break;
  }
  i--, count=0;
}
return ans;
}