#include <iostream>

using namespace std;

int main(){
  double n1,n2,n3,n4,n5;
  cin>> n1>> n2>> n3>> n4>> n5;

  cout.precision(1); // indico a precisão que eu quero na saída
  cout.setf(ios::fixed);
  if ((n1>=n2) &&(n1>=n3)&&(n1>=n4)&&(n1>=n5)){
    if ((n2<=n3) &&(n2<=n4)&&(n2<=n5)){
      cout<<n3+n4+n5;
    }else if((n3<=n2) && (n3<=n4)&&(n3<=n5)){
      cout<< n2+n4+n5;
    }else if ((n4<=n3) &&(n4<=n2)&&(n4<=n5)){
      cout<< n3+n2+n5;
    }else {
      cout<< n3+n4+n2;
    }

  } else if ((n2>=n1) &&(n2>=n3)&&(n2>=n4)&&(n2>=n5)){
    if ((n1<=n3) &&(n1<=n4)&&(n1<=n5)){
      cout<<  n3+n4+n5;
    } else if((n3<=n1) &&(n3<=n4)&&(n3<=n5)){
      cout<<  n1+n4+n5;
    }else if ((n4<=n3) &&(n4<=n1)&&(n4<=n5)){
      cout<< n3+n1+n5;
    } else{
      cout<< n3+n4+n1;
    }

  } else if ((n3>=n1) &&(n3>=n2)&&(n3>=n4)&&(n3>=n5)){
    if ((n1<=n2) &&(n1<=n4)&&(n1<=n5)){
      cout<< n2+n4+n5;
    } else if((n2<=n1) &&(n2<=n4)&&(n2<=n5)){
      cout<<  n1+n4+n5;
    }else if ((n4<=n2) &&(n4<=n1)&&(n4<=n5)){
      cout<<  n2+n1+n5;
    } else{
      cout<<  n2+n4+n1;
    }

  } else if ((n4>=n1) &&(n4>=n3)&&(n4>=n2)&&(n4>=n5)){
    if ((n1<=n2) &&(n1<=n3)&&(n1<=n5)){
      cout<< n2+n3+n5;
    } else if((n2<=n1) &&(n2<=n3)&&(n2<=n5)){
      cout<<  n1+n3+n5;
    }else if ((n3<=n2) &&(n3<=n1)&&(n3<=n5)){
      cout<<  n2+n1+n5;
    } else{
      cout<< n2+n3+n1;
    }

  } else  if((n5>=n1) &&(n5>=n3)&&(n5>=n2)&&(n5>=n4)){
    if ((n1<=n2) &&(n1<=n3)&&(n1<=n4)){
      cout<<  n2+n3+n4;
    } else if((n2<=n1) &&(n2<=n3)&&(n2<=n4)){
      cout<< n1+n3+n4;
    }else if ((n3<=n2) &&(n3<=n1)&&(n3<=n4)){
      cout<< n2+n1+n4;
    } else{
      cout<< n2+n3+n1;
    }
  }
}
