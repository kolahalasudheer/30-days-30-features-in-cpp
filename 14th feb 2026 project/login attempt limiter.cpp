// Feature: Login System with 3 Attempt Limit
    //Feature Requirements

    //When user tries to login:

    //1️⃣ If account is locked →
    //  Print: "Account is locked"
    // Stop.

    //2️⃣ Ask user to enter password.

    //3️⃣ If password is correct →
    //Print: "Login successful"
    //Reset failedAttempts to 0.

    //4️⃣ If password is incorrect →
    //Increase failedAttempts by 1.
    //Print remaining attempts.

    //5️⃣ If failedAttempts reaches 3 →
    //Set isLocked = true


#include<iostream>
#include<string>
#include<cctype>
#include<fstream>

using namespace std;

class Account {
    private:
        string storedPassword;
        int failedAttempts;
        bool isLocked;
    public:
        Account(string initialPassword){
            storedPassword = initialPassword;
            failedAttempts = 0;
            isLocked = false;
        }
        // Feature: Login (only ONE attempt per call)
        void login() {
            if(isLocked == true){
                cout << "Your account has been Locked. Please try after some time\n";
                return;
            }
            string currentPassword;
            cout << "Enter your Password :\n";
            cin >> currentPassword;
            if(currentPassword == storedPassword){
                cout << "Login Successful\n";
                failedAttempts = 0;
                return;
            }
            else {
                failedAttempts += 1;
                cout << "Incorrect Password\n";
                if(failedAttempts >= 3){
                    isLocked = true;
                    cout << "Your account has been locked due to 3 failed attempts.\n";
                    return;
                }
                cout << "Remaining attempts are : " << (3 - failedAttempts) << endl;
            }
        }
    };

    int main(){
        string initialPassword;
        cout << "enter your initial password :\n";
        cin >> initialPassword;

        Account acc(initialPassword);

        int choice;

        do{
            cout << "1. Login\n";
            cout << "2.Exit\n";
            cout << "Enter your choice :\n";
            cin >> choice;

            switch(choice){
                case 1:
                    acc.login();
                    break;
                case 2:
                    cout << "Exiting...\n";
                    break;
                default:
                    cout << "Please enter valid choice \n";
            }
        } while(choice != 2);
        return 0;
    }

    // to run this project use this commands
    //g++ "login attempt limiter.cpp" -o "login attempt limiter.exe"
    // & ".\login attempt limiter.exe"