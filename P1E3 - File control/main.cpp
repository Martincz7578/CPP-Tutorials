#include <iostream>
#include <stdlib.h>
#include <fstream>

#define quotes 20;

using namespace std;

int main(){
    int targetLine;
    unsigned seed = static_cast<unsigned>(time(0));
    string line;
    srand(seed);
    do{
        ifstream file("quotes.txt", ios::in | ios::binary);
        if (!file) {
            cerr << "Error opening file" << endl;
            return 1;
        }
        targetLine = rand() % quotes + 1;
        for(int i = 1; i < targetLine; i++){
            getline(file, line);
        }
        file.close();
    }while(line == "");
    cout << line << endl;
    return 0;
}