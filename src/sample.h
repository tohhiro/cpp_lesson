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

class Teacher : public Student {
    public:
        int num2;
        void show2(){
            cout << "番号" << num2 << "\n";
        }
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
        Student3();
        Student3(int x);
        ~Student3();
        Student3(const Student3 &obj);
};

Student3::Student3(){
    num = 0;
}
Student3::Student3(int x){
    num = x;
}

Student3::~Student3(){
    cout << "デストラクタが呼ばれました" << "\n";
}

Student3::Student3(const Student3 &obj){
    cout << "コピーコンストラクタが呼ばれました" << "\n";
}

