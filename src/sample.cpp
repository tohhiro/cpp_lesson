#include <iostream>
#include <iomanip>
using namespace std;

int convertToInt();
int compoundAssignment();
int incrementDecrement();
int inputKey();
int condition();
int conditionSwitch();
int forFunction();
int forDoubleFunction();

int main() {
    // convertToInt();
    // compoundAssignment();
    // incrementDecrement();
    // inputKey();
    // condition();
    // conditionSwitch();
    // forFunction();
    forDoubleFunction();
    return 0;
}

int forDoubleFunction(){
    int i;
    int j;
    int numberOfTImes = 9;
    for(i = 0; i < numberOfTImes; i++ ){
        cout << i + 1 << "の段:";
        for(j = 0; j < numberOfTImes; j++){
            cout << setw(1) << i + 1 <<  " ✖️ " << j + 1 << " = " <<(i+1)*(j+1)<< " | ";
        }
        cout << "\n";
    }
    return 0;
}

int forFunction(){
    int i;
    for(i = 0; i < 5; i++){
        cout << "メッセージ" << i +  1 << "回目\n";
    }
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

int condition() {
    int x;
    cout << "年齢を入力してください" << "\n";
    cin >> x;

    if (x <= 3)
        cout << "0円" << "\n";
    
    else if (x >3 && x < 20 )
        cout << "1000円" << "\n";

    else
        cout << "2000円" << "\n";

    return 0;
}

int conditionSwitch() {

    int num; 
    cout << "数値を入力してください" << "\n";
    cin >> num;

    switch(num){
        case 1:
            cout << "ハリー" << "\n";
            break;
        case 2:
            cout << "ロン" << "\n";
            break;
        case 3:
            cout << "ハーマイオニー" << "\n";
            break;
        default:
            cout << "マルフォイ" << "\n";
            break;
    }
    return 0;

}