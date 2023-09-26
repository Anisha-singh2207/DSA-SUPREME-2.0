
#include <iostream>
#include<vector>
using namespace std;

int main() {
  //BUBBLE SORT

  vector <int>arr{10,17,6,14,9};
  int n=arr.size();

//outer loop rounds ke liye issliye initialise kiya round=1

  for(int round=1;round<n;round++){
    
    for(int j=0;j<n-round;j++){

      if(arr[j]>arr[j+1]){
        
        swap(arr[j],arr[j+1]);
      }
    }
  }

  //PRINTING

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}