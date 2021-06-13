// header file for tic-tac-toe game

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;


class gameboard
{

    char gameSpace[4][4];

    public:
    gameboard(char var_in); // constructor
    void setPosition(int ii, int jj, char in_var);
    char getPosition(int ii, int jj);
    void printinfo();
    int fourInRow(char in_var);
    int fourInCol(char in_var);
    ~gameboard(); // destructor


};

// constructor class function- initializes arrays

gameboard::gameboard(char var_in)
{
    int ii,jj;

    cout<< "Initializing Game \n"; 
    cout<< "Current Board is \n"; 

    for (ii = 0; ii<4; ii++)

    {
        for (jj = 0; jj<4; jj++)
        {
            gameSpace[ii][jj] = var_in;
            cout << gameSpace[ii][jj] << " ";
        }

        cout << "\n";

    }
}


void gameboard::setPosition(int ii, int jj, char in_var)
{
  
     gameSpace[ii][jj] = in_var;

}


char gameboard::getPosition(int ii, int jj)
{
  
     return gameSpace[ii][jj]; 

}

void gameboard::printinfo()
{
  
    int ii,jj;

    for (ii = 0; ii<4; ii++)

    {
        for (jj = 0; jj<4; jj++)
        {
            cout << gameSpace[ii][jj] << " ";
        }

        cout << "\n";

    }
}

int gameboard::fourInRow(char in_var)

{

    int ii,jj, return_var;
    char temp1[4];

    return_var = 0;

    for (ii = 0; ii<4; ii++)
    {
        for (jj = 0; jj<4; jj++)
        {
            temp1[jj] = gameSpace[ii][jj];
        }
        
        if (((temp1[0]==in_var)&&(temp1[1]==in_var))&&((temp1[2]==in_var)&&(temp1[3]==in_var)))
        {
            return_var=1;
            break;
        }
        
    }

    return return_var;

}

int gameboard::fourInCol(char in_var)

{

    int ii,jj, return_var;
    char temp1[4];

    return_var = 0;

    for (jj = 0; jj<4; jj++)
    {
        for (ii = 0; ii<4; ii++)
        {
            temp1[ii] = gameSpace[ii][jj];
        }
        
        if (((temp1[0]==in_var)&&(temp1[1]==in_var))&&((temp1[2]==in_var)&&(temp1[3]==in_var)))
        {
            return_var=1;
            break;
        }
        
    }

    return return_var;

}

// destructor class function- kills everything

gameboard::~gameboard()
{
    cout<< "Deleting Game \n";
}