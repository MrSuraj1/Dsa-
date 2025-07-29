//  Most Frequent Element in Array
#include<iostream>
#include<unordered_map>

using namespace std;

int main(){

     int arr[] = {1, 3, 2, 1, 4, 1};
      
     unordered_map<int,int> freqmax;

     for(auto i:arr){
        
        freqmax[i]++;

     }
     int max=0;
     int main=0;
     for(auto i:freqmax){
        
        if(i.second > max)
        {
            max=i.second;
            main=i.first;
        }
        else{

            continue;
        }

     }


     cout << main << "freq -> " << max << endl;

}



