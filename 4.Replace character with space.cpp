#include <iostream>
using namespace std;


void replaceCharacter(char ch[100],int n){

  int index=0;

  while(ch[index]!='\0'){

    if(ch[index]=='@'){

      //insert spaces

      ch[index]=' ';
    }

    index++;
  }
}

int main() {
char ch[100];

cin.getline(ch,100);

  replaceCharacter(ch,100);

cout<<"After:"<<ch<<endl;

  return 0;
}