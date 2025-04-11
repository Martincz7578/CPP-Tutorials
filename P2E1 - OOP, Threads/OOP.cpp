#include <iostream>
#include <thread>
#include <chrono>
#include <atomic>
#include <string>

using namespace std;

class bank{
    private:
        string name;
        double balance;
        thread interestThread;
        atomic<bool> running;
        double interestRate = 0.05;

        void addInterest(){
            while(running){
                this_thread::sleep_for(chrono::seconds(1));
                balance *= (1 + interestRate);
            }
        }

        public:
            bank(string n) : name(n), balance(1000), running(true){
                interestThread = thread(&bank::addInterest, this);
                interestThread.detach();
            }

            double getBalance(){
                return balance;
            }
};