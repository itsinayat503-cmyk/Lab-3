#include <iostream>
#include <string>
using namespace std;

class StudentResult {
private:
    int StudentRollNumber;
    string StudentName;
    double StudentMarks1;
    double StudentMarks2;
    double StudentMarks3;
public:
    StudentResult(int r, string n, double m1, double m2, double m3) {
        StudentRollNumber = r;
        StudentName = n;
        setMarks1(m1);
        setMarks2(m2);
        setMarks3(m3);
    }
    ~StudentResult() {
        cout << "Destructor called for " << StudentName << endl;
    }
    void setRollNumber(int r) {
        StudentRollNumber = r;
    }
    void setName(string n) {
        StudentName = n;
    }
    void setMarks1(double m1) {
        if (m1 >= 0 && m1 <= 100) StudentMarks1 = m1;
        else StudentMarks1 = 0;
    }
    void setMarks2(double m2) {
        if (m2 >= 0 && m2 <= 100) StudentMarks2 = m2;
        else StudentMarks2 = 0;
    }
    void setMarks3(double m3) {
        if (m3 >= 0 && m3 <= 100) StudentMarks3 = m3;
        else StudentMarks3 = 0;
    }
    int getRollNumber() {
        return StudentRollNumber;
    }
    string getName() {
        return StudentName;
    }
    double getMarks1() {
        return StudentMarks1;
    }
    double getMarks2() {
        return StudentMarks2;
    }
    double getMarks3() {
        return StudentMarks3;
    }
    double calculateTotal() {
        return StudentMarks1 + StudentMarks2 + StudentMarks3;
    }
    double calculateAverage() {
        return calculateTotal() / 3.0;
    }
    char calculateGrade() {
        double avg = calculateAverage();
        if (avg >= 80) return 'A';
        else if (avg >= 70) return 'B';
        else if (avg >= 60) return 'C';
        else if (avg >= 50) return 'D';
        else return 'F';
    }
    void displayResult() {
        cout << "Roll No: " << StudentRollNumber << endl;
        cout << "Name: " << StudentName << endl;
        cout << "Marks 1: " << StudentMarks1 << endl;
        cout << "Marks 2: " << StudentMarks2 << endl;
        cout << "Marks 3: " << StudentMarks3 << endl;
        cout << "Total: " << calculateTotal() << endl;
        cout << "Average: " << calculateAverage() << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    StudentResult student(1, "Hamza", 85, 78, 92);
    student.displayResult();
}