#include <iostream>
#include <cmath>

using namespace std;
void menu();
void taskOne();
void taskTwo();
void taskThree();

int main(){
    menu();
    return 0;
}

void menu(){
    char menuInput;
    cout << "Chose Task: \nTask one: 1 \nTask two: 2\nTask three: 3" << endl;
    cin >> menuInput;

    switch(menuInput){
        case '1':
            taskOne();
            break;
        case '2':
            taskTwo();
            break;
        case '3':
            taskThree();
            break;
        default:
            cout << "Enter valid option";
    }
}

template <typename T>
T square(T num)
{   
    return pow(num, 2);
}
void taskOne(){
    cout << "Enter number: "<< endl;
    double usrInp; 
    cin >> usrInp;
    cout << square(usrInp) << endl;
}
void taskTwo(){
    int x;
    cout << "How many numbers you want to enter: " << endl;
    cin >> x;
    
    double* arr = new double[x];
    cout << "Enter numbers: "<< endl;
    for (int i = 0; i < x; i++){
        double tmpr;
        cin >> tmpr;

        arr[i] = tmpr;
    }
    double sum = 0;
    for (int i = 0; i < x; i++){
        sum = sum + arr[i];
    }
    cout << "Average is: " << sum/x << endl;
    delete[] arr;
    

}
template <typename M>
M maxNum(M x, M y, M z) {
    if (x > y) {
        if (x > z) {
            return x;
        }
        else{
            return z;
        }
    }
}
void taskThree(){
    double numOne, numTwo, numThree;
    cout << "Enter three numbers: "<< endl;
    cin >> numOne >> numTwo >> numThree;
    cout << "Max number is:" << maxNum<double>(numOne, numTwo, numThree) << endl;
}




