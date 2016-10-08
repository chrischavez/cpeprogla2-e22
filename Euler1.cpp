#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;


int main(){
	
   ifstream f("input.txt");	
   int num = 0, sum = 0;
   int i;

	f>>num;

   for (i=0; i < num; i++){
   
        if (i % 3 == 0 || i % 5 == 0 ){
          sum += i;
      }
     }
     
   cout << sum << endl;
   
   system ("pause > 0");
}
