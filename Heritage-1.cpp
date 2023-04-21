#include <iostream>
#include <string>
using namespace std;

class Mother{
    public:
    void display1(){
        cout << "I am the Mother." << endl;
    }
};
class Daughter : public Mother {
    public:
    void display2(){
        cout << "I am the Daughter." << endl;
    }
};

int main(){
    Daughter d;

    d.display1();
    d.display2();

    return 0;
}
