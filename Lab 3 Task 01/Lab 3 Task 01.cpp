#include <iostream>
#include <string>
using namespace std;

class ElectricityBill {
private:
    int ConsumerID;
    string ConsumerName;
    double UnitsConsumed;
public:
    ElectricityBill(int id, string name, double units) {
        ConsumerID = id;
        ConsumerName = name;
        UnitsConsumed = units;
    }

    void setConsumerID(int id) {
        ConsumerID = id;
    }
    void setConsumerName(string name) {
        ConsumerName = name;
    }
    void setUnitsConsumed(double units) {
        UnitsConsumed = units;
    }

    int getConsumerID() {
        return ConsumerID;
    }
    string getConsumerName() {
        return ConsumerName;
    }
    double getUnitsConsumed() {
        return UnitsConsumed;
    }

    double calculateBill() {
        double bill = 0;

        if (UnitsConsumed <= 100) {
            bill = UnitsConsumed * 10;
        }
        else if (UnitsConsumed <= 200) {
            bill = (100 * 10) + ((UnitsConsumed - 100) * 15);
        }
        else {
            bill = (100 * 10) + (100 * 15) + ((UnitsConsumed - 200) * 20);
        }

        return bill;
    }
};

int main() {
    ElectricityBill bill(101, "Ahmad", 250);

    cout << bill.getConsumerID() << endl;
    cout << bill.getConsumerName() << endl;
    cout << bill.getUnitsConsumed() << endl;
    cout << bill.calculateBill() << endl;
}