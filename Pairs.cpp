

#include<iostream>

using namespace std;



int main(){
    //pairs 
    pair<string,int>p = {"Python",2};
    cout << p.first;
    cout << p.second;
    vector<pair<int,int>>A;
    //n events for every event it has start 
    //and end time
    int n;
    cin >> n;
    vector<pair<int,int>>Events(n);
    for(int i = 0 ; i < n ; i++){
        int start , end;
        cin >> start >> end;
        Events[i] = {start,end};
    }
    for(int i = 0 ; i > n ;i++){
        cout << A[i].first <<" "<<A[i].second << endl;
    }





}
