# ✈️ Flight Reservation System (C++)

## 📌 Overview

This is a simple console-based **Flight Reservation System** built using C++.
It allows users to view available flights, reserve seats, and store passenger details.

The project demonstrates core concepts of **Object-Oriented Programming (OOP)** and basic data handling using STL.

---

## 🛠 Tech Stack

* C++
* Standard Template Library (STL - Vector)
* Console-based UI

---

## ⚙️ Features

* View available flights
* Reserve seats for passengers
* Store passenger details (name & passport)
* Track seat availability
* Prevent overbooking

---

## 🧠 How It Works

The system is built using three main classes:

* **Passenger** → Stores passenger details
* **Flight** → Manages flight data and reservations
* **ReservationSystem** → Handles user interaction and operations

Flow:

1. Display available flights
2. User selects a flight
3. Enter passenger details
4. System checks availability
5. Reservation confirmed or rejected

---

## 🚀 How to Run

### 1. Compile

```bash
g++ AirLineReservationSystem.cpp -o app
```

### 2. Run

```bash
./app
```

---

## 📂 Project Structure

```
flight-reservation-system/
│── AirLineReservationSystem.cpp
│── .gitignore
│── README.md
```

---

## 🔮 Future Improvements

* Add **file/database storage** (persistent data)
* Implement **seat numbers & ticket generation**
* Add **cancellation system**
* Convert into **GUI or Web Application**
* Add **authentication (admin/user roles)**

---

## 🌍 Real-World Relevance

This project is a simplified version of real airline reservation systems.
In real-world applications, similar logic is scaled using:

* Databases
* Distributed systems
* Real-time concurrency handling

---

## 👨‍💻 Author

**Sahil Vaghela**

GitHub: https://github.com/SahilVaghela07

---

## ⭐ Note

This project was built as a learning exercise and will be improved further with more advanced features and real-world scalability concepts.
