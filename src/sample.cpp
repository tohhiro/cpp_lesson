#include <iostream>
using namespace std;

int convertToInt();
int compoundAssignment();
int incrementDecrement();
int inputKey();

int main() {
    // convertToInt();
    // compoundAssignment();
    // incrementDecrement();
    inputKey();
    return 0;
}

int convertToInt(){
    const double pi = 3.14;
    cout << (int)pi << endl;
    return 0;
}

int compoundAssignment(){
    int val = 10;
    val += 1;
    cout << val << endl;
    return 0;
}

int incrementDecrement() {
    int x = 10;
    int y = 10;
    x++;
    y--;
    cout << "x: " << x << "\n";
    cout << "y: " << y << "\n";
    return 0;
}

int inputKey() {
    int x,y;
    cout << "2つの数値を入力してください" << "\n";
    cin >> x >> y;
    cout << "足した数値は" << x + y << "です" << "\n";
    return 0;
}