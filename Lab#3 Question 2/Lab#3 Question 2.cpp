#include <iostream>
#include <string>
using namespace std;

class Patient {
private:
    int PatientID;
    string PatientName;
    int age;
    string disease;
    string PatientCity;
public:
    Patient(int id, string n, int a, string d, string city) {
        PatientID = id;
        PatientName = n;
        setAge(a);
        disease = d;
        PatientCity = city;
    }
    ~Patient() {
       
    }
    void setPatientID(int id) {
        PatientID = id;
    }
    void setName(string n) {
        PatientName = n;
    }
    void setAge(int a) {
        if (a >= 0 && a <= 120) {
            age = a;
        }
        else {
            age = 0;
        }
    }
    void setDisease(string d) {
        disease = d;
    }
    void setPataientCity(string city) {
        PatientCity = city;
    }
    int getPatientID() {
        return PatientID;
    }
    string getName() {
        return PatientName;
    }
    int getAge() {
        return age;
    }
    string getDisease() {
        return disease;
    }
    string getPatientCity() {
        return PatientCity;
    }
    void displayPatient() {
        cout << "ID: " << PatientID << endl;
        cout << "Name: " << PatientName << endl;
        cout << "Age: " << age << endl;
        cout << "Disease: " << disease << endl;
        cout << "City: " << PatientCity << endl;
    }
};

int main() {
    Patient p1(101, "Ali", 28, "Fever", "Karachi");
    Patient p2(102, "Ahmad", 47, "Flu" , "Buner");
    Patient p3(103, "Asad", 50, "pain","swat");
    

    p1.displayPatient();
    p2.displayPatient();
    p3.displayPatient();
}