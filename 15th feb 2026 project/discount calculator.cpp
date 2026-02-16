#include<iostream>
#include<string>

using namespace std;

class Discount {
    private :
        double totalPrice;
    
    public :
        Discount(double price){
            totalPrice = price;
        }
        void applyDiscount(string couponCode){
           if(totalPrice <= 0){
            cout << "enter valid price\n";
            return;
           }
           double discount = 0;
           double finalPrice = 0;
           if(couponCode == "SAVE10"){
                discount = totalPrice * 0.10;
                cout << "You saved :" << discount << "using SAVE10\n";
           }
           else if(couponCode == "SAVE20"){
                discount = totalPrice * 0.20;
                cout << "You saved :" << discount << "using SAVE20\n";
           } 
           else if(couponCode == "FLAT50"){
            if(totalPrice > 50){
                discount = 50;
                cout << "You saved: " << discount << "using FLAT50\n";
            }
            else{
                cout << "FLAT50 is only applicable on price greater than 50\n";
                return;
            }
           }
           else if(couponCode == "SAVE50"){
                discount = totalPrice * 0.5;
                cout << "You saved : " << discount << " using SAVE50\n";
           }
           else{
                cout << "please enter a valid coupon code\n";
                return;
           }
                finalPrice = totalPrice - discount;

                if(finalPrice < 0){
                    finalPrice = 0;
                }
                cout << "The final amount after discount is : " << finalPrice << endl;
        }
};

int main(){
            double price;
            string coupon;

            cout << "enter you product price :\n";
            cin >> price;

            cout << "Enter coupon code :\n";
            cin >> coupon;

            Discount calc(price);
            calc.applyDiscount(coupon);

        return 0;
    }

    // to run this program use this commands :
    // 1. g++ "discount calculator.cpp" -o "discount calculator.exe"
    // 2. & ".\discount calculator.exe"
