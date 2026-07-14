# Student Management System (C++)

A lightweight, console-based **Student Management System** built in C++ utilizing core **Object-Oriented Programming (OOP)** principles. This application allows users to manage student records, calculate grade averages, and perform basic CRUD-like operations (Create, Read, Update, Delete) dynamically within a terminal environment.

---

## 🚀 Features

- **Add Student Records:** Input student details including Name, Age, Major, and individual grades (Math, Science, Language).
- **Display All Students:** View a formatted list of all registered students alongside their calculated GPA/Average.
- **Search Functionality:** Quickly find a specific student by their name.
- **Delete Records:** Remove a student from the system with a confirmation prompt before deletion.
- **Memory Safety:** Built-in validation limits to prevent system overflow (supports up to 100 students).

---

## 🛠️ Concepts Applied

- **Object-Oriented Programming (OOP):** Encapsulation of student data and behaviors within a unified `Student` class.
- **Data Manipulation:** Efficient array traversal for searching, filtering, and shifting elements during deletion.
- **Control Structures:** Interactive user experience driven by dynamic `switch-case` menus and logical loops.

---

## 💻 How to Run

1. Clone this repository:
   ```bash
   git clone [https://github.com/YOUR_USERNAME/REPOSITORY_NAME.git](https://github.com/YOUR_USERNAME/REPOSITORY_NAME.git)
2. Navigate to the project directory:
   cd student-management-system
3.Compile the source file using any standard C++ compiler (e.g., g++):
g++ main.cpp -o StudentManagement
4.Run the executable:
./StudentManagement
