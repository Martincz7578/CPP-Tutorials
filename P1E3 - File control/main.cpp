#include <iostream>
#include <stdlib.h>
#include <string>
#include <ctime>
#include <fstream>

#define quotes 10

using namespace std;

int main(){
    int targetLine;
    unsigned seed = static_cast<unsigned>(time(0));
    string line;

    srand(seed);

    do{
        ifstream file("quotes.txt");
        if (!file.is_open()) {
            cerr << "Error opening file." << endl;
            return 1;
        }

        targetLine = rand() % quotes + 1;
        for(int i = 0; i < targetLine; i++){
            getline(file, line);
        }
        file.close();
    }while(line == "");
    cout << "Tux the wise: " << line << endl;
    return 0;
}