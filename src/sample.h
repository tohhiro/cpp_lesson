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
            if(x > 0 && x < 100)
                num = x;
            else
                num = 0;
        };
        int getNum(){
            return num;
        };
        void show(int x){
            cout << "番号" << x << "\n";
        };
};

class Student3 {
    public:
        int num;
        Student3(int x);
};

Student3::Student3(int x){
    num = x;
}