#include <iostream>

using namespace std;

class ahmed
{
private:
    int n;
public:
    explicit ahmed(int initial = 0) : n(initial){};
    void write(){
        cout << n;
    };
};


int main() {
    ahmed m(9);


    m.write();


    }



