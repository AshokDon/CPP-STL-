

#include<iostream>
#include<map>
using namespace std;



int main(){
    //hash map --> frqs
    string str = "abcabcbcda";
    map<char,int>mpp;
    for(int i = 0 ; i < str.size() ; i++){
       mpp[str[i]]++;
    }
    
    //{{'a' : 3} , {'b' : 3} , {'c' : 3}, 
    // {'d':1}}
    //map is in sorted order based on key

    for(auto i : mpp){
        cout << i.first <<" "<<i.second << endl;
    }

    //O(log2(n))
    //2 map -> unordered_map
    unordered_map<int,int>ump;

    multimap<int,int>mmp;

    if(mpp.find('a')!=mpp.end())

}
