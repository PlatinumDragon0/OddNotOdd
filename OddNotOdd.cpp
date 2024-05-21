#include <windows.h>
#include <shellapi.h>
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

void dots()
{
    for (int t = 0 ; t < 3 ; ++t) 
    {
        Sleep(850);
        std::cout << ".";
    }
}

int main()
{
    int Even = 5;
    int Num = 0;
    int LOLZ = 0;

    //Chating with user
    Sleep(1000);
    dots();
    Sleep(1000);
    std::cout << "\n" << "Oh, hey!\n";
    Sleep(1500);
    std::cout << "I didn't notice you\n";
    Sleep(1500);
    std::cout << "I mean, you booted this program";
    dots();
    Sleep(250);
    std::cout << "\n" << "BUT ANYWAY\n";
    Sleep(1500);


    std::cout << "Let's decide: you want to get all odd numbers or even?\n"<< "0: Even\n" << "1: Odd\n";
    while ((Even < 0) || (Even > 1))
    {
    std::cin >> Even;
    if ((Even < 0) || (Even > 1)) 
        {
        ++LOLZ;
        switch (LOLZ)
        {
        case 1:
            std::cout << "Ha-ha, very funny. Try again.\n";
            break;
        case 2:
            std::cout << "Are you serious?\n";
            break;
        case 3:
            std::cout << "Dude...\n";
            break;
        case 4:
            std::cout << "DUDE!\n";
            break;
        case 5:
            std::cout << "...\n";
            break;
        case 6:
            std::cout << "Skill issue.\n";
            break;
        case 7:
            std::cout << "Out of 8 billions people on Earth I got you.\n";
            break;
        case 8:
            std::cout << "Whatever man...\n";
            break;
        case 9:
            std::cout << "There is only two correct number: 1 or 0\n";
            break;
        case 10:
            std::cout << "Do not put you age here!\n";
            break;
        case 11:
            std::cout << "For the love of machine god, WRITE A CORRECT ANSWER!\n";
            break;
        case 12:
            std::cout << "Do it one more time...\n";
            break;
        case 13:
            std::cout << "Aight, I'll do it for you.\n";
            Sleep(1000);
            std::cout << "1";
            Even = 1;
            break;
        }
        }
    }
    

    Sleep(500);
    std::cout << "\n" << "Cool! And what's you number?\n";
    std::cin >> Num;

    Sleep(500);
    std::cout << "\n" << "Aight, let's see";
    dots();
    std::cout << "\n";

    //ACTUAL program
    for (int i = 0 + Even; i < Num; i += 2)
    {
        std::cout << i <<" ";
    }
}