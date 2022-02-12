#include<bits\stdc++.h>

using namespace std;

int mincost(vector<int> numbers){
    int result=0, ans=0;
    while(numbers.size()>1){
        sort(numbers.begin(), numbers.end());
        result+=numbers[0]+numbers[1];
        numbers.erase(numbers.begin());
        numbers.erase(numbers.begin());
        numbers.push_back(result);
        ans+=result;
        result=0;
    }
    cout<<"\n";
    return ans;
}

int main(){
    vector<int> myv={1,2,3,4};
    cout<<mincost(myv);

    return 0;
}