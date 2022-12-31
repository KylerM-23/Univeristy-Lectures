#include <iostream>
using namespace std;

char g[3][3] = { {' ',' ',' '},{' ',' ',' '} , {' ',' ',' '} };

int checkCat()
{
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (g[i][j] == ' ')
            {
                count = count + 1;
            }
        }
    }
    if (count == 0)
    {
        return 3;
    }
    else 
    {
        return 0;
    }
}
int checkWin()
{
    for (int i = 0; i < 3; i++)
    {
        if ((g[i][0] == 'x') && (g[i][1] == 'x') && (g[i][2]) == 'x')
        {
            //cout << "1";
            return 1;
        }
        else if ((g[i][0] == 'o') && (g[i][1] == 'o') && (g[i][2]) == 'o')
        {
            //cout << "2";
            return 2;
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        if ((g[0][i] == 'x') && (g[1][i] == 'x')&&( g[2][i] == 'x'))
            {
            cout << "3";
            return 1;
            }
        else if ((g[0][i] == 'o') && (g[1][i] == 'o') && (g[2][i] == 'o'))
            {
                cout << "4";
                return 2;
            }
        }
    {
    if ((g[0][0] == 'x') && (g[1][1] == 'x')&&(g[2][2]== 'x'))
        {
           //cout << "5";
            return 1;
            }

    else if ((g[0][0] == 'o') && (g[1][1] == 'o') && (g[2][2]) == 'o')
            {
                //cout << "6";
                return 2;
            }
        }

    if ((g[2][0] == 'x') && (g[1][1] == 'x') && (g[0][2]) == 'x')
    {
        //cout << "7";
            return 1;
        }
    else if ((g[2][0] == 'o') && (g[1][1] == 'o') && (g[0][2]) == 'o')
        {
            //cout << "8";
            return 2;
        }
    
    return checkCat();
}
void DisplayGame()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout <<"|"<< g[i][j]<< "|";
        }
        cout << "\n";
    }
    cout << "\n";
}
void Game(char player)
{
    int cont = 0;
    int x = 0, y = 0;
    while (cont == 0)
    {
        x = 0;
        y = 0;
        cout << "Enter the row you want to put the symbol in starting with row 1. ";
        cin >> x;
        x--;
        cout << "\nEnter the column you want to put the symbol in starting with column 1. ";
        cin >> y;
        y--;

        if (g[x][y] != ' ')
        {
            cout << "\nThat spot is full, pick another one\n";
        }
        else
        {
            g[x][y] = player;
            cont = 1;
        }
    }
    return;


}

int main()
{
    int win = 0;
    char player = 'x';
    DisplayGame();
    while (win == 0)
    {
        Game(player);
        DisplayGame();
        win = checkWin();
        if (player == 'x')
        {
            player = 'o';
        }
        else
        {
            player = 'x';
        }
    }
    if (win == 1)
    {
        cout << "Player 1 who used the x symbol has won the game.\n";
    }
    else if (win == 2)
    {
        cout << "Player 2 who used the o symbol has won the game.\n";
        }

    else if (win == 3)
    {
        cout << "The game has ended in a draw.";
    }
    return 0;
}
