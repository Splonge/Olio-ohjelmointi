#include "randomi.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int) {

}

int Game::playerGuess()
{
    int guess = 0;

    return guess;
}

int Game::MaxNumber(int maxnum)
{
    int s = maxnum;

    return s;
}

void Game::play() {
    int maxnum = 0;
    int s = MaxNumber(maxnum);
    int guess = playerGuess();
    cout << "Enter the maximum number you would like to guess:" << endl;
    cin >> maxnum;

    srand(static_cast<unsigned>(time(NULL)));
    int random = 1 + (rand() % s);
    int a;

    cout << "Guess a number: ";
    cin >> a;

    while (random != a) {
        if (random < a) {
            cout << "Too high. Try again: ";
        } else if (random > a) {
            cout << "Too low. Try again: ";
        }

        guess++;
        cin >> a;
    }

    cout << "Correct number! You made " << guess << " guess(es)." << endl;
}
