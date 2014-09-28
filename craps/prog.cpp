#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

void Roll(){
	
	
		
	/*		        1		 	       1
	 * ___________0123456789012345_______________0123456789012345_
	 * die1[0] =     B   S i d e A    die2[0] =    .-------.      
	 * die1[1] =    e .--------.      die2[1] =   / o o o / \     
         * die1[2] =   d / \  o o o \     die2[2] =  / o o o / x \    
	 * die1[3] =  i / x \  o o o \    die2[3] =   o o o / x x \   
	 * die1[4] = S / x x \  o o o     die2[4] =  \-----. x x x .  
         * die1[5] =  . x x x .-------    die2[5] =  .x x x \ x x /   
         * die1[6] =   \ x x / x x x /    die2[6] =  \ x x x \ x /    
	 * die1[7] =    \ x / x x x /     die2[7] =   \ x x x \ /     
	 * die1[8] =     \ / x x x /      ____________________________
	 *		   S i d e C     |S i d e A = significant face
	 *				 |S i d e s B & C = extraneous */

	char die1[9][17] =	{"                ", "    .--------.  ",
        			 "   / \\        \\ ", "  /   \\        \\",
				 " /     \\        ", ".       .-------",
        			 " \\     /       /", "  \\   /       / ",
				 "   \\ /       /  "};

	char die2[9][17] =	{"  .-------.     ", " /       / \\    ",
				 "/       /   \\   ", "       /     \\  ",
				 "\\-----.       . ", ".      \\     /  ",
				 "\\       \\   /   ", " \\       \\ /    "};

	int die1_val = Die();
	int die2_val = Die();

	switch(die1_val){

		case 1:	
	   /* Side A */ die1[3][11] = 'o';
	   /* Side B */ die1[3][4]  = 'x'; die1[5][4]  = 'x'; die1[7][4]  = 'x';
	  		die1[5][2]  = 'x'; die1[5][6]  = 'x'; 
	   /* Side C */ die1[6][9]  = 'x'; die1[6][13] = 'x'; die1[8][7]  = 'x';
			die1[8][11] = 'x';
			break;

		case 2:	
	   /* Side A */ die1[2][8]  = 'o'; die1[4][14] = 'o';
	   /* Side B */ die1[3][4]  = 'x'; die1[5][2]  = 'x'; die1[5][6]  = 'x';
	  		die1[7][4]  = 'x';
	   /* Side C */ die1[6][9]  = 'x'; die1[6][11] = 'x'; die1[6][13] = 'x';
			die1[8][7]  = 'x'; die1[8][9]  = 'x'; die1[8][11] = 'x';
			break;
	
		case 3:
	   /* Side A */	die1[2][8]  = 'o'; die1[3][11] = 'o'; die1[4][14] = 'o';
	   /* Side B */ die1[3][4]  = 'x'; die1[4][3]  = 'x'; die1[5][2]  = 'x';
			die1[5][6]  = 'x'; die1[6][5]  = 'x'; die1[4][4]  = 'x';
	   /* Side C */ die1[6][9]  = 'x'; die1[7][10] = 'x'; die1[8][11] = 'x';
			die1[6][13] = 'x'; die1[8][7]  = 'x';
			break;

		case 4:	
	   /* Side A */ die1[2][8]  = 'o'; die1[2][12] = 'o'; die1[4][10] = 'o';
			die1[4][14] = 'o';
	   /* Side B */ die1[3][4]  = 'x'; die1[5][2]  = 'x'; die1[5][4]  = 'x';
			die1[5][6]  = 'x'; die1[7][4]  = 'x';
	   /* Side C */ die1[6][9]  = 'x'; die1[7][8]  = 'x'; die1[8][7]  = 'x';
			die1[6][13] = 'x'; die1[7][12] = 'x'; die1[8][11] = 'x';
			break;

		case 5:	
	   /* Side A */ die1[2][8]  = 'o'; die1[2][12] = 'o'; die1[3][11] = 'o';
			die1[4][10] = 'o'; die1[4][14] = 'o';
	   /* Side B */ die1[3][4]  = 'x'; die1[4][5]  = 'x'; die1[5][6]  = 'x';
			die1[5][2]  = 'x'; die1[6][3]  = 'x'; die1[7][4]  = 'x';
	   /* Side C */ die1[6][9]  = 'x'; die1[6][13] = 'x'; die1[8][7]  = 'x';
			die1[8][11]  = 'x';
			break;

		case 6:	
	   /* Side A */ die1[2][8]  = 'o'; die1[2][10] = 'o'; die1[2][12] = 'o';
			die1[4][10] = 'o'; die1[4][12] = 'o'; die1[4][14] = 'o';
	   /* Side B */ die1[3][4]  = 'x'; die1[5][2]  = 'x'; die1[5][6]  = 'x';
	   /* Side C */ die1[6][9]  = 'x'; die1[6][13] = 'x'; die1[7][10] = 'x';
			die1[8][7]  = 'x';die1[8][11]  = 'x';
			break;
	}

	switch(die2_val){ // TODO! (Remember, Sides B and C != 4, 5, or 6.)

		case 1:	
	   /* Side A */ die2[3][11] = 'o';
	   /* Side B */ die2[3][4]  = 'x'; die2[5][4]  = 'x'; die2[7][4]  = 'x';
	  		die2[5][2]  = 'x'; die2[5][6]  = 'x'; 
	   /* Side C */ die2[6][9]  = 'x'; die2[6][13] = 'x'; die2[8][7]  = 'x';
			die2[8][11] = 'x';
			break;

		case 2:	
	   /* Side A */ die2[2][8]  = 'o'; die2[4][14] = 'o';
	   /* Side B */ die2[3][4]  = 'x'; die2[5][2]  = 'x'; die2[5][6]  = 'x';
	  		die2[7][4]  = 'x';
	   /* Side C */ die2[6][9]  = 'x'; die2[6][11] = 'x'; die2[6][13] = 'x';
			die2[8][7]  = 'x'; die2[8][9]  = 'x'; die2[8][11] = 'x';
			break;
	
		case 3:
	   /* Side A */	die2[2][8]  = 'o'; die2[3][11] = 'o'; die2[4][14] = 'o';
	   /* Side B */ die2[3][4]  = 'x'; die2[4][3]  = 'x'; die2[5][2]  = 'x';
			die2[5][6]  = 'x'; die2[6][5]  = 'x'; die2[4][4]  = 'x';
	   /* Side C */ die2[6][9]  = 'x'; die2[7][10] = 'x'; die2[8][11] = 'x';
			die2[6][13] = 'x'; die2[8][7]  = 'x';
			break;

		case 4:	
	   /* Side A */ die2[2][8]  = 'o'; die2[2][12] = 'o'; die2[4][10] = 'o';
			die2[4][14] = 'o';
	   /* Side B */ die2[3][4]  = 'x'; die2[5][2]  = 'x'; die2[5][4]  = 'x';
			die2[5][6]  = 'x'; die2[7][4]  = 'x';
	   /* Side C */ die2[6][9]  = 'x'; die2[7][8]  = 'x'; die2[8][7]  = 'x';
			die2[6][13] = 'x'; die2[7][12] = 'x'; die2[8][11] = 'x';
			break;

		case 5:	
	   /* Side A */ die2[2][8]  = 'o'; die2[2][12] = 'o'; die2[3][11] = 'o';
			die2[4][10] = 'o'; die2[4][14] = 'o';
	   /* Side B */ die2[3][4]  = 'x'; die2[4][5]  = 'x'; die2[5][6]  = 'x';
			die2[5][2]  = 'x'; die2[6][3]  = 'x'; die2[7][4]  = 'x';
	   /* Side C */ die2[6][9]  = 'x'; die2[6][13] = 'x'; die2[8][7]  = 'x';
			die2[8][11] = 'x';
			break;

		case 6:	
	   /* Side A */ die2[2][8]  = 'o'; die2[2][10] = 'o'; die2[2][12] = 'o';
			die2[4][10] = 'o'; die2[4][12] = 'o'; die2[4][14] = 'o';
	   /* Side B */ die2[3][4]  = 'x'; die2[5][2]  = 'x'; die2[5][6]  = 'x';
	   /* Side C */ die2[6][9]  = 'x'; die2[6][13] = 'x'; die2[7][10] = 'x';
			die2[8][7]  = 'x'; die2[8][11] = 'x';
			break;
	}
	
	int i, j;
	for(i = 0; i < 9; i++){
			cout << die1[i] << die2[i] << endl;
	}
}

void CrapsGame(){
        
}

int main(){

	cout << "------------------------------------------" << endl;
	cout << "------------------------------------------" << endl;
	
	// srand(time(NULL));
	srand(1);
	
	
	do{
		char input;	// User input character.

		Roll();
	
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
