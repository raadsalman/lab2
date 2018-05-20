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

int main() {
    cout << "* Create object Base" << endl;
    Base base;
    return 0;
}
