#include<bits\stdc++.h>

using namespace std;

void printlist(list<int>g){
    list<int>::iterator it;
    for(it=g.begin(); it!=g.end(); ++it)
        cout<<*it<<" ";
    cout<<"\n";
}

int main(){
    list<int>myl1,myl2;
    for(int i=1; i<=10; i++){
        myl1.push_back(i);
        myl2.push_back(i*2);
    }

    cout<<"List1: \n";
    printlist(myl1);
    cout<<"\n";
    cout<<"List2: \n";
    printlist(myl2);

    list<int>::iterator it1, it2;
    it1=myl1.begin();
    it2=myl1.begin();
    advance(it1, 2);
    advance(it2, 8);
    myl1.erase(it1, it2);

    cout<<"After erase, List1: \n";
    printlist(myl1);

    list<int>::iterator j, n=myl1.begin();
    advance(n, 2);
    for(list<int>::iterator j=myl2.begin(); j!=myl2.end(); j++){
        myl1.insert(n, *j);
    }
    myl1.push_back(11);
    cout<<"After Insert List2, List1: \n";
    printlist(myl1);

    int mid, counter=1;
    for(list<int>::iterator j=myl1.begin(); j!=myl1.end(); j++){
        if(counter==myl1.size()/2){
            mid=*j;
        }
        counter++;
    }
    cout<<"\n";
    cout<<"Middle element: "<<mid; //issue here!!!

    return 0;
}