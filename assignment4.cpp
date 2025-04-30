#include<iostream>
#include<vector>
using namespace std;

class Vehicle {
 public:
  string vehicleID;
  string make;
   string model;
   int year;
   bool isRented;
   double dailyRentalRate;

   Vehicle(string id, string mk, string mdl, int yr, double rate)
    : vehicleID(id), make(mk), model(mdl), year(yr), dailyRentalRate(rate), isRented(false) {}

  virtual double calculateRentalCost(int days) {
     return days * dailyRentalRate;
    }

    virtual void displaydetail() {}

    void rentVehicle() {
     isRented = true;
    cout << "Vehicle rented." << endl;
    }

    void returnVehicle() {
        isRented = false;
        cout << "Vehicle returned." << endl;
    }

    bool getRentalStatus() const {
        return isRented;
    }

    string getID() const {
        return vehicleID;
    }
};

class Car : public Vehicle {
public:
    int doors;
    string fueltype;

    Car(string id, string mk, string mdl, int yr, double rate, int drs, string fuel)
        : Vehicle(id, mk, mdl, yr, rate), doors(drs), fueltype(fuel) {}

    double calculateRentalCost(int days) override {
        return days * 60.0;
    }

    void displaydetail() override {
        cout << "Car ID: " << vehicleID << ", Make: " << make << ", Model: " << model
             << ", Year: " << year << ", Doors: " << doors << ", Fuel: " << fueltype
             << ", Rate: $" << dailyRentalRate << "/day" << endl;
    }
};

class Motorcycle : public Vehicle {
    string engineType;
    bool hasSidecar;

public:
    Motorcycle(string id, string mk, string mdl, int yr, double rate, string engine, bool sidecar)
        : Vehicle(id, mk, mdl, yr, rate), engineType(engine), hasSidecar(sidecar) {}

    double calculateRentalCost(int days) override {
        return days * 70.0;
    }

    void displaydetail() override {
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

    double calculateRentalCost(int days) override {
        return days * 70.0;
    }

    void displaydetail() override {
        cout << "Truck ID: " << vehicleID << ", Make: " << make << ", Model: " << model
             << ", Year: " << year << ", Capacity: " << cargoCapacity << " m^3, Axles: " << numberOfAxles
             << ", Rate:" << dailyRentalRate << "/day" << endl;
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
                v->displaydetail();
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
            cout << "Enter Vehicle ID: "; cin >> id;
            cout << "Enter number of days: "; cin >> days;
            system.rentVehicle(id, days);
            break;
        case 3:
            cout << "Enter Vehicle ID: "; cin >> id;
            system.returnVehicle(id);
            break;
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
        }
    } while (choice != 4);
}
