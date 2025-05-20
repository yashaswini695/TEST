#include <iostream>
using namespace std;

class Admission {
private:
    string studentName;
    int courseDuration; 
    float annualFee;
    float totalFee;

public:
 
    Admission() {
        studentName = "";
        courseDuration = 0;
        annualFee = 0.0;
        totalFee = 0.0;
    }

    Admission(string name, int duration, float feePerYear) {
        studentName = name;
        courseDuration = duration;
        annualFee = feePerYear;
        totalFee = annualFee * courseDuration;
    }

    void display() {
        cout << "Student Name: " << studentName << endl;
        cout << "Course Duration: " << courseDuration << " years" << endl;
        cout << "Annual Fee: $" << annualFee << endl;
        cout << "Total Fee: $" << totalFee << endl;
    }
};

int main() {
    Admission a1;
    cout << "Details using default constructor:\n";
    a1.display();

    cout << "\n";
    Admission a2("Alice Johnson", 4, 1500.50);
    cout << "Details using parameterized constructor:\n";
    a2.display();

    return 0;
}
