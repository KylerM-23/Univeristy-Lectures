// Exercise 103.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
using namespace std;

int getCardNum(bool show)
{
    
    int card_num = 1 + rand() % ((10 - 1) + 1);
    const char* suit[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };
    int num = rand() % (4);
    
    if (show == true)
    {
        cout << "You have drawn a card of the suit " << suit[num] << "\n";
    
        if (card_num == 1)
        {
            cout << "You have drawn an ace will it act as a 1 or 11, by default it will act as a 1\n";
            cin >> card_num;
            if (card_num == 1 || card_num == 11)
            {
                return card_num;
            }
            else
            {
                return 1;
            }
        }
        else 
        {
            cout << "With a value of " << card_num<<"\n";
            return card_num;
        }
    }

    else
    {
        if (card_num == 1)
        {
            int flip = rand() % 2;
            if (flip == 0)
            {
                return 11;
            }
            else
            {
                return 1;
            }
        }
        else
        {
            return card_num;
        }
    }
    
}

void showCards(int card[], int size)
{
    cout << "Your cards are \n";
    for (int i = 0; i < size; i++)
    {
        if (card[i] != 0)
        {
            cout << card[i] << "\n";
        }
    }
    cout << "\n";
    return;
}
int checkSum(int card[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + card[i];
    }
    return sum;
}

bool checkWin(int pcard[], int dcard[])
{
    int pSum = checkSum(pcard, 11), dSum = checkSum(dcard,11) ;

    if (pSum > 21 || dSum > 21)
    {
        if (pSum >21)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    else if (pSum == 21 || dSum == 21)
    {
        if (pSum == 21)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
    else
    {
        if (pSum > dSum)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
}
bool blackjack()
{
    int player_card[] = {0,0,0,0,0,0,0,0,0,0,0};
    int dealer_card[] = {0,0,0,0,0,0,0,0,0,0,0};
    int club_num = 0, card_num = 0;
    bool pgame = false, dgame = false;
    int di = 2, pi = 2;
    player_card[0] = getCardNum(true);
    dealer_card[0] = getCardNum(false);
    player_card[1] = getCardNum(true);
    dealer_card[1] = getCardNum(false);
    int choice = 0;
    while (pgame == false || dgame == false)
    {
        if (pgame == false)
        {
            showCards(player_card, 11);

            cout << "Type 1 if you wish to draw another card or 2 if you are done.\n";
            cin >> choice;
            if (choice == 1)
            {
                if (checkSum(player_card, 11) > 21)
                {
                    pgame = true;
                    cout << "Ok you're done.\n";
                }
                else
                {
                    player_card[pi] = getCardNum(true);
                    pi++;
                }
            }
            else if (choice == 2)
            {
                    pgame = true;
                
            }
        }
        if (dgame == false)
        {
            int luck = 21 - rand() % (4), tempsum = checkSum(dealer_card, 11);


            if (tempsum >=21)
            {
                dgame = true;
            }
            else if (luck <= tempsum)
            {
                dgame = true;
            }
            else
            {
                dealer_card[di] = getCardNum(false);
                di++;
            }
        }
    }
    cout << "The game is over now to determine a winner\nThe cards of the player:\n";
    showCards(player_card, 11);
    cout << "Now the cards of the dealer:\n";
    showCards(dealer_card, 11);
    return checkWin(player_card, dealer_card);
}

int main()
{
    const char* suit[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };
    srand(time(0));
    if (blackjack())
    {
        cout << "You have won the game.\n";
    }
    else 
    {
        cout << "You have lost the game.\n";
    }
    return 1;


}