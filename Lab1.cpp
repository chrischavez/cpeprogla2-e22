#include <iostream>
#include <cmath> 	
using namespace std;
int main (){
  for(int i = 1; i <= 100; i++){
    if(i % 3 == 0 && i % 5 == 0)
    cout << "FizzBuzz" << endl;
    else
    if(i % 3 == 0)
	cout << "Fizz" << endl;
    else
    if(i % 5 == 0)
    cout << "Buzz" << endl;
    else cout << i << endl;
  }
  int l,n,m;
  cout<<endl<<"Enter Hashmat Soldier: ";
  cin>>l;
  cout<<"Enter Opponents' Soldier: ";
  cin>>n;
  m=abs(l-n);
  cout<<"Number of soldiers: ";
  cout<<m;
  
  cout<<endl<<"Ed Pogi";
  return 0;
}
