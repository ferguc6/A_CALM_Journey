#include <iostream>
#include <iomanip>
#include <string>
#include <Windows>
#include "Rolls.h"


using namespace std;

int main(){
  string s;
  cout << "Applsauce" << endl;
  cin >> s;
  srand(time(NULL));
  for(int i = 0; i < 5; i++){
    cout << "You rolled a: " << rollNum(50, 1) << endl;
  }
  
  cin.get();
  return 0;
}
