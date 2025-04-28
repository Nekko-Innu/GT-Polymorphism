#include <iostream>
using namespace std;

class Employeee{
    public:
        virtual void showDetails(){
            cout << "Employee details" << endl;
        }
};

class Manager : public Employeee{
    public:
        void showDetails() override {
            cout << "I am Manager. I manage teams" << endl;
        }
};
class Developer : public Employeee{
    public:
        void showDetails() override {
            cout << "I am Developer. I write code" << endl;
        }
};

int main() {
    Employeee* e1 = new Manager();
    Employeee* e2 = new Developer();

    cout <<"What type of employee would you like to create?" << endl;
    cout << "1. Manager" << endl;
    cout << "2. Developer" << endl;
    cout << "Enter your choice (1 or 2): ";
    int choice;
    cin >> choice;
    if(choice == 1){
        e1->showDetails();
    }
    else if(choice == 2){
        e2->showDetails();
    }
    else{
        cout << "Invalid choice" << endl;
    }

    delete e1;
    delete e2;

    return 0;
}