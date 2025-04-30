#include <iostream>
#include <vector>
using namespace std;

class Vehicle {
protected:
    string vehicleID, make, model;
    int year;
    bool isRented;
    double dailyRentalRate;
public:
    Vehicle(string id, string mk, string mdl, int yr, double rate)
        : vehicleID(id), make(mk), model(mdl), year(yr), dailyRentalRate(rate), isRented(false) {}

    virtual ~Vehicle() {}
    string getID() const { return vehicleID; }
    bool getRentalStatus() const { return isRented; }

    virtual double calculateRentalCost(int days) const = 0;
    virtual void displayDetails() const = 0;S

    void rentVehicle() {
        isRented = true;
        cout << "Vehicle rented." << endl;
    }

    void returnVehicle() {
        isRented = false;
        cout << "Vehicle returned." << endl;
    }
};

class Car : public Vehicle {
    int doors;
    string fuelType;
public:
    Car(string id, string mk, string mdl, int yr, double rate, int d, string fuel)
        : Vehicle(id, mk, mdl, yr, rate), doors(d), fuelType(fuel) {}

    double calculateRentalCost(int days) const override {
        return days * dailyRentalRate;
    }

    void displayDetails() const override {
        cout << "Car ID: " << vehicleID << ", Make: " << make << ", Model: " << model
             << ", Year: " << year << ", Doors: " << doors << ", Fuel: " << fuelType
             << ", Rate: $" << dailyRentalRate << "/day" << endl;
    }
};

class Motorcycle : public Vehicle {
    string engineType;
    bool hasSidecar;
public:
    Motorcycle(string id, string mk, string mdl, int yr, double rate, string engine, bool sidecar)
        : Vehicle(id, mk, mdl, yr, rate), engineType(engine), hasSidecar(sidecar) {}

    double calculateRentalCost(int days) const override {
        return days * dailyRentalRate + (hasSidecar ? 20 * days : 0);
    }

    void displayDetails() const override {
        cout << "Motorcycle ID: " << vehicleID << ", Make: " << make << ", Model: " << model
             << ", Year: " << year << ", Engine: " << engineType << ", Sidecar: " << (hasSidecar ? "Yes" : "No")
             << ", Rate: $" << dailyRentalRate << "/day" << endl;
    }
};

class Truck : public Vehicle {
    double cargoCapacity;
    int numberOfAxles;
public:
    Truck(string id, string mk, string mdl, int yr, double rate, double capacity, int axles)
        : Vehicle(id, mk, mdl, yr, rate), cargoCapacity(capacity), numberOfAxles(axles) {}

    double calculateRentalCost(int days) const override {
        return days * dailyRentalRate + (cargoCapacity * 10 * days);
    }

    void displayDetails() const override {
        cout << "Truck ID: " << vehicleID << ", Make: " << make << ", Model: " << model
             << ", Year: " << year << ", Capacity: " << cargoCapacity << " m^3, Axles: " << numberOfAxles
             << ", Rate: $" << dailyRentalRate << "/day" << endl;
    }
};

class RentalSystem {
    vector<Vehicle*> vehicles;
public:
    ~RentalSystem() {
        for (auto v : vehicles)
            delete v;
    }

    void addVehicle(Vehicle* v) {
        vehicles.push_back(v);
    }

    void displayAvailableVehicles() const {
        for (auto v : vehicles) {
            if (!v->getRentalStatus()) {
                v->displayDetails();
                cout << "------------------\n";
            }
        }
    }

    Vehicle* findVehicle(string id) const {
        for (auto v : vehicles) {
            if (v->getID() == id)
                return v;
        }
        return nullptr;
    }

    void rentVehicle(string id, int days) {
        Vehicle* v = findVehicle(id);
        if (v && !v->getRentalStatus()) {
            v->rentVehicle();
            cout << "Rental Cost: $" << v->calculateRentalCost(days) << endl;
        } else {
            cout << "Vehicle not found or already rented." << endl;
        }
    }

    void returnVehicle(string id) {
        Vehicle* v = findVehicle(id);
        if (v && v->getRentalStatus()) {
            v->returnVehicle();
        } else {
            cout << "Vehicle not found or not rented." << endl;
        }
    }
};

int main() {
    RentalSystem system;
    system.addVehicle(new Car("CAR001", "Toyota", "Corolla", 2020, 50, 4, "Petrol"));
    system.addVehicle(new Motorcycle("MOTO001", "Yamaha", "MT-07", 2021, 40, "Inline-2", false));
    system.addVehicle(new Truck("TRUCK001", "Volvo", "FH", 2019, 80, 20, 4));

    int choice;
    string id;
    int days;

    do {
        cout << "\n1. Display Available Vehicles\n2. Rent a Vehicle\n3. Return a Vehicle\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                system.displayAvailableVehicles();
                break;
            case 2:
                cout << "Enter Vehicle ID: ";
                cin >> id;
                cout << "Enter number of days: ";
                cin >> days;
                system.rentVehicle(id, days);
                break;
            case 3:
                cout << "Enter Vehicle ID: ";
                cin >> id;
                system.returnVehicle(id);
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 4);

    return 0;
}
