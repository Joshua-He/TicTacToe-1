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
  char input ='Y';
  int xwins = 0;
  int owins = 0;
  int playAgain = 1;
  int empty = 0;
  while(playAgain == 1){
  //Initialize board
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      array[i][j] = ' ';
    }
  }
  inGame = 1;
  turn = 'X';
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
  //Fills the selected spot with x or y, if its full then outputs error message
  if (array[row][column] != ' '){
    cout << "occupied space" << endl;
  }
  else   // if it is a empty spot, go with the move
   {
      array[row][column] = turn;

      //Check if anyone has won;
      if ((array[0][0] == turn && array[1][1] == turn && array[2][2] == turn) ||
        (array[2][0] == turn && array[1][1] == turn && array[0][2] == turn))
      {
	inGame =0;
      }

      for(int i = 0; i < 3; i++){
        if (array[i][0] == turn && array[i][1] == turn && array[i][2] == turn){
	  inGame =0; 	  
         }
       }

      for(int i = 0; i < 3; i++){
       if (array[0][i] == turn && array[1][i] == turn && array[2][i] == turn){
	 inGame =0;
       }
      }
      
      if (inGame ==0) {
	 if (turn == 'X'){
	    xwins++;
         }
	 else  {
	   owins++;
	 }
	 
	 cout << turn << " win! Total xwins: " << xwins << "owins: " << owins << endl;
      }  // end if inGame==0

      // check tie
      if (inGame ==1) {
	empty = 0;
	for (int i = 0; i < 3; i++){
	  for (int j = 0; j < 3; j++){
	    if (array[i][j] == ' '){
	      empty++;
	    }
	  }
	}
	
      }
      if (empty == 0){
	cout << "tie" << endl;
	inGame = 0;
      }
       //Change the turn
        if (turn == 'X'){
           turn = 'O';
        }
        else {
           turn = 'X';
         }
   }  // end of else case
  }   // end of while inGame ==1
 
  cout << "play again? Y/N" << endl;
  cin >> input;
  cout << input << endl;
  if (input == 'Y' || input == 'y'){
    playAgain = 1;
  }
  else {
    playAgain = 0;
    cout << "good luck" << endl;
  }
}
}
