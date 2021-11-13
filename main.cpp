#include <iostream>
using namespace std;

int main() {
   int i=0, suc=1, prec=0, ris=0, n=0;
   cin>>n;
   prec=i;
   if(n>=2){
      cout<<suc<<endl;
      for(int i=2, i<=n, i++){
         ris=(prec+suc);
         prec=suc;
         suc=ris;
         cout<<ris<<endl;
      }
   }else {
      cout<<"errore"<<endl;
   }   
   return 0;
}
