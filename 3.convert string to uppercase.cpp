#include <iostream>
using namespace std;


void converToUpperCase(char ch[],int n){

  int index=0;

  while(ch[index]!='\0'){

    //if in lowercase convert to uppercase

    if(ch[index]>='a' && ch[index]>='A'){

      ch[index]=ch[index]-'a'+'A';

    }

    index++;
  }
}

int main() {
char ch[100];
cin.getline(ch,100);

cout<<"Before:"<<ch<<endl;

converToUpperCase(ch,100);



cout<<endl<<"After"<<ch<<endl;
  return 0;
}