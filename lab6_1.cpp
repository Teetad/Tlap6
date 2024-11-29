#include<iostream>
using namespace std;

int input_user;
int even_num = 0;
int odd_num = 0;

void counting(){
    cout << "Enter an integer: ";
    cin >> input_user;
        while(input_user != 0){
            if (input_user % 2 == 0){
                even_num++;
            }
            else{
                odd_num++;
            }
            cout << "Enter an integer: ";
            cin >> input_user;
        }
}

int main(){
    counting();
    cout << "#Even numbers = "<< even_num << "\n";
    cout << "#Odd numbers = "<< odd_num;
    return 0;
}
