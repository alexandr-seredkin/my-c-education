#include <iostream>

using namespace std;

void showBalance(double balance);
double incrementBalance(double balance);
double decrementBalance(double balance);

int main()
{
    double balance = 0;

    while (true)
    {
        int action;
        cout << "What do u want?"
             << "\n";
        cout << "1. Get balance"
             << "\n";
        cout << "2. Get money from the bill"
             << "\n";
        cout << "3. Add money to the bill"
             << "\n";
        cin >> action;

        cin.clear();
        cin.ignore();
        fflush(stdin);

        switch (action)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance = decrementBalance(balance);
            break;
        case 3:
            balance = incrementBalance(balance);
            break;
        default:
            cout << "Unknown action"
                 << "\n";
            break;
        }
    }
    return 0;
}

void showBalance(double balance)
{
    cout << "Your balance is: " << balance << '\n';
}
double incrementBalance(double balance)
{
    double count;
    cout << "What summ do u want to add? \n";
    cin >> count;
    if (count < 0)
    {
        cout << "You can't add" << count << "$ to balance, please \n";
        cout << "type positive number";
        return balance;
    }
    balance += count;
    cout << "Your balance is: " << balance << '\n';
    return balance;
}

double decrementBalance(double balance)
{
    double count;
    cout << "What summ do u want a get? \n";
    cin >> count;
    if (count < 0)
    {
        cout << "You can't add" << count << "$ to balance, please \n";
        cout << "type positive number";
        return balance;
    }
    if (balance > count)
    {
        balance -= count;
        cout << "Your balance is: " << balance << '\n';
    }
    else
    {
        cout << "You dont have a " << count << "$ on balance"
             << "\n";
    }
    return balance;
}