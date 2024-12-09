#include <iostream>
#include <vector>
using namespace std;

class MyClass {
public:
    MyClass(int id) : id(id) {
        cout << "Object " << id << " created." << endl;
    }
    ~MyClass() {
        cout << "Object " << id << " destroyed." << endl;
    }
    void display() {
        cout << "Object ID: " << id << endl;
    }
private:
    int id;
};

int main() {
    vector<MyClass> objects; 
    for (int i = 0; i < 5; i++) {
        objects.emplace_back(i); 
    }

    cout << "Displaying objects:" << endl;
    for (auto& obj : objects) {
        obj.display();
    }

    return 0; 
}
