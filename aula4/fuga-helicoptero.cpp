#include <iostream>

using namespace std;

int main(){
  int h,p,d,f;
  cin>> h >>p >>f >>d;

  if(d==1){
    // for(int i =f;; i++){
    for(int i=f;; i++){
      if(i==16){
        i=0;
      }
      if(i==p){
        cout<<"N\n";
        break;
      }
      if(i==h){
        cout<<"S\n";
        break;
      }
    }
  }

  if(d==-1){
    for(int i = f;; i--){
      if(i==-1){
        i=15;
      }
      if(i==p){
        cout<<"N\n";
        break;
      }
      if(i==h){
        cout<<"S\n";
        break;
      }
    }
  }
  return 0;
}
