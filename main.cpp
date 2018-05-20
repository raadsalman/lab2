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
        cout << "Destuct of Child object" << endl;
    }
};

int main() {
    cout << "* Create object Child" << endl;
    Child child;
    return 0;
}
