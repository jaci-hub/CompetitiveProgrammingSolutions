#include<bits\stdc++.h>

using namespace std;

int countduplicates(vector<int> numbers){
    int result=0, k=-1;
    for(int i=0; i<numbers.size(); i++){
        if(count(numbers.begin(), numbers.end(), numbers[i])>1){
            result++;
            int temp=numbers[i];
            for(int j=0; j<numbers.size(); j++){
                if(temp==numbers[j]){
                    numbers[j]=k;
                    k--;
                }
            }
        }
    }
    return result;
}

int main(){
    vector<int>testv={0,1,2,3,4,5,5,7,7,0};
    cout<<countduplicates(testv)<<"\n";
}