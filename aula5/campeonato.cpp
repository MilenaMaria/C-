#include <iostream>

using namespace std;

int main() {
  int cv,ce,cs,fv,fe,fs,sc,sf;
  cin>> cv>>ce>>cs>>fv>>fe>>fs;

  sc = (cv*3) + ce ;
  sf = (fv*3) + fe;

  if(sc>sf){
    cout<<"C\n";
  }else if(sc == sf){
    if(cs>fs){
      cout<<"C\n";
    }else if(cs == fs){
      cout<<"=\n";
    }else{
      cout<<"F\n";
    }
  }else{
    cout<<"F\n";
  }
  return 0;
}
