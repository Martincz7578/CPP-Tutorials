#include <iostream>
#include <thread>
#include <chrono>

#include "OOP.cpp"

using namespace std;

int main(){
    bank bank("test");
    for(int i = 0; i < 10; i++){
        this_thread::sleep_for(chrono::seconds(i));
        cout << "Test balance: " << bank.getBalance() << endl;
    }
    return 0;
}