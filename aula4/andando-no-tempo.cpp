#include <iostream>

using namespace std;

int main(){
  int a,b,c;
  cin>> a>>b>>c;

  if ((a==b) || (a==c) || (b==c)){
    cout<<"S\n";
  }else if((a+b == c) || (b+c == a) ||(a+c==b)){
    cout<<"S\n";
  }else{
    cout<<"N\n";
  }
}
