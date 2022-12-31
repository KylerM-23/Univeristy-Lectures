// Final Pratice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
using namespace std;
struct Game_Char
{
    string name;
    int HP;
    int DP;
    int AC;
    int Meds;
    int HPMAX;
};

void Fight(Game_Char &player, Game_Char enemies[], int number)
{
    int temp = 0, temp2 = 0;
    int choice = rand() % (101), flip = rand() % (5);
    if (choice <= player.AC)
    {
        if (flip == 1)
        {
            temp = (2*player.DP);
            if (temp < 0)
            {
                temp = 0;
            }
            enemies[number].HP = enemies[number].HP - temp;
            cout << "Critical Strike, " << player.name << " has attacked the enemy for " << enemies[number].HP - temp << " health points\n";
        }
        else
        {
            temp = (player.DP);
            if (temp < 0)
            {
                temp = 0;
            }
            enemies[number].HP = enemies[number].HP - temp;
            cout <<  player.name <<" has attacked the enemy for " << enemies[number].HP - temp << " health points\n";
        }
        
    }
    else
    {
        cout <<  player.name <<" missed\n";
    }
    
    if (enemies[number].HP <= 0)
    {
        return;
    }
    
    choice = rand() % (101);
    flip = rand() % (5);

    if (choice <= enemies[number].AC)
    {
        if (flip == 1)
        {
            temp = (2 * enemies[number].DP);
            if (temp < 0)
            {
                temp = 0;
            }
            player.HP = player.HP - temp;
            cout << "Critical Strike, the enemy has attacked " << player.name << " for " << enemies[number].HP - temp << " health points\n";
        }
        else
        {
            temp = (enemies[number].DP);
            if (temp < 0)
            {
                temp = 0;
            }
            temp2 = player.HP;
            player.HP = temp2 - temp;
            cout << "The enemy has attacked "<<  player.name <<" for " << enemies[number].HP - temp << " health points\n";
            cout << player.name << " has " << player.HP << " health points left\n";
        }

    }
    
    else
    {
        cout << "The enemy missed\n";
    }
    return;
}
bool Chec_Enemies(Game_Char enemies[])
{
    for (int i = 0; i < 10; i++)
    {
        if (enemies[i].HP > 0)
        {
            return false;
        }
    }
    return true;
}
bool Game(Game_Char &player, Game_Char enemies[])
{
    int option = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << player.name<< " has " << player.HP << " health points\n";
        cout << "An enemy approached prepare for battle\n";
        Fight(player, enemies, i);

        if (player.HP <= 0)
        {
            return false;
        }
        cout << "Your health is at " << player.HP << " type 1 to use a medkit and heal yourself.\n";
        cin >> option;
        if (option == 1)
        {
            player.Meds = player.Meds - 1;
            player.HP = player.HPMAX;
            cout << "You have " << player.Meds << " medkits left.\n";
        }
    }
    
    if (Chec_Enemies(enemies) == true)
    {
        return true;
    }
}
int main()
{
    srand(time(0));
    int option = 0, diff;
    cout << "Welcome to the game Battle Arena 2\nEnter 1 for easy, 2 for medium, and 3 for hard difficulty\n";
    cin >> option;
    if (option == 1)
    {
        diff = 20;
    }
    else if (option == 2)
    {
        diff = 50;
    }
    else
    {
        diff = 100;
    }
    
    Game_Char enemies[10], player;
    player.HP = 200;
    player.HPMAX = 200;
    player.DP = 50;
    player.AC = 80;
    player.Meds = 3;
    cout << "We must take your name great warrior, please write your name and you will be allowed into the arena,\nwhere many enter and only one returns...\n";
    cin >> player.name;
    cout << "Ladies and gentleman welcome to the great battle royale that will excite you for days to come. Now " << player.name << " must begin the salughter..\n";
    for (int i = 0; i < 10; i++)
    {
        enemies[i].HP = 200 + diff;
        enemies[i].DP = 50 + rand() % 7;
        enemies[i].AC = 50 + rand() % 11;
        enemies[i].name = "Bad Guy";
    }

    if (Game(player, enemies) == true)
    {
        cout << "Congrats, despite all odds you won the victor of the arena\n";
    }
    else
    {
        cout << "What a pity I thought a being out of this world would overcome such a barbaric ordeal...\n";
    }
    
}

