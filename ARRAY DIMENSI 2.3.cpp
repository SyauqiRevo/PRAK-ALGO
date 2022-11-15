#include <iostream>

using namespace std;

int main(){
 int angka[6][2]={{1,20},{2,40},{3,5},{4,89},{5,12},{99,69}};
 
 for(int i = 0; i<=4; i++){
  cout<<"\nNilai pada baris ke-"<<i<<endl;
  for(int j = 0; j<=1; j++){
   cout<<"Array ["<<i<<"]["<<j<<"] : "<<angka[i][j];
   cout<<endl;
  }
  cout<<endl;
 }
 
}

