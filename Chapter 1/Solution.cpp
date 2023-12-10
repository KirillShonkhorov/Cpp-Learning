#include <iomanip>
#include <iostream>
#include <cmath>
#include <iterator>
#include <ostream>
#include <string>

using namespace std;

void ArithmeticOperations(); void If_ElseConstructions(); void Cycles(); void Arrays(); void SymbolArrays();

int main(){
    //ArithmeticOperations();
    //If_ElseConstructions();
    //Cycles();
    //Arrays();
    //SymbolArrays();
    return 0;
}

void ArithmeticOperations(){
    cout << "Arithmetic Operations: " << endl << endl;

    //Exercise 1
    cout << "Exercise 1:" << endl;
    
    unsigned int Meters {};

    cout << "Input Meters: ";
    cin >> Meters;
    cout << Meters / 1000 << " Kilometers and " << Meters % 1000 << " Meters." << endl;


    cout << endl;

    //Exercise 2
    cout << "Exercise 2:" << endl;

    const float PI_VALUE {3.14f};
    float Radius {};

    cout << "Input Radius: ";
    cin >> Radius;
    cout << "Square = " << static_cast<double>(PI_VALUE * (pow(Radius,2))) << endl;

    cout << endl;

    //Exercise 3
    cout << "Exercise 3:" << endl;

    float Dollar {}, Rub {};


    cout << "Dollar exchange rate: ";
    cin >> Dollar;
    cout << "Count  of Rubles: ";
    cin >> Rub;

    cout << "Count of dollars: " << setprecision(3) <<Rub / Dollar << endl;

    cout << endl;

    ////Exercise 4
    cout << "Exercise 4" << endl;

    float Height {}, Weight {};

    cout << "Input your Height (santimeters): ";
    cin >> Height;
    cout << "Input your Weight: ";
    cin >> Weight;

    cout << "Your BMI is: " << Weight / pow(Height / 100, 2) << endl;

    cout << endl;
}

void If_ElseConstructions(){
    cout << "If-Else Constructions: " << endl << endl;

    //Exercise 1
    cout << "Exercise 1:" << endl;

    int A{}, B{};

    cout << "Input A and B number:"<< endl;
    cout << "A: "; cin >> A;
    cout << "B: "; cin >> B;

    if(A == B) cout << A << " = " << B << endl;
    else cout << A << " != " << B << endl;

    cout << endl;

    //Exercise 2
    cout << "Exercise 2:" << endl;

     int A1{}, B1{};

    cout << "Input A and B number:"<< endl;
    cout << "A: "; cin >> A1;
    cout << "B: "; cin >> B1;

    if(B1 == 0) cout << "B = 0!";
    else if(A1 % B1 == 0) cout << "A and B is devisible!";
    else cout << "A and B is not devisible!";

    cout << endl;

    //Exercise 3
    cout << "Exercise 3:" << endl;

    unsigned int A2{};

    cout << "Input A number:"<< endl;
    cout << "A: "; cin >> A2;

    if(A2 > 0 && A2 < 101){
        if(A2 > 50) cout << "A > 50" << endl;
        else if (A2 == 50) cout << "A = 50" << endl;
        else cout << "A < 50" << endl;
    }
    else cout << "A < 1 OR A > 100" << endl;
    
    cout << endl;

    //Exercise 4
    cout << "Exercise 4:" << endl;

   int A3,B3;

    cout << "Input A and B number:"<< endl;
    cout << "A: "; cin >> A3;
    cout << "B: "; cin >> B3;

    A3 == B3? cout << A3 << " = " << B3 << endl 
    : A3 > B3?  cout << A3 << " > " << B3 << endl : cout << A3 << " < " << B3 << endl;

    cout << endl;
}

void Cycles(){
    cout << "If-Else Constructions: " << endl << endl;

    //Exercise 1
    cout << "Exercise 1:" << endl;

    unsigned int UpEnd {};

    cout << "Input Up Ender number: "; cin >> UpEnd;

    for(unsigned int i {}; i <= UpEnd; i++){
        if(i % 2 == 0) cout << pow(i ,2) << " - ";
    }

    cout << endl;

    //Exercise 2
    cout << "Exercise 2:" << endl;

    char InputNum{};
    int i = 0;
    cout << "Input symbols:" << endl;

    do{
        cin >> InputNum;
        i++;
    }
    while(InputNum != '.');
    
    cout << "Count Symbols: " << --i << endl;

    //Exercise 3
    cout << "Exercise 3:" << endl;

    cout << "Input Numbers:" << endl;
    int InputNum2 = 0, iterator {};
    double Summ {0};
    char Symbol {};

    while (true) {
        cin >> InputNum2;
        Summ += InputNum2;
        iterator++;

        cout << "It's enough? 'Y/y' or 'N/n': ";
        cin >> Symbol;
        if(Symbol == 'Y' || Symbol == 'y'){
            cout << "Summ = " << Summ << "\tCount of number = " << iterator << "\tAverage = " << static_cast<double>(Summ / iterator) << endl;
            break; 
        }
    }

    cout << endl;
}

void Arrays(){
    cout << "Arrays:" << endl << endl;

    //Exercise 1
    cout << "Exercise 1:" << endl;


    const short MAX_LENGTH {10};
    int Array[MAX_LENGTH]{};

    cout << "Input number in array: " << endl;
    for (int i : Array){
        cin >> i;
    }
    cout << endl << "Array [::-1] = " << endl;
    for (int i {size(Array)}; i > 0; i--){
        cout << i << " - ";
    }

    cout << endl;
}

void SymbolArrays(){
    cout << "Symbol Arrays:" << endl << endl;

    //Exercise 1
    cout << "Exercise 1:" << endl;

    const short MAX_LENGTH{50};
    char SymbolArr[MAX_LENGTH];
    short count {};

    cout << "Input symbol array:" << endl;
    cin.getline(SymbolArr,MAX_LENGTH);

    for(int i {}; i < static_cast<int>(size(SymbolArr)) && SymbolArr[i] != '\0';i++) count++;
    cout << "Count symbols in array: " << count << endl;

    for (int i {count}; i >= 0 ; i--) cout << SymbolArr[i];
    
    cout << endl;
}