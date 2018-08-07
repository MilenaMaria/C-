#include <iostream>

using namespace std;

int main() {
  int p1,p2,c1,c2,l1,l2;
  cin>> p1>>c1>>p2>>c2;
  l1= p1*c1;
  l2= p2*c2;

  if(l1==l2){
    cout<<"0\n";
  }else if(l1>l2){
    cout<<"-1\n";
  }else{
    cout<<"1\n";
  }
  return 0;
}
