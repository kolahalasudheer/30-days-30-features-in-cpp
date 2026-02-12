#include<iostream>
#include<string>

using namespace std;

class digitalWallet {
    private:
        string ownerName;
        double balance;

    public:
        digitalWallet(string name, double initialBalance){
            ownerName = name;
            balance = initialBalance;
        }

        // feature 1 : add money to the wallet
        void addMoney(){
            double amount;

            cout << "enter the amount to add : \n";
            cin >> amount;

            if(amount <= 0){
                cout << "Invalid amount\n";
                return;
            }

            balance += amount;
            cout <<"Money added successfully to your wallet\n";
            cout << "your current balance is :" << balance << endl;
        }
        // feature 2 : spending money from the wallet
        void spendMoney(){
            double amount;

            cout << "Enter the amount to spend : \n";
            cin >> amount;
            if(amount <= 0){
                cout << "Invalid amount to spend\n";
                cout << "Min amount to spend is 1 rupee";
                return;
            }
            if(amount > balance){
                cout << "Insufficent funds\n";
                return;
            }
            balance -= amount;
            cout << "Transaction Successful\n";
            cout << "Your current balance is " << balance << endl;
            }

        // feature 3 : check balance 
        void checkBalance(){
            cout << "Your current balance is " << balance << endl;
            }
        };     

        int main (){
            string name;
            double initialBalance;

            cout << "Enter the Owener name\n";
            cin >> name;

            cout << "enter the inital balance\n";
            cin >> initialBalance;

            digitalWallet wallet(name, initialBalance);

            int choice;

            do {
                cout << "\n1. add money\n";
                cout << "2. spend money\n";
                cout << "3. check balance\n";
                cout << "4. exit\n";
                cout << "Enter your choice: ";
                cin >> choice;

                switch(choice) {
                    case 1 :
                        wallet.addMoney();
                        break;
                    case 2 :
                        wallet.spendMoney();
                        break;
                    case 3 :
                        wallet.checkBalance();
                        break;
                    case 4 : 
                        cout << "Exiting...\n";
                        break;
                    default:
                        cout << "Enter a valid choice\n";
                }
            }   while(choice != 4);
            return 0;
        }