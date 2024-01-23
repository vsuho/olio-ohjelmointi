#include "game.h"

Game::Game(int maxNumber)
{
    maxNumber = 10;
    cout << "GAME CONSTRUCTOR: Object initialized with 10 as a maximum value" << endl;
}

Game::~Game()
{
    cout << "GAME DESTRUCTOR: Object cleared from stack memory" << endl;

}

void Game::play()
{

    srand(time(0));
    randomNumber = rand() % 10+1;
    while (true){

        cout << "Give your guess between 1-10" << endl;
        cin >> playerGuess;
        numOfGuesses++;

        if (randomNumber < playerGuess){
            cout << "Your guess is too big" << endl;
        }
        else if (randomNumber > playerGuess){
            cout << "Your guess is too small" << endl;
        }
        else{
            printGameResult();
            break;
        }

    }
}

void Game::printGameResult()
{
    cout <<"You guessed the right number = " << randomNumber;
    cout <<" with "<< numOfGuesses << " guesses" << endl << endl;
}
