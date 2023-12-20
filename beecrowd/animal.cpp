#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char animal[3][30];    

    cin >> animal[0];
    cin >> animal[1];
    cin >> animal[2];

    if(!strcmp(animal[0], "vertebrado")) {
        if(!strcmp(animal[1], "ave")) {
            if(!strcmp(animal[2], "carnivoro")) {
                cout << "aguia" << endl;
            } else {
                cout << "pomba" << endl;
            }
        } else {
            if(!strcmp(animal[2], "onivoro")) {
                cout << "homem" << endl;
            } else {
                cout << "vaca" << endl;
            }
        }
    } else {    
        if(!strcmp(animal[1], "inseto")) {
            if(!strcmp(animal[2], "hematofago")) {
                cout << "pulga" << endl;
            } else {
                cout << "lagarta" << endl;
            }
        } else {
            if(!strcmp(animal[2], "hematofago")) {
                cout << "sanguessuga" << endl;
            } else {
                cout << "minhoca" << endl;
            }
        }
    }

    return 0;
}