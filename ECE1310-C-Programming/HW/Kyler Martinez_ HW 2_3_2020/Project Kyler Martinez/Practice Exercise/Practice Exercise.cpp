/*Prompt: Create a program that replicates a list of items a customer can order and calculate the total cost of the items purchased. 
Optional Features: Add a tipping service
*/

#include <iostream>
using namespace std;

int main()
{
   int B = 0, BP = 5, S = 0, SP = 2, F = 0, FP = 3, Total = 0, Tip = 0;
   cout << "Welcome to Burgers R U where we serve the best hamburgers in the galaxy, we know this to be true.\n";
   cout << "How many hamburgers would you like?\n";
   cin >> B;
   cout << "How many fries would you like?\n";
   cin >> F;
   cout << "How many drinks would you like?\n";
   cin >> S;
   cout << "Enter the amount of money you will tip.\n";
   cin >> Tip;
   Total = B * BP + F * FP + S * SP+ Tip;
   cout << "\n" << "___________________________\n" << "Bill:\n";
   cout << "___________________________\n";
   cout << "Hamburger:\t" << B << "\t$" << B * BP << "\n";
   cout << "BRU Fries:\t" << F << "\t$" << F * FP << "\n";
   cout << "Soda Pops:\t" << S << "\t$" << S * SP << "\n";
   cout << "___________________________\n";
   cout << "UR Total:\t\t" << "$" <<Total << "\n\n";
   cout << "Thank you we will be seeing you very soon ._." << "\n";
   return 0;

}
