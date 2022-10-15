#include "routines.h"

int menuchoice1; int gameschoice1;
int mathschoice1; int animationschoice1;
int triviachoice1;

int main()
{
    do
    {
        mainmenu();
        std::cin >> menuchoice1;
        switch (menuchoice1)
        {
            case 1:
                do
                {
                    gamesmenu();
                    std::cin >> gameschoice1;
                    switch (gameschoice1)
                    {
                        case 1:
                            system("cls");
                            std::cout << "Ai ales";
                            break;

                        case 9:
                            break;

                        default:
                            system("cls");
                            std::cout << "\n\tWrong option!\n\n\n\n\n\n\n\n";
                            break;

                    }
                } while (gameschoice1 != 9);
                gamesmenu();
                std::cin >> gameschoice1;
                break;

            case 2:
                mathsmenu();
                std::cin >> mathschoice1;
                break;

            case 3:
                animationsmenu();
                std::cin >> animationschoice1;
                break;

            case 4:
                triviamenu();
                std::cin >> triviachoice1;
                break;

            case 0:
                return 0;

            default:
                system("cls");
                std::cout << "\n\tWrong option!\n\n\n\n\n\n\n\n";
                break;
        }
    } while (true);
}