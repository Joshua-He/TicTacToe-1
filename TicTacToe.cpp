#include <iostream>
#include <string.h>

using namespace std;

int main(){



  char turn;
  char array[3][3];

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      array[i][j] = ' ';
    }
  }
  cout << "  1 2 3 " << endl;
  for(int i = 0; i < 3; i++){
    cout << (char)('a' + i) << " ";
    for(int j = 0; j < 3; j++){
      cout << array[i][j] << " ";
    }
    cout << endl;
  }

  turn = 'X';
  cout << "Please input your move. " << "It is " << turn << "'s turn" << endl;
  


  
}
