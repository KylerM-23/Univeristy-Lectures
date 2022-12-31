// Exercise 100.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* p_to_a_node;
};

int main()
{
    Node n1, n2, n3, * t;
    n1.data = 1;
    n2.data = 2;
    n3.data = 3;
    n1.p_to_a_node = &n2;
    n2.p_to_a_node = &n3;
    n3.p_to_a_node = &n1;
    t = &n1;
    
    for (int i = 1; i <= 4; i++)
    {
        cout << t->data << " ";
        t = t->p_to_a_node;
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
