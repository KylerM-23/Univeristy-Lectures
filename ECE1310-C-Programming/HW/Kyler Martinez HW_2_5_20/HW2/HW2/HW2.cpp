/*Prompt Create A Program that simulates a conversation between the user and a charcater. 
Additional Goal: Get creative and make the setting fantasy*/
#include <iostream>
using namespace std;

int main()
{
    int start = 0;
    char name[80] = "NoName";
    char affinity[80] = "";
    int response = 0;

    cout << "Do you want to play the game? (Type 1 for Yes or 0 for No)\n";
    cin >> start;
    if (start == 0)
    {
        cout << "Ok good bye.";
        return 0;
    }

    else
    {
        cout << "\n\nIn a far away land, you're an explorer who is currenttly resting at a local tavern.\nThe owner walks your way and asks you..\n";
        cout << "Owner: Haven't seen ya around these parts, what's ye name.\n";
        cout << "\nType the name you want to go by.\n";
        cin >> name;
        cout << "\n" << name << ": I go by " << name << " around these parts.\n\n";
        cout << "Owner: I see many people come through here thinking they can claim the Goblin King's Staff and haven't seen any come back.\n";
        cout << "I don't know if yee think you'll be differnt, but I've yet to see someone come in with more than one name.\nYa an Outlaw or something\n";
        cout << "\nWhat are you? Type in the one word to describe you.\n";
        cin >> affinity;
        cout << "\n" << name << ": I'm simply a(n) " << affinity << "\n\n";
        cout << "Choose a dialogue option by typing in the number of the response you want.\n";
        cout << "1. Is that going to be a problem for you?\n2. ....\n";
        cin >> response;
        if (response == 1)
        {
            cout << "\nOwner: What ya are doesn't matter to me a whole much. Just don't cause a problem and you're welcome here.\n";
        }

        if (response == 2)
        {
            cout << "\nOwner: Not much of a talker. Doesn't matter, will still serve ya.\n";
        }

        if (response != 1 && response != 2)
        {
            cout << "\nOwner: If you're just going to start speaking gibberish, just get on out of here.\n";
            cout << "For some reason this really angered the Owner. It didn't matter to you as you went on you're way towards adventure.";
            cout << "The End";
            return 0;
        }

        cout << "Owner: What are your plans for getting the staff.\n";
        cout << "\nHere are your options.\n1. I'm going to sneak in steal it and get out and try not to make much noise\n2. Going in guns blazing, any guards will die by my blade.\n3. I haven't thought that far, I'm, more of a go with the flow.\n";
        response = 0;
        cin >> response;

        if (response == 1)
        {
            cout << "\nOwner: That is honestly, the first time I've heard that plan. It may be best to take that.\n";
        }

        if (response == 2)
        {
            cout << "\nOwner: Every soul who seeks the staff believes that is the best course of action and I haven't seen them return.\n";
        }

        if (response == 3)
        {
            cout << "\nOwner: That is a horrible plan. At least the people who go in thinking they can kill everything have a plan.\nYou will just die in there.\n";
        }
        if (response != 1 && response != 2 && response != 3)
        {
            cout << "\nOwner: If you're just going to start speaking gibberish, just get on out of here.\n";
            cout << "For some reason this really angered the Owner. It didn't matter to you as you went on you're way towards adventure.";
            cout << "The End";
            return 0;
        }

        cout << "\nPress Enter any number continue\n";
        cin >> response;
        cout << "\nOwner: I'm going to have to close soon. I will give you a piece of advice before you go. Don't wake up the goblin horde.\nThey blend into the shadows and they will be the end of you.\n";
        cout << "I wish you the best of luck on your journey and if you make it back with the staff, the next one is on the house.\n";
        cout << "\nYou walk out of the Tavern towards the Great Peaks of the Ancinet Goblin Empire.\nDanger and the unknown await you but the vision of riches and fame draws you in...\n";
        cout << "The End....?\n\n";
        return 0;
    }   
}