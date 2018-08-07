#include <iostream>
using namespace std;
int main() {
  int n,p;
  cin>>n>>p;
  int x,y,c = 0,cont=0;
  while(c<n){
      cin>>x>>y;
      if((x+y)>=p) cont+=1;
      c++;
  }
  cout<<cont<<endl;
  return 0;
}
