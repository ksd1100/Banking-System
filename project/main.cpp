#include <iostream>
#include <iomanip>
using namespace std;

int choice;
double amount;
double balance = 0.0;

int menu_selector(){
    cout << "===============" << endl;
    cout << "| BANK SYSTEM |" << endl;
    cout << "| 1. Deposit  |" << endl;
    cout << "| 2. Withdraw |" << endl;
    cout << "| 3. Balance  |" << endl;
    cout << "| 4. Exit     |" << endl;
    cout << "===============" << endl;
    cout << "Choose an option: ";
    cin >> choice;
    return 0;
}

int menu_choice(){
    switch (choice){
    case 1:
        cout << "Enter amount to deposit: ";
        cin >> amount;
        if(amount <= 0){
            cout << "Invalid amount. Deposit must be positive." << endl;
        }
        else{
        balance += amount;
        cout << "Deposit successful! New balance: $" << balance << endl;
        }
        break;
    case 2:
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if(amount > balance){
            cout << "Insufficient funds! Withdrawl failed." << endl;
        }else{
        balance -= amount;
        cout << "Withdrawl successful! New balance: $" << balance << endl;
        }
        break;
    case 3:
        cout << "Your current balance is: $" << fixed << setprecision(2) << balance << endl;
        break;
    case 4:
        cout << "Exiting the banking system. Thank you for using our service!" << endl;
        break;
    default:
        cout << "Invalid option. Please choose a valid menu option." << endl;
        break;
    }
    return 0;
}

int main(){
    do{
        menu_selector();
        menu_choice();
    } while (choice != 4);
    return 0;
}
