#include <iostream>

using namespace std;

int main(){
    double a, b;
    char op;
    bool repeat = true;
    char choice;

    do{
        cout << "Enter first number: " << endl;
        cin >> a;
        if(cin.fail()){
            cout << "Error: Invalid input!" << endl;
            return 1;
        }
        cout << "Enter operator: " << endl;
        cin >> op;
        if(cin.fail()){
            cout << "Error: Invalid input!" << endl;
            return 1;
        }
        cout << "Enter second number: " << endl;
        cin >> b;
        if(cin.fail()){
            cout << "Error: Invalid input!" << endl;
            return 1;
        }

        switch(op){
            case '+':
                cout << a << " + " << b << " = " << a + b << endl;
                break;
            case '-':
                cout << a << " - " << b << " = " << a - b << endl;
                break;
            case '*':
                cout << a << " * " << b << " = " << a * b << endl;
                break;
            case '/':
                if(b != 0)
                    cout << a << " / " << b << " = " << a / b << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;
            case ':':
                if(b != 0)
                    cout << a << " : " << b << " = " << a / b << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;
            default:
                cout << "Error: Invalid operator!" << endl;
                return 1;
                break;
        }
        cout << "Do you want to perform another calculation? (y/n): " << endl;
        cin >> choice;
        if(choice == 'y' || choice == 'Y'){
            repeat = true;
        }else{
            repeat = false;
        }
    }while(repeat);
    return 0;
}