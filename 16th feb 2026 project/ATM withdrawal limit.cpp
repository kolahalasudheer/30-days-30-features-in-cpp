/*Feature Goal : 

A bank account has:
Current balance
Daily withdrawal limit (example: ₹20,000)
Amount withdrawn today

User can withdraw multiple times in a day, but:
Total withdrawals in a day must NOT exceed daily limit
Cannot withdraw more than available balance
*/

#include <iostream>
#include <string>

using namespace std;

class ATMAccount {
    private:
        double balance;
        double dailyLimit;
        double withdrawToday;
    public:
        ATMAccount(double initialBalance, double limit){
            balance = initialBalance;
            dailyLimit = limit;
            withdrawToday = 0;
        }
        // Feature: Withdraw Money
        void withdraw(double amount) {
            if(amount <= 0){
                cout << "Please enter valid amount for withdrawal\n";
                return;
            }
            else if(withdrawToday >= dailyLimit){
                cout << "You have reached today's limit of " << dailyLimit << endl;
                return;
            }
            else if(withdrawToday + amount > dailyLimit){
                cout << "You cannot withdraw. It is exceeding the DailyLimit\n";
                return;
            }
            else if(amount > balance){
                cout << "Insufficient funds\n";
                return;
            }
            else{
                balance -= amount;
                withdrawToday += amount;
                cout << "Transaction Successful\n";
            }

    }
    void showStatus() {
                cout << "Your current Balance is : " << balance << endl;
                cout << "withdrawn Today: " << withdrawToday << endl;
                cout << "Daily Limit: " << dailyLimit << endl;
            }
};
    int main() {
        double balance, limit;

        cout << "Enter initial Balance: \n";
        cin >> balance;

        cout << "Enter daily withdrawal amount: \n";
        cin >> limit;

        ATMAccount account(balance, limit);

        int choice;
        double amount;

        do{
            cout << "1. Withdrawal\n";
            cout << "2.Show Account Status\n";
            cout << "3.Exit\n";
            cout << "Enter your choice: \n";
            cin >> choice;

            switch(choice){
                case 1:
                    cout << "Enter withdrawal amount: \n";
                    cin >> amount;
                    account.withdraw(amount);
                    break;
                case 2:
                    account.showStatus();
                    break;
                case 3:
                    cout << "Exiting...\n";
                    break;
                default:
                    cout << "Please Enter a valid choice\n";
            }
        }   while(choice != 3);
        return 0;
    }