#include <iostream>

using namespace std;

int main() {
  int a,b,c;
  cin>> a>>b>>c;

  if((a==b)&&(b!=c)){
    cout<<"C\n";
  }else if((a!=b)&&(b==c)){
    cout<<"A\n";
  }else if((a==c)&&(b!=c)){
    cout<<"B\n";
  }else if((a==b) && (b==c)){
    cout<<"*";
  }
  return 0;
}
