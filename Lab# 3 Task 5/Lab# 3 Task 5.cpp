#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int ProductID;
    string ProductName;
    double price;
    int Quantity;
public:
    Product(int id, string name, double p, int q) {
        ProductID = id;
        ProductName = name;
        price = p;
        if (q >= 0) Quantity = q;
        else Quantity = 0;
        cout << "Constructor called for " << ProductName << endl;
    }
    ~Product() {
        cout << "Destructor called for " << ProductName << endl;
    }
    void setProductID(int id) {
        ProductID = id;
    }
    void setProductName(string name) {
        ProductName = name;
    }
    void setPrice(double p) {
        price = p;
    }
    void setQuantity(int q) {
        if (q >= 0) Quantity = q;
    }
    int getProductID() {
        return ProductID;
    }
    string getProductName() {
        return ProductName;
    }
    double getPrice() {
        return price;
    }
    int getQuantity() {
        return Quantity;
    }
    void addStock(int amount) {
        if (amount > 0) Quantity += amount;
    }
    void removeStock(int amount) {
        if (amount > 0 && (Quantity - amount) >= 0) {
            Quantity -= amount;
        }
    }
    double calculateTotalValue() {
        return price * Quantity;
    }
};

int main() {
    Product p(501, "Mouse", 1500, 10);

    cout << "Initial Stock: " << p.getQuantity() << endl;
    p.addStock(5);
    cout << "Stock after addition: " << p.getQuantity() << endl;
    p.removeStock(3);
    cout << "Stock after removal: " << p.getQuantity() << endl;
    cout << "Total Value: " << p.calculateTotalValue() << endl;
}