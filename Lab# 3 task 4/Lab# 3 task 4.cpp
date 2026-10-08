#include <iostream>
#include <string>
using namespace std;

class Course {
private:
    string CourseCode;
    string CourseName;
    int CreditHours;
    double Fee;
public:
    Course(string code, string name, int ch, double f) {
        CourseCode = code;
        CourseName = name;
        setCreditHours(ch);
        setFee(f);
    }
    ~Course() {
        cout << "Destructor called for " << CourseCode << endl;
    }
    void setCourseCode(string code) {
        CourseCode = code;
    }
    void setCourseName(string name) {
        CourseName = name;
    }
    void setCreditHours(int ch) {
        if (ch > 0 && ch <= 6) CreditHours = ch;
        else CreditHours = 0;
    }
    void setFee(double f) {
        if (f >= 0) Fee = f;
        else Fee = 0;
    }
    string getCourseCode() {
        return CourseCode;
    }
    string getCourseName() {
        return CourseName;
    }
    int getCreditHours() {
        return CreditHours;
    }
    double getFee() {
        return Fee;
    }
    void displayCourse() {
        cout << "Code: " << CourseCode << endl;
        cout << "Name: " << CourseName << endl;
        cout << "Credit Hours: " << CreditHours << endl;
        cout << "Fee: " << Fee << endl;
    }
};

int main() {
    Course c1("CS101", "OOP Design", 3, 45000);
    Course c2("CS102", "Data Structures", 4, 60000);
    Course c3("CS103", "Algorithms", 3, 45000);

    c1.displayCourse();
    c2.displayCourse();
    c3.displayCourse();
}