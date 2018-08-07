#include <iostream>

using namespace std;

int main(){
  int l1,a1,l2,a2,re1,re2;
  cin>> l1 >> a1;
  cin>>  l2 >> a2;
  re1 = (l1*a1);
  re2 = (l2*a2);

  if(re1 != re2){
    if(re1 > re2){
      cout<<"Primeiro";
    }else{
      cout<< "Segundo";
  }
  }else {
      cout<< "Empate";

}
}
