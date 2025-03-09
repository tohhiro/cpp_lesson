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
void arrayFunction();
void externalArgsArrayFunc();
void averageFunc();
void pointerFunc();
void swapMainFunc();
void swapFunc(int *x);
void multipleSwapFunc(int x, int y, int *increaseResult, int *decreaseResult);
void multipleSwapMainFunc();
void structFunc();
void userStructFunc();
void userStructFunc2();
void userStructFunc3();

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
    // twiceMessage();
    // arrayFunction();
    // externalArgsArrayFunc();
    // averageFunc();
    // pointerFunc();
    //  swapMainFunc();
    // multipleSwapMainFunc();
    // structFunc();
    // userStructFunc();
    // userStructFunc2();
    userStructFunc3();

    return 0;
}

void userStructFunc3() {
    struct Student {
        int year;
        char name[64];
        double weight;
        double height;
    };

    Student students[2] = {
        {3, "Taro", 70.5, 180.5},
        {2, "Hanako", 50.5, 160.5},
    };

    for(int i=0; i<2; i++){
        cout << students[i].name << "の情報" << "\n";
        cout << "学年は" << students[i].year << "です" << "\n";
        cout << "名前は" << students[i].name << "です" << "\n";
        cout << "体重は" << students[i].weight << "です" << "\n";
        cout << "身長は" << students[i].height << "です" << "\n";
        cout << "------" << "\n";
    }
}

void userStructFunc2() {
    struct Student {
        int year;
        char name[64];
        double weight;
        double height;
    };

    Student Taro = {3, "Taro", 70.5, 180.5};
    Student Hanako = {2, "Hanako", 50.5, 160.5};

    cout << "Taroの情報" << "\n";
    cout << "学年は" << Taro.year << "です" << "\n";
    cout << "名前は" << Taro.name << "です" << "\n";
    cout << "体重は" << Taro.weight << "です" << "\n";
    cout << "身長は" << Taro.height << "です" << "\n";
    cout << "------" << "\n";
    cout << "Hanakoの情報" << "\n";
    cout << "学年は" << Hanako.year << "です" << "\n";
    cout << "名前は" << Hanako.name << "です" << "\n";
    cout << "体重は" << Hanako.weight << "です" << "\n";
    cout << "身長は" << Hanako.height << "です" << "\n";
}

void userStructFunc () {
    struct Student {
        int year;
        char name[64];
        double weight;
        double height;
    };


        struct Student Taro;
        Taro.year = 3;
        cout << "学年は" << Taro.year << "です" << "\n";
}

void structFunc() {
    struct Fruits {
        char name[128];
        int price;
        int stock;
    };

    struct Fruits store = {"apple", 100, 10};
    struct Fruits *pStore = &store;

    // NOTE: 値もアドレスも表示される結果は同じ
    cout << "値より" << "\n";
    cout << "商品名は" << store.name << "\n";
    cout << "値段は" << store.price << "\n";
    cout << "在庫数は" << store.stock << "\n";

    cout << "アドレス（ポインタ）より" << "\n";
    cout << "商品名は" << pStore->name << "\n";
    cout << "値段は" << pStore->price << "\n";
    cout << "在庫数は" << pStore->stock << "\n";
}


void multipleSwapMainFunc(){
    int num1 = 40;
    int num2 = 10;
    int increaseResult = 0;
    int decreaseResult = 0;
    multipleSwapFunc(num1, num2, &increaseResult, &decreaseResult);
    cout << "足し算の結果は" << increaseResult << "\n";
    cout << "引き算の結果は" << decreaseResult << "\n";
}

void multipleSwapFunc(int x, int y, int *increaseResult, int *decreaseResult) {
    *increaseResult = x + y;
    *decreaseResult = x - y;
}

void swapMainFunc() {
    int apple = 10;
    cout << "appleの値は" << apple << "\n";

    swapFunc(&apple); // 参照渡しして、appleの値を変更する
    cout << "appleの値が代わり" << apple << "なった\n";
}

void swapFunc(int *x) {
    *x = 20;
}

void pointerFunc() {
    int num = 10;
    int *pNum = &num;
    cout << "pNumに代入されたアドレスは" << pNum << "\n";
    cout << "numのアドレスは" << &num << "\n";
    cout << "numの値をpNumから表示すると" << *pNum << "\n";
}

int averageCalc(int ary[], int size) {
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += ary[i];
    }
    return sum / size;
}

void averageFunc() {
    int ary[3] = { 12, 34, 56 };
    int size = sizeof(ary) / sizeof(ary[0]);
    int avg = averageCalc(ary, size);
    cout << "平均値は" << avg << "\n";
}

void externalArgsArrayFunc() {
    int ary[5];
    int limit = 5;
    for(int i=0; i<limit; i++){
        cout << i << "番目の数値を入力してください" << "\n";
        cin >> ary[i];
    }

    cout << "入力された数値は" << "\n";
    for(int i=0; i<limit; i++){
        cout << ary[i] << "\n";
    }

}

void arrayFunction(){
    int ary[] = {100, 200, 300};
    for (int i = 0; i < 3; i++){
        cout << ary[i] << "\n";
    }
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