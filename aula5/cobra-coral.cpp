#include <iostream>

using namespace std;

int main() {
  int c1,c2,c3,c4;
  cin>> c1>>c2>>c3>>c4;

  if((c1 == c3)||(c2==c4)){
    cout<<"V\n";
  }else{
    cout<<"F\n";
  }
  return 0;
}
