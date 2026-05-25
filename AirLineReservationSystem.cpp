#include <iostream>
#include <vector>
using namespace std;

class Passenger {
public:
    string name;
    string passport;

    Passenger(string n, string p) {
        name = n;
        passport = p;
    }
};

class Flight {
private:
    string flightNo, departure, destination;
    int capacity, reserved;
    vector<Passenger> passengers;

public:
    Flight(string flight, string dep, string des, int cap) {
        flightNo = flight;
        departure = dep;
        destination = des;
        capacity = cap;
        reserved = 0;
    }

    bool reservation(string name, string passport) {
        if (reserved < capacity) {
            reserved++;
            passengers.push_back(Passenger(name, passport));
            return true;
        }
        return false;
    }

    friend class ReservationSystem;
};

class ReservationSystem {
public:
    vector<Flight> ve;

    void add(string flight, string dep, string des, int cap) {
        Flight newflight(flight, dep, des, cap);
        ve.push_back(newflight);
    }

    void reserveSeat() {
        cout << "<<<<< Available Flights >>>>>" << endl << endl;
        for (int i = 0; i < ve.size(); i++) {
            cout << "Flight: " << ve[i].flightNo << endl;
            cout << "Departure: " << ve[i].departure << endl;
            cout << "Destination: " << ve[i].destination << endl;
            cout << "Total Seats: " << ve[i].capacity << endl;
            cout << "Available Seats: " << ve[i].capacity - ve[i].reserved << endl << endl;
        }

        string fn;
        cout << "Enter Flight No: ";
        cin >> fn;

        bool found = false;
        for (int i = 0; i < ve.size(); i++) {
            if (fn == ve[i].flightNo) {
                found = true;
                string name, passport;
                cout << "Enter Your Name: ";
                cin.ignore(); // to clear newline from previous input
                getline(cin, name);
                cout << "Enter Your Passport Number: ";
                getline(cin, passport);

                if (ve[i].reservation(name, passport)) {
                    cout << "Reservation successful!" << endl;
                    cout << "Passenger Name: " << name << endl;
                    cout << "Passport No: " << passport << endl;
                    cout << "Flight: " << ve[i].flightNo << " (" << ve[i].departure << " to " << ve[i].destination << ")" << endl << endl;
                } else {
                    cout << "Sorry! No seats available on flight: " << ve[i].flightNo << endl << endl;
                }
                break;
            }
        }
        if (!found) {
            cout << "Flight number not found!" << endl << endl;
        }
    }
};

int main() {
    ReservationSystem rs;
    rs.add("F101", "UAE", "USA", 2);
    rs.add("F202", "UK", "Canada", 1);
    rs.add("F303", "UK", "UAE", 1);

    cout << "<<<<< ABC Airline >>>>>" << endl << endl;

    while (true) {
        int choice;
        cout << "Enter 1 to reserve a seat" << endl;
        cout << "Enter 0 to exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            // system("cls"); // Optional: works only on Windows
            rs.reserveSeat();
        } else if (choice == 0) {
            exit(0);
        }
    }
}
