#include <iostream>
#include <ctime>

using namespace std;

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main()
{
    char spaces[9] = {
        ' ',
        ' ',
        ' ',
        ' ',
        ' ',
        ' ',
        ' ',
        ' ',
        ' ',
    };

    char player = 'X';
    char computer = 'O';
    bool running = true;

    do
    {
        drawBoard(spaces);
        playerMove(spaces, player);
        if (checkWinner(spaces, player, computer))
        {
            running = false;
            break;
        }
        else if (checkTie(spaces))
        {
            running = false;
            break;
        }

        drawBoard(spaces);
        computerMove(spaces, computer);
        if (checkWinner(spaces, player, computer))
        {
            running = false;
            break;
        }
        else if (checkTie(spaces))
        {
            running = false;
            break;
        }

    } while (running);

    return 0;
}

void drawBoard(char *spaces)
{
    cout << endl;
    cout << "      |     |     " << endl;
    cout << "  " << spaces[0] << "   |  " << spaces[1] << "  |  " << spaces[2] << "  " << endl;
    cout << "______|_____|_____" << endl;
    cout << "      |     |     " << endl;
    cout << "  " << spaces[3] << "   |  " << spaces[4] << "  |  " << spaces[5] << "  " << endl;
    cout << "______|_____|_____" << endl;
    cout << "      |     |     " << endl;
    cout << "  " << spaces[6] << "   |  " << spaces[7] << "  |  " << spaces[8] << "  " << endl;
    cout << "______|_____|_____" << endl;
    cout << endl;
}

void playerMove(char *spaces, char player)
{
    int move;
    do
    {
        cout << "Enter your move (1-9): " << endl;
        cin >> move;
        cin.clear();
        cin.ignore();
        if (move >= 1 && move <= 9)
        {
            if (spaces[move - 1] == ' ')
            {
                spaces[move - 1] = player;
                break;
            }
        }
        else
        {
            cout << "Please enter correct move!" << endl;
        }
    } while (true);
    drawBoard(spaces);
}

void computerMove(char *spaces, char computer)
{
    int number;
    srand(time(0));

    while (true)
    {
        number = rand() % 9;
        if (spaces[number] == ' ')
        {
            spaces[number] = computer;
            break;
        }
    }
}

bool checkWinner(char *spaces, char player, char computer)
{

    if ((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2]))
    {
        spaces[0] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }
    else if ((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5]))
    {
        spaces[3] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }
    else if ((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8]))
    {
        spaces[6] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6]))
    {
        spaces[0] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }
    else if ((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7]))
    {
        spaces[1] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8]))
    {
        spaces[2] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8]))
    {
        spaces[0] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6]))
    {
        spaces[2] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }
    else
    {
        return false;
    }
    return true;
}

bool checkTie(char *spaces)
{
    for (int i = 0; i < 9; i++)
    {
        if (spaces[i] == ' ')
        {
            return false;
        }
    }
    std::cout << "IT'S A TIE!\n";
    return true;
}
