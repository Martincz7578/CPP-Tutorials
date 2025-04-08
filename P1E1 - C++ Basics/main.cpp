#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>

using namespace std;

int main(){
    int a = -5;
    long int b = 10;
    short unsigned int c = 15;
    long long signed int d = 20;
    char g = 'a';
    float f = 3.14;
    double e = 3.1415;
    bool h = true;
    string q = "Hello World!";
    
    printf("%d\n %d\n %d\n %d\n %c\n %f\n %f\n %d\n %s\n", a, b, c, d, g, f, e, h, q);

    int x[] = {1, 2, 3, 4, 5};

    for(int i = 0; i < 5; i++){
        printf("%d\n", x[i]);
    }

    vector<string> v = {"Hello", "World", "!"};

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }

    return 0;
}