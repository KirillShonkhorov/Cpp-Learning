#include <clocale>
#include <iostream>

using namespace std;

void Exercise1();

int main(){
    Exercise1();
}

void Exercise1(){
    setlocale(LC_ALL, "ru");
    cout << "ААББ";
}