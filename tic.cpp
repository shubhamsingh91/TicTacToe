// tic tac toe game test

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "tic.hpp"
#include <string>

int main() 
{

 gameboard game1('-');
 string name1, name2;

// Testing setPosition

int ii, jj,kk, turn_no=8;
char var_in;
int row1, row2, col1, col2;
 

// Enter player names
 cout << "\n";
 cout << "Enter player x name " << endl;
 cin >> name1;
 cout << "\n";

 cout << "Enter player o name " << endl;
 cin >> name2;
 cout << "\n";

cout << "Total no of turns = " << turn_no << endl;
cout << "Begin Game Now" << endl;
cout << "-----------------------------------------";
cout << "\n";

for (kk=0; kk<turn_no;kk++)
{

 cout << "Turn no " << kk+1 << endl;

 // Player 1 Input

cout << name1 << "'s turn. Enter row no" <<endl;
cin >> row1;
cout << name1 << " Enter col no" <<endl;
cin >> col1;

game1.setPosition(row1-1, col1-1, 'x');
cout << "\n";
game1.printinfo();
cout << "\n";

if (game1.fourInRow('x')==1)
{
  break;
}
else if (game1.fourInRow('o')==1)
{
  break;
}

// Testing win cols here

if (game1.fourInCol('x')==1)
{
  break;
  }
else if (game1.fourInCol('o')==1)
{
  break;
  }



 // Player 2 Input

cout << name2 << "'s turn. Enter row no" <<endl;
cin >> row2;
cout << name2 << " Enter col no" <<endl;
cin >> col2;

game1.setPosition(row2-1, col2-1, 'o');

cout << "\n";
game1.printinfo();

cout << "\n";
cout << "-----------------------------------------";
cout << "\n";

// Testing win rows here

if (game1.fourInRow('x')==1)
{
  break;
}
else if (game1.fourInRow('o')==1)
{
  break;
}

// Testing win cols here

if (game1.fourInCol('x')==1)
{
  break;
  }
else if (game1.fourInCol('o')==1)
{
  break;
  }

}

// Final test for win/tie

if (game1.fourInRow('x')==1)
{
  cout << name1 << " wins" << endl;
  cout << "Game ends !!!" << endl;
} else if (game1.fourInRow('o')==1)
{
  cout << name2 << " wins" << endl;
  cout << "Game ends !!!" << endl;
} else if (game1.fourInCol('x')==1)
{
  cout << name1 << " wins" << endl;
  cout << "Game ends !!!" << endl;
  } else if (game1.fourInCol('o')==1)
{
  cout << name2 << " wins" << endl;
  cout << "Game ends !!!" << endl;
 } else {
      cout << "Game Tied !!!" << endl;
 }


 return 0;

}



