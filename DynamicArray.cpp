

#include<iostream>

using namespace std;

vector<string> Fun(){

    vector<int>ans;

    return ans;
}

int main(){
   //STL 
   int Arr[10];
   vector<int>A;//[]
   A.push_back(10); //[10]
   A.push_back(2); //[10,2]
   A.push_back(20); //[10,2,15,20]
   //Dynamic array 
   //we can based on address 
   A.insert(A.begin()+1,15);
   //arr --> oth index
   vector<string>words;
   words.push_back("CPP");
   words.push_back("Python");
   //["CPP" , "Python"]
//    A.pop_back(); // it always remove at last
  // A.erase(A.begin()+1);

   A.end(); // -> address of last next 

   sort(A.begin(),A.end());
   //A = [4,1,3,17,9,100,32]

   //A = [4,1,3,9,17,100,32]

   A.rbegin();
   A.rend();
   //sort(A.rbegin(),A.rend()); // 
   //reverse(A.begin(),A.end());

   binary_search(A.begin(),A.end(),17);

   //true or false 

   for(int i = 0 ; i < A.size() ; i++){
    cout << A[i];
   }


   for(auto i : A){
    cout << i << endl;
   }

   //1D array --> int A[10];

   //1D vector -> vector<int>A;
   vector<int>B(10,100);
   //[0,0 , 0 , 0 , 0 ...]
   B.push_back(100);
   //100 0 0 0 0 0 0 (100, 9-> 0)
   //0 0 0 0 0 0 0 100 (9->0 , 100)
   //0 0 0 0 0 0 0 0 . 100
   //B[0] = 100;


   

  



}
