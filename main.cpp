#include <iostream>
#include "lib.h"

using namespace std;
int main(){
  char x;
  cin >> x;
  if(convert(x)){
    cout<<x<<endl;
  }else{
    cout<<"errore"<<endl;
  }
  return 0;
}
