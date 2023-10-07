#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Shape {
protected:
    double x, y;
public:
    void get_data(double a, double b) {
        x = a;
        y = b;
    }
    double get_x() {
        return x;
    }

    double get_y() {
        return y;
    }

    virtual void display_area() {
    
    }
};

class Triangle : public Shape {
public:
    void display_area() {
        double a;
        a = (x * y) / 2;
        cout << "\tArea Of Triangle: " << a << endl;
    }
};

class Rectangle :public Shape {
public:
    void display_area() {
        double a;
        a = x * y;
        cout << "\tArea Of Rectangle: " << a << endl;
    }
};

class Circle : public Shape {
public:
    void display_area() {
        double a;
        double pi = 3.1416;
        a = pi * x * x;
        cout << "\tArea Of Circle: " << a << endl;
    }
};

int main() {
menu:
    system("CLS");

    Triangle t;
    Rectangle r;
    Circle c;

    cout << "\n\n\t\tWelcome To Lab 8" << endl;
    cout << "\t\t1 - Area Of Triangle" << endl;
    cout << "\t\t2 - Area Of Rectangle" << endl;
    cout << "\t\t3 - Area Of Circle" << endl;
    cout << "\t\t";
    int choice;
    cin >> choice;

    if (choice == 1) {
        system("CLS");
        cout << "\n\n\tInput X And Y For Triangle: ";
        double x, y;
        cin >> x;
        cout << "\t\t\t\t    ";
        cin >> y;

        t.get_data(x, y);
        t.display_area();

        cout << "\n\n\tWant To Go Back? (Y/N): ";
        char choice;
        cin >> choice;
        if (choice == 'Y' || choice == 'y') {
            goto menu;
        }
    }
    else if (choice == 2) {
        system("CLS");
        cout << "\n\n\tInput X And Y For Rectangle: ";
        double x, y;
        cin >> x;
        cout << "\t\t\t\t    ";
        cin >> y;

        r.get_data(x, y);
        r.display_area();

        cout << "\n\n\tWant To Go Back? (Y/N): ";
        char choice;
        cin >> choice;
        if (choice == 'Y' || choice == 'y') {
            goto menu;
        }
    }
    else if (choice == 3) {
        system("CLS");
        cout << "\n\n\tInput X For Circle: ";
        double x;
        double pi = 3.1416;
        cin >> x;

        c.get_data(x, pi);
        c.display_area();

        cout << "\n\n\tWant To Go Back? (Y/N): ";
        char choice;
        cin >> choice;
        if (choice == 'Y' || choice == 'y') {
            goto menu;
        }
    }

    system("pause");
    return 0;
}
