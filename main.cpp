// Demonstrates using references

#include <iostream>

using namespace std;

const int INITIAL_DEPOSIT = 500;

int main()
{
	cout << "~ ~ Reference Basics ~ ~\n\n";
    int acct1Balance = INITIAL_DEPOSIT; // sets account 1 balance
    int acct2Balance = acct1Balance ; // assigns account 1 balance to account 2
    int& acct3Balance = acct1Balance ; // creates a reference to account 1
    
    cout << "* * Opening Account Balances * *\n\n";
    cout << "\tAccount 1 Balance $: " << acct1Balance   << "\n";
    cout << "\tAccount 2 Balance $: " << acct2Balance   << "\n";
    cout << "\tAccount 3 Balance $: " << acct3Balance   << "\n\n";
    
    //changing the variable value directly	
    cout << "* * Adding $75 to Account 1 * *\n\n";
    acct1Balance = acct1Balance + 75;
    
  // code the addition here 
	cout << "\tAccount 1 Balance $: " << acct1Balance  << "\n";
    cout << "\tAccount 2 Balance $: " << acct2Balance  << "\n";
    cout << "\tAccount 3 Balance $: " << acct3Balance  << "\n\n";

    // changing the variable value through a reference
    cout << "* * Subtracting $25 to Account 3 * *\n\n";
    
  // code the subtraction here:
  acct3Balance = acct3Balance - 25;

    cout << "\tAccount 1 Balance $: " << acct1Balance  << "\n";
    cout << "\tAccount 2 Balance $: " << acct2Balance  << "\n";
    cout << "\tAccount 3 Balance $: " << acct3Balance  << "\n\n";

    cout << "~ ~ End of Program ~ ~";
    return 0;
}