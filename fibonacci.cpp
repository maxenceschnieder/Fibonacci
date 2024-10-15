#include <iostream>
 int main(){
 std::cout<<"\n hello worl \n\a";
 unsigned int A=0;
 unsigned int B=1;
 unsigned int n;
 unsigned int i;
 std::cout<<"\n entrez le rang de la suite \n";
 std::cin >> n;
  for(i=1; i<n; i++){
    B=A+B;
    A=B-A;
  }
  std::cout<<"\n le nombre au rang   " << n <<"   de la suite de fibonacci est   " << B << "\n";
 return 0 ;
 }
 