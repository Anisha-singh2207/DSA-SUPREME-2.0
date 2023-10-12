#include <iostream>
using namespace std;

int factorial(int n){
  //Base case

  if(n==1)
  return 1;
  if(n==0)
  return 0;

  //recurssive realation
  int ans=factorial(n-1);

  //processing
  int finalAns=n*ans;
}

int main(){

  int k=factorial(5);
  cout<<k;
}