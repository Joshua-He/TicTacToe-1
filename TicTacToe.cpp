#include <iostream>
#include <string.h>

using namespace std;

int main(){



  char turn = 'X';
  
  char array[3][3];
  char move[2];
  int row;
  int column;
  int inGame = 1;
  int xwins;
  int owins;
  //Initialize board
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      array[i][j] = ' ';
    }
  }
  while(inGame == 1){
    //Draw board
  cout << "  1 2 3 " << endl;
  for(int i = 0; i < 3; i++){
    cout << (char)('a' + i) << " ";
    for(int j = 0; j < 3; j++){
      cout << array[i][j] << " ";
    }
    cout << endl;
  }
  cout << "Please input your move. " << "It is " << turn << "'s turn" << endl;
  cin >> move;
  row = (int)(move[0] - 'a');
  column = (int)(move[1] - '1');

  if (array[row][column] == ' '){
    array[row][column] = turn;
    if (turn == 'X'){
      turn = 'O';
    }
    else {
      turn = 'X';
    }
  }
  else{
    cout << "occupied space" << endl;
  }
  }
 


  
}
