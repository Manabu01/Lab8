/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int age, height, bounty;
    string character;
    cout << "Enter your age: ";
    cin >> age;

    if(age > 25 && age <= 60){
        cout << "Enter your bounty: ";
        cin >> bounty;
        if(bounty > 5e8){
            character = "Jinbe";
        }else{
            character = "Franky";
        }
    }else if(age > 60){
        character = "Brook";
    }else{
        cout << "Enter your height: ";
        cin >> height;
        if(height < 180 && height >= 100){
            character = "Usopp";
        }else if(height < 100){
            character = "Chopper";
        }else{
            cout << "Enter your bounty: ";
            cin >> bounty;
            if(bounty > 11e8){
                character = "Zoro";
            }else{
                character = "Sanji";
            }
        }
    }
    cout << "Your character = " << character;
    return 0;
}