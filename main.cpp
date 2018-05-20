#include <iostream>

using namespace std;

class Base {
public:
    Base() {
        cout << "Construct of Base object" << endl;
        if(PrivateFunc()) {
            cout << "Private function of class Base" << endl;
        }
    }
    ~Base() {
        cout << "Destruct of Base object" << endl;
    }
    void func() {
        cout << "Function func() of class Base" << endl;
    }
private:
    bool PrivateFunc() {
        return true;
    }
};

class Child: public Base {
public:
    Child() {
        cout << "Construct of Child object" << endl;
    }
    ~Child() {
        cout << "Destruct of Child object" << endl;
    }
};

int main() {
    cout << "* Create object Base" << endl;
    Base base;
    cout << "* Create object Child" << endl;
    Child child;
    cout << "* Call method func() for object Base" << endl;
    base.func();
    cout << "* Call method func() for object Child" << endl;
    child.func();
    return 0;
}
