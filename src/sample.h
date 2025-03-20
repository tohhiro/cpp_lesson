#include <iostream>
using namespace std;

class Student {
    public:
        int num;
        int year;
        void show(){
            cout << "番号" << num << "\n";
            cout << "年齢" << year << "\n";
        };
};


class Student2 {
    private:
        int num;
    public:
        void setNum(int x){
            num = x;
        };
        int getNum(){
            return num;
        };
        void show(int x){
            cout << "番号" << x << "\n";
        };
};