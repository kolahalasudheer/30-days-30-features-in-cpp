#include<iostream>
#include<string>
#include<fstream>
#include<cctype>

using namespace std;

class Account {
    private:
        string storedPassword;

    public:
        Account(string initialPassword){
            storedPassword = initialPassword;
        }

        bool has_upper_and_digit(string newPassword){
            bool hasUpper = false;
            bool hasDigit = false;

            for(char ch : newPassword){
                if(isupper(ch)) {
                    hasUpper = true;
                }
                if(isdigit(ch)) {
                    hasDigit = true;
                }
                if(hasUpper && hasDigit){
                    return true;
                }
            }
            return false;
        }

        // Feature: Change Password
        void changePassword() {
            string oldPassword;
            string newPassword;
            cout << "Enter you old password\n";
            cin >> oldPassword;

            if(oldPassword != storedPassword){
                cout << "Invalid password\n";
                return;
            }

            cout << "enter New Password\n";
            cin >> newPassword;

            if(newPassword == oldPassword){
                cout << "The new password can't be same as old password, Please enter a new password\n";
                return;
            }

            if(newPassword.size() < 6){
                cout << "password should contain minimum 6 characters\n";
                return;
            }
            if(has_upper_and_digit(newPassword) == false){
                cout << "password must contain atleast 1 Captial and 1 Number in it\n";
                return;
            }
            storedPassword = newPassword;
            cout << "password has been changed successfully\n";

    }
};

    int main(){
        string initialPassword;

        cout << "Set initial password\n";
        cin >> initialPassword;

        Account acc(initialPassword);

        int choice;
        do{
            cout << "1. change password\n";
            cout << "2.exit\n";
            cout << "enter choice\n";
            cin >> choice;

            switch(choice){
                case 1 :
                    acc.changePassword();
                    break;
                case 2 :
                    cout << "Exiting...\n";
                    break;
                default :
                    cout << "enter a valid choice\n";
            }
        } while(choice != 2);
        
        return 0;
    }
    
    