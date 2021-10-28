/*
Evan Paivarinta
C++ 1st 2021
Due october 27th
Lab 5
Number guessing game
*/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <time.h>
using namespace std;
int main() {
	int guess;
	int guessCounter = 1;
	int winCount = 0;
	int lossCount = 0;
	int counter = 1; // starts on the first try
	char letter = 'Y';

	cout << "So you have challenged me to my own game?" << endl;;

	// seed random number generator
	srand(unsigned int(time(NULL)));

	// output to screen random number between 1 and 10
	int num = rand() % 100 + 1;

	while (letter == 'Y') {
		cout << "Go ahead guess my number" << endl;
		cin >> guess;
		cout << endl;
		guessCounter++;
		if (guess == num)
			cout << "Your guess is correct. You have bested me, congrats" << endl;
		winCount++;
		if (guess > num)
			cout << "Haha! You're guess is too high!" << endl;
		guessCounter++;
		if (guess < num)
			cout << "Haha! You're guess is too low!" << endl;
		guessCounter++;
		while (guessCounter <= 20);
		if (guessCounter > 20)
			cout << "Haha I win!" << endl;
		lossCount++;
	}
		while (guess != num && guessCounter <= 20);{
		cout << setw(5) << "The amount you have won is:" << winCount << endl;
		cout << setw(4) << "The amount you have loss is: " << lossCount << endl;
		cout << "Would you like to play again" << endl;
		cout << "Please enter Y for yes or N for no" << endl;
		cin >> letter;
		letter = toupper(letter);
	}
	return 0;
}


