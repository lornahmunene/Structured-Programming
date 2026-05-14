#include <iostream>
#include <string>
using namespace std;
class User{
protected:
    string name;
    string email;
    string phone;
public:
    // Default constructor
    User() {
        name = "";
        email = "";
        phone = "";
    }

    // Parameterized constructor
    User( string userName, string userEmail, string userPhone) {
        name = userName;
        email = userEmail;
        phone = userPhone;
    }
    string getName() {
        return name;
    }
    string getEmail() {
        return email;
    }
    string getPhone() {
        return phone;
    }
    void setName(string newName) {
        name = newName;
    }
    void setEmail(string newEmail) {
        email = newEmail;
    }
    void setPhone(string newPhone) {
        phone = newPhone;
    }

};
class 
Passenger : public User {
    protected:
    int passengerRating;
    public:
    Passenger() : User() {
        passengerRating = 0;
    }
    Passenger(int rating, string userName, string userEmail, string userPhone) 
        : User((name), (email), (phone)) {
        passengerRating = rating;
    }
};
// class Passenger {
// public:
//     int id;
//     string name;
//     string phone;

//     // Default constructor
//     Passenger() {
//         id = 0;
//         name = "";
//         phone = "";
//     }

//     // Parameterized constructor
//     Passenger(int passengerId, string passengerName, string passengerPhone) {
//         id = passengerId;
//         name = passengerName;
//         phone = passengerPhone;
//     }

//     void requestRide() {
//         cout << name << " requested a ride.\n";
//     }
// };
class Driver : public User {
protected:
    string vehicleRegNo;
public:
        Driver() : User() {
            vehicleRegNo = "";
        }
        Driver(string regNo, string UserName, string email, string phone) 
            : User(string(name), string(email), string(phone)) {
            vehicleRegNo = regNo;
        }
        string getVehicleRegNo() {
            return vehicleRegNo;
        }
        void setVehicleRegNo(string regNo) {
            vehicleRegNo = regNo;
        }
         

    // int id;
    // string name;
    // string phone;
    // bool available;

    // Driver() {
    //     id = 0;
    //     name = "";
    //     phone = "";
    //     available = true;
    // }

    // Driver(int driverId, string driverName, string driverPhone) {
    //     id = driverId;
    //     name = driverName;
    //     phone = driverPhone;
    //     available = true;
    // }

    // void setAvailability(bool status) {
    //     available = status;
    // }
};
// class Vehicle {
// public:
//     string plateNumber;
//     string model;
//     string color;

//     Vehicle() {
//         plateNumber = "";
//         model = "";
//         color = "";
//     }

//     Vehicle(string plate, string vehicleModel, string vehicleColor) {
//         plateNumber = plate;
//         model = vehicleModel;
//         color = vehicleColor;
//     }
// };
// class Ride {
// public:
//     Passenger passenger;
//     Driver driver;
//     Vehicle vehicle;
//     string pickupLocation;
//     string dropLocation;
//     Ride(Passenger p, Driver d, Vehicle v, string pickup, string drop) {
//         passenger = p;
//         driver = d;
//         vehicle = v;
//         pickupLocation = pickup;
//         dropLocation = drop;
//     }
//     void startRide() {
//         cout << "Ride started from " << pickupLocation << " to " << dropLocation << "\n";
//     }
// };
int main() {
    // Passenger passenger1(1, "Alice", "123-456-7890");
    // Driver driver1("XYZ-123","Ryuk","ryuk@example.com","098-765-4321");
    // Driver driver2("ABC-456","Rem","rem@example.com","098-765-4321");
    // // Passenger pass1(5,"Light","light@gmal.com","071111111");

    // cout << "Driver Name: " << driver1.getName() << endl;

    // cout << "Driver Name: " << driver2.getName() << endl;
    // cout <<"Passenger Name:"<<pass1.getName()<< endl;
    return 0;
}