#include <iostream>
using namespace std;
string wyraz;
int ok=0;
int main()
{

    cout <<"write word"<<endl;
    cin>>wyraz;
    int n = wyraz.length();
    for (int i=0; i<n/2; i++) {
      if(wyraz[i]==wyraz[n-i-1]){
                ++ok;
      }
    }
    if(ok==n/2){
        cout <<"Yes"<<endl;
    }else{
        cout <<"No"<<endl;
    }
    return 0;
}

