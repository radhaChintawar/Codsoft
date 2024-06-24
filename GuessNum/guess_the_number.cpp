#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main()
{
    int number;
    int guess = 0;
    bool gameover = false;
    cout << "\n\nWELCOME TO GUESS THE NUMBER GAME\n\n"
         << endl;
    cout << "guess the numbers from range 1 to 100\n"
         << endl;
    srand(time(0));
    number = rand() % 100 + 1;
    while (number != guess && !gameover)
    {
        cout << "\nenter the guess : " << endl;
        cin >> guess;
        if (guess < number)
        {
            cout << "its lower,\nenter higher number!!" << endl;
        }
        else if (guess > number)
        {
            cout << "its higher,\nenter lower number!!" << endl;
        }
        else
        {
            cout << "CONGRATULATIONS!!!,you won the game! " << endl;
        }
    };
    return 0;
}
