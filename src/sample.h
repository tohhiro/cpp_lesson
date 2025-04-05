#include <iostream>
using namespace std;

class Student {
    public:
        static int grade;
    protected:
        int num;
        int year;
};

int Student::grade = 3;
class Teacher : public Student {
    public:
        void show2(int n, int y){
            num = n;
            year = y;
            cout << "番号" << num << "\n";
            cout << "年齢" << year << "\n";
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

class OldClass {
    public:
        OldClass();
        OldClass(int x);
};

OldClass::OldClass(){
    cout << "古いコンストラクタが呼ばれました" << "\n";
}

OldClass::OldClass(int x){
    cout << x << ": 引数を持つコンストラクタが呼ばれました" << "\n";
}

class NewClass : public OldClass {
    public:
        NewClass();
};

NewClass::NewClass() : OldClass(100){
    cout << "新しいコンストラクタが呼ばれました" << "\n";
}

class Human {
    public:
        Human();
        int num;
        void humanShow(){
            cout << "Humanのnum: " << num << "\n";
        }
};

Human::Human(){
    num = 0;
}

class Mother : public virtual Human {
    public:
        int num1;
        Mother();
};

Mother::Mother(){
    num1 = 100;
}

class Father : public virtual Human {
    public:
        int num2;
        Father();
};

Father::Father(){
    num2 = 200;
}

class Child : public Mother, public Father {
    public:
        void show(){
            cout << "num: " << num << "\n";
            cout << "num1: " << num1 << "\n";
            cout << "num2: " << num2 << "\n";
        }
};

class NewClass2 {
    public:
        void hello(){
            cout << "Hello" << "\n";
        }
        void hello(string str){
            cout << "Hello! " << str << "\n";
        }
        virtual void show() = 0; // 純粋仮想関数
};

class NewClass3 : public NewClass2 {
    public:
        void show(){
            cout << "NewClass3のshow" << "\n";
        }
};

class Student4 {
    public:
        int num;
};

class Tanaka : public Student4 {
    public:
        Tanaka(int x){
            num = x;
        }
};

class Sato : public Student4 {
    public:
        Sato(int x){
            num = x;
        }
};

class NewClass4 {
    public:
        int num;
        NewClass4 operator+(NewClass4 obj){
            NewClass4 result;
            result.num = num + obj.num;
            return result;
        }
};

class NewClass5 {
    public:
        int num;
        int operator+(int x){
            int result = num + x;
            return result;
        }
};

class Point {
    public:
        int x;
        int y;
        Point(int a, int b){
            x = a;
            y = b;
        }
    //    Point operator+(Point obj){
    //         Point result(0, 0);
    //         result.x = x + obj.x;
    //         result.y = y + obj.y;
    //         return result;
    //     }
    Point operator+(const Point& obj) const {
        return Point(x + obj.x, y + obj.y);
    }
};

class PrefixOperator {
    public:
        int num;
        PrefixOperator(){
            num = 0;
        }
        PrefixOperator operator++(){
            PrefixOperator tmp;
            num++;
            tmp.num = num;
            return tmp;
        }
};

class Point2 {
    public:
        int x;
        int y;
        Point2(int a, int b){
            x = a;
            y = b;
        }
        bool operator>(Point2 obj){
            if(x > obj.x && y > obj.y)
                return true;
            else
                return false;
        }
};

class NewClass6 {
    public:
        int num;
        friend void show(NewClass6 *pObj);
       
};

void show(NewClass6 *pObj){
    cout << "num: " << pObj->num << "\n";
}