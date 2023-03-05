#include <iostream> // To incude the code in iostream into this code.

/* 
This is the 
first C++m program that I 
have written
*/

void GameIntoduction(int Difficulty) 
{
    std::cout << "\n\nSystem Breach Detected!";
    std::cout << std::endl;
    std::cout << "Welcome Agent ZHEY67098, You're in the CLOUDSPACE.";
    std::cout << std::endl;
    std::cout << "Enter the System Password to pass through the FIREWALL"; 
    std::cout << std::endl;
    std::cout << "Security Level: " << Difficulty; 
}

bool PlayGame(int Difficulty)
{

    GameIntoduction(Difficulty);

    //Adding an integer
    const int CodeA = 4;
    //Adding an integer
    const int CodeB = 3;
    //Adding an integer
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "--> HINT <--" << std::endl;
    std::cout << "--> There are 3 numbers in the code" << std::endl;
    std::cout << "--> The code adds up to: " << CodeSum << std::endl;
    std::cout << "--> The Prodcut of the code: " << CodeProduct << "\n"; 

    std::cout << "\n";
    std::cout << "Code: ";

    //Creating a Players Guess
    int PlayerGuessA, PlayerGuessB, PlayerGuessC;
    std::cin >> PlayerGuessA;
    std::cin >> PlayerGuessB;
    std::cin >> PlayerGuessC;

    std::cout << "Entered Code --> "<< PlayerGuessA << PlayerGuessB << PlayerGuessC << std::endl;

    int GuessSum = PlayerGuessA + PlayerGuessB + PlayerGuessC;
    int GuessProduct = PlayerGuessA * PlayerGuessB * PlayerGuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "Access Authorized --> Welcome user ZHEY67098";
        std::cout << "You Win";
        return true;
    }

    else 
    {
        std::cout << "Intruder Alert!!";
        std::cout << "You Loose";
        return false;
    }
}

int main() 
{

    int LevelDifficulty = 1;
    int const MaxLevel = 9;

    while(LevelDifficulty <= MaxLevel){

        bool gameResult = PlayGame(LevelDifficulty);
        std::cin.clear(); //Clears any errors 
        std::cin.ignore(); //Discards the buffer

        if (gameResult)
        {
            ++LevelDifficulty;
        }
        

    }
    
    return 0;
}