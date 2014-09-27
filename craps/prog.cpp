#include <iostream>
#include <cmath>
using namespace std;

/* Author:	Matt W. Martin, 4374851
 *		kaethis@tasmantis.net
 *
 * Project:	CS2010, Lab Assignment #3
 *		Part II: CRAPS! CRAPS! CRAPS! */ 


int Die(){

	/* This method simulates a single dice-roll by generating a number
	 * between [1-6], returning the value as an int. */

	return (rand() % 6 + 1);
}

int Roll(){	// I need to know the individual values of the die...

	/* By calling the Die method twice, this method simulates two dice-
	 * rolls, and returns an int between [2-12].
	
	return (Die() + Die());
}

void CrapsGame(){
        
	//                 1         2         3
	//       012345678901234567890123456789012
	// diceA"                   .-------.     "
	// diceB"     .--------.   / X X X / \    "
        // diceC"    / \  A A A \ / X X X / Y \   "
	// diceD"   / B \  A A A \ X X X / Y Y \  "
	// diceE"  / B B \  A A A \-----' Y Y Y ' "
        // diceF" ' B B B '-------'Z Z Z \ Y Y /  "
        // diceG"  \ B B / C C C /\ Z Z Z \ Y /   "
	// diceH"   \ B / C C C /  \ Z Z Z \ /    "
	// diceI"    \ / C C C /                  "


	
	cout << "------------------------------------------" << endl;
	cout <<                                              << endl;   
	cout <<                                              << endl;
	cout << "------------------------------------------" << endl;

}

int main(){

	cout << "------------------------------------------" << endl;
	cout <<                                              << endl;   
	cout << "------------------------------------------" << endl;
	
	do{
		char input;	// User input character.

		CrapsGame();
	
		input_start:

		cout << "Again? (Y/N):  ";
		cin >> input;
		if((input == 'Y') || (input == 'y'))
			;
		else if((input == 'N') || (input == 'n'))
			break;
		else
			goto input_start;		
	
	}while(true);

	cout << "------------------------------------------" << endl; 
	cout << "                                          " << endl;
	cout << "------------------------------------------" << endl; 

	return 0;
}
