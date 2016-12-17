/* Final.cpp
James Correa
12/15/2016
Play the game */

#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
using namespace std;

//use descriptive names for your functions
//use descriptive names for your variables
//use camel case for naming so it's easier to read - likeThis
//lowercase first, then capital second word

//initializing a function up top before defining it below
//note the semicolon in the one here and the lack of for the one with the definition
void rollDice(int dieOne, int dieTwo);

int main()
{
	//you should probably have a variable for the dice
	//you might want to think thru how you'll track players on the board
	//either track them on the array or make it so you only have an integer for each player that holds their place value
	//you'll have to figure out what to do on that one tbh
	//you'll also need to figure out a way to check if someone one
	//i'd suggest using a boolean value such as bool winCondition = false
	//then update that variable if someone wins
	int sorryBoardPlayerOne[50];
	srand(time(NULL));
	int dieOne;
	int dieTwo;
	int dieTotal
	
	//you'll want a loop that runs until you hit the last piece on the board to encapsulate the entire thing (after you declare all variables)
	//most things will run with conditional statements like:
		//if(dieTotal > 0)
		//
	
	//function call for rolling the dice
	rollDice(dieOne, dieTwo);
	return 0;
}

//a fundtion to change the die numbers - looks cleaner to call then always writing the lines
void rollDice(int dieOnce, int dieTwo)
{
	//you need to randomize the number between 1-6 to simulate a roll
	//to do that, take the modular with 6 and add 1 to create a range of 1-6
     dieOne = rand() % 6 + 1;
     dieTwo = rand() % 6 + 1;
}
