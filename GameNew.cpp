#include "gamenew.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

GameNew::GameNew(int mN)
{
    cout << "Peli luotu" << endl;
    maxNumber = mN;
    playerGuess = 0;
    numOfGuesses = 0;
}

GameNew::~GameNew()
{
    cout << "Peli tuhottu" << endl;
}

void GameNew::play()
{
    cout << "Pelissa" << endl;

    srand(time(NULL));
    randomNumber = (rand() % maxNumber) + 1;

    while (playerGuess != randomNumber) {
        cout << "Anna arvaus? ";
        cin >> playerGuess;
        numOfGuesses++;

        if (playerGuess == randomNumber) {
            cout << "Oikein!!" << endl;
        } else if (playerGuess < randomNumber) {
            cout << "Luku on suurempi!" << endl;
        } else {
            cout << "Luku on pienempi!" << endl;
        }
    }
}

void GameNew::printGameResult()
{
    cout << "Tulostuksessa" << endl;
    cout << "Oikea luku: " << randomNumber << endl;
    cout << "Arvausten maara: " << numOfGuesses << endl;
}
