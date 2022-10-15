#include "routines.h"

char a = 200; char A = 201;
char b = 188; char B = 187;
char c = 205; char C = 186;
char d = 204; char D = 185;
char e = 202; char E = 203;

void mainmenu()
{
    system("cls");
    system("Color 81");
    std::cout << "\n\n\n\t\t\t\t\t\t";
    std::cout << A << c << c << c << c << c << c << c << c << c << c << B << std::endl;
    std::cout << "\t\t\t\t\t\t" << C << " Iluvitar " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << A << c << c << c << c << c << e << c << c << c << c << c << c << c << c << c << c << e << c << c << c << c << c << B << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 1.Games              " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 2.Maths              " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 3.Animations         " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 4.Trivia             " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 5.                   " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 6.Surprise           " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << "                      " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 0.Exit               " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << b << std::endl;
    std::cout << "\n\n\n\t-> ";
}

void gamesmenu()
{
    system("cls");
    system("Color 85");
    std::cout << "\n\n\n\t\t\t\t\t\t ";
    std::cout << A << c << c << c << c << c << c << c << B << std::endl;
    std::cout << "\t\t\t\t\t         " << C << " Games " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << A << c << c << c << c << c << c << e << c << c << c << c << c << c << c << e << c << c << c << c << c << c << B << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 1.Guess the number  " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 2.Tic-Tac-Toe       " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 3.Connect 4         " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 4.Sudoku            " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 5.Snake             " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << "                     " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 9.Back              " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 0.Exit              " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << b << std::endl;
}

void mathsmenu()
{
    system("cls");
    system("Color 85");
    std::cout << "\n\n\n\t\t\t\t\t\t";
    std::cout << A << c << c << c << c << c << c << c << B << std::endl;
    std::cout << "\t\t\t\t\t\t" << C << " Maths " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << A << c << c << c << c << c << e << c << c << c << c << c << c << c << e << c << c << c << c << c << B << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 1.Digit of Pi     " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 2.Factorial       " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 3.                " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 4.                " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << "                   " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 9.Back            " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 0.Exit            " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << b << std::endl;
}

void animationsmenu()
{
    system("cls");
    system("Color 85");
    std::cout << "\n\n\n\t\t\t\t\t\t";
    std::cout << A << c << c << c << c << c << c << c << c << c << c << c << c << B << std::endl;
    std::cout << "\t\t\t\t\t\t" << C << " Animations " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << A << c << c << c << c << c << e << c << c << c << c << c << c << c << c << c << c << c << c << e << c << c << c << c << c << B << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 1.Helikopter           " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 2.                     " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 3.                     " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 4.                     " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << "                        " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 9.Back                 " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 0.Exit                 " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << b << std::endl;
}

void triviamenu()
{
    system("cls");
    system("Color D0");
    std::cout << "\n\n\n\t\t\t\t\t\t";
    std::cout << A << c << c << c << c << c << c << c << c << B << std::endl;
    std::cout << "\t\t\t\t\t\t" << C << " Trivia " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << A << c << c << c << c << c << e << c << c << c << c << c << c << c << c << e << c << c << c << c << c << B << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 1.Cosmos           " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 2.                 " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 3.                 " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 4.                 " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << "                    " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 9.Back             " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << C << " 0.Exit             " << C << std::endl;
    std::cout << "\t\t\t\t\t" << "  " << a << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << c << b << std::endl;
}