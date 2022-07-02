#include <iostream>
#include <string>
using namespace std;

int main() {
  string str1;
  cin>>str1;
  int count=0;
  int counter=0;
  for(int i = 0; i<str1.length(); i++){
    if(str1[i]=='A'){
      count++;
    }
    else if(str1[i]=='L'){
      for(int j = 0; j<4; j++, i++){
        if(str1[i]=='L'){
          counter++;
        }
        else{
          continue;
        }
      }
    }
}
  if(count>2){
    cout<<"false";
  }
  else if(counter>3){
    cout<<"false";
  }
  else{
    cout<<"true";
  }
}