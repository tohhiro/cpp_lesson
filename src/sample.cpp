#include <iostream>
#include <iomanip>
using namespace std;

void convertToInt();
void compoundAssignment();
void incrementDecrement();
void inputKey();
void condition();
void conditionSwitch();
void forFunction();
void forDoubleFunction();
void whileFunction();
void doWhileFunction();
void twiceMessage();
void twiceFunction(int num1, int num2);

int main() {
    // convertToInt();
    // compoundAssignment();
    // incrementDecrement();
    // inputKey();
    // condition();
    // conditionSwitch();
    // forFunction();
    // forDoubleFunction();
    // whileFunction();
    // doWhileFunction();
  
    twiceMessage();
    return 0;
}

void twiceMessage(){
    int num1, num2;
    cout << "1つめの数値を入力してください" << "\n";
    cin >> num1;
    cout << "2つめの数値を入力してください" << "\n";
    cin >> num2;
    twiceFunction(num1, num2);
}

void twiceFunction(int num1, int num2) {
    cout << (num1  + num2) * 2 << "\n";
}

void doWhileFunction() {
    int num = 10;
    do {
        cout << "メッセージ" <<  "\n";
    }while (num < 5);
    
}

void whileFunction() {
    int num = 1;
    int count = 0;
    while(num < 1000){
        num *= 2;
        count++;
        cout << count << "回目" << num << "\n";
    }
    cout << count << "回目で1000を超えます" << "\n";

}

void forDoubleFunction(){
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
}

void forFunction(){
    int i;
    for(i = 0; i < 5; i++){
        cout << "メッセージ" << i +  1 << "回目\n";
    }
}

void convertToInt(){
    const double pi = 3.14;
    cout << (int)pi << endl;
}

void compoundAssignment(){
    int val = 10;
    val += 1;
    cout << val << endl;
}

void incrementDecrement() {
    int x = 10;
    int y = 10;
    x++;
    y--;
    cout << "x: " << x << "\n";
    cout << "y: " << y << "\n";
}

void inputKey() {
    int x,y;
    cout << "2つの数値を入力してください" << "\n";
    cin >> x >> y;
    cout << "足した数値は" << x + y << "です" << "\n";
}

void condition() {
    int x;
    cout << "年齢を入力してください" << "\n";
    cin >> x;

    if (x <= 3)
        cout << "0円" << "\n";
    
    else if (x >3 && x < 20 )
        cout << "1000円" << "\n";

    else
        cout << "2000円" << "\n";

}

void conditionSwitch() {

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

}