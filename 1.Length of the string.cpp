#include <iostream>
# include<string.h>
using namespace std;

int findLength(char ch[],int size){
  int index=0;

  while(ch[index]!='\0'){
    index++;
  }
  return index++;
}

int main() {
  char ch[100];

cin.getline(ch,100); //yeh space wale words ke spaces bhi count karke dega
 

  int len=findLength(ch,100);

  cout<<"Length of the string is :"<<len<<endl;
  return 0;
}