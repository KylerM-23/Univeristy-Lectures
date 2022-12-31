#include <iostream>
using namespace std;

int main()
{
    //Ways program will stop: Saying you are a returning user,yping incorrect login information. Other than that everything else will run without issues.
    //temp variables are temporary variables that are only nesscary for decision making.
    //Note you must type in your login information correct or you will be booted from the program, make easier nonzero pins and account numbers

    float balance = 0;
    unsigned int account_number = 0;
    int pin = 0, tempn = 0;
    char name[80];
    char tempc;
    cout << "________________\n|   O     O    |\n|              |\n|              |\n|   |_____|    |\n|              | \n\n";
    cout << "Welcome to Bank of Utopias, are you a returning user? \nType Y or N\n";
    cin >> tempc;
    if (tempc == 'Y' || tempc == 'y')
    {
        cout << "________________\n|   O     O    |\n|              |\n|              |\n|    _____     |\n|   |     |    |\n";
        cout << "\nSorry there is no user data in the system.\nGoodbye\n";
        return 0;
    }
    cout << "Welcome new user, we will begin the creation of your account. Please type in your name:\n";
    cin >> name;
    cout << "________________\n|   O     O    |\n|              |\n|              |\n|   |_____|    |\n|              |\n";
    cout << "\nHello " << name << " I am glad you choose us as your bank.\nPlease choose an account number. Only numbers of 5 digits or more work. Note really long numbers may not work.\n";
    while (tempn == 0)
    {
        int check = 0;
        cin >> account_number;
        check = account_number / (10000);
        if (check != 0)
        {
            tempn = 1;
        }
        else
        {
            cout << "That number won't work, enter a new one:\n";
        }
    }
    cout << "Your account number is " << account_number<<"\n\n";
    cout << "Now we will make you a pin. Please type in a pin of 4 or more digits, don't forget it.\n";
    tempn = 0;
    while (tempn == 0)
    {
        int check = 0;
        cin >> pin;
        check = pin / (1000);
        if (check != 0)
        {
            tempn = 1;
        }
        else
        {
            cout << "That pin won't work, enter a new one:\n";
        }
    }
    cout << "Your pin is " << pin << "\n\n";
    tempc = 'N';

    cout << "Now we will login into your account to confirm your details:\nEnter your account number: ";
    cin >> tempn;
    if (tempn != account_number)
    {
        cout << "________________\n|   O     O    |\n|              |\n|              |\n|    _____     |\n|   |     |    |\n";
        cout << "That is incorrect, goodbye.\n";
        return 0;
    }
    cout << "\nEnter your pin number: ";
    cin >> tempn;
    if (tempn != pin)
    {
        cout << "________________\n|   O     O    |\n|              |\n|              |\n|    _____     |\n|   |     |    |\n";
        cout << "That is incorrect, goodbye.\n";
        return 0;
    }
    cout << "\n";

    while (tempc != 'Y')
    {
        int action = 0;
        char word = 'Y';

        cout << "Welcome to the bank interface here are your options for actions.\n";
        cout << "1.Check Balance\n2.Deposit\n3.Withdrawl\n4.Exit Program\nType the number for the action you want to complete ";
        cin >> action;
        cout << "\n\n";
        switch (action)
        {
            case (1):
                cout <<"Your balance is "<<balance<<"\n";
                cout << "Would you like to make another transaction? Type Y or N\n";
                cin >> word;
                if (word == 'N' || word == 'n')
                {
                    cout << "We will process your transactions.\n";
                    tempc = 'Y';
                }
                break;
            case(2):
                cout << "Enter the amount of money you wish to deposit: ";
                cin >> tempn;
                cout << "\n";
                if (tempn < 0)
                {
                    cout << "________________\n|   O     O    |\n|              |\n|              |\n|    _____     |\n|   |     |    |\n";
                    cout << "You can't add negative numbers!\n";
                }
                else 
                {
                    balance = balance + tempn;
                    cout << "Deposit complete.\n";
                    cout << "Would you like to make another transaction? Type Y or N\n";
                    cin >> word;
                    if (word == 'N' || word == 'n')
                    {
                        cout << "We will process your transactions.\n";
                        tempc = 'Y';
                    }

                }
                break;
            case(3):
                cout << "Enter the amount of money you wish to withdraw: ";
                cin >> tempn;
                cout << "\n";
                if (tempn < 0)
                {
                    cout << "________________\n|   O     O    |\n|              |\n|              |\n|    _____     |\n|   |     |    |\n";
                    cout << "You can't withdraw negative numbers!\n";
                }
                else
                {
                    if (balance - tempn <0)
                    {
                        cout << "You don't have enough money to withdraw that amount.\n";
                    }
                    else
                    {
                        balance = balance - tempn;
                        cout << "Withdrawl complete.\n";
                    }
                }
                cout << "Would you like to make another transaction? Type Y or N\n";
                cin >> word;
                if (word == 'N' || word == 'n')
                {
                    cout << "We will process your transactions.\n";
                    tempc = 'Y';
                }
                break;
            case (4):
                cout << "Thank you for using the program, we hope to see you again soon.\n";
                tempc = 'Y';
                break;
            default:
                cout << "________________\n|   O     O    |\n|              |\n|              |\n|    _____     |\n|   |     |    |\n";
                cout << "We did not understand your input.\n";
                break;
        }


    }
    cout << "Good bye " << name << " have a great day.\n\n";
    cout << "________________\n|   O     O    |\n|              | /\n|              |/\n|   |_____|    |\n|              | \n\n";
    cout << "~~~~~~~~~~~~~~\n~~~~Recipt~~~~\nAccount :" << account_number << "\nBalance:" << balance << "\n~~~~~~~~~~~~~~\n~~~~~~~~~~~~~~\n";

}
