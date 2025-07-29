#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
  
  int arr[] = {10, 20, 10, 30, 20, 10, 40};
   int n = sizeof(arr) / sizeof(arr[0]);

   for(auto i:arr){
    cout << i << endl ;
   } 
   
   
   unordered_map< int , int >mak;
    
    for(int i=0; i<n ; i++){
        mak[arr[i]]++;
        
    }
for(auto it : mak){
  
    cout << it.first << "->" << it.second << endl;
}

}