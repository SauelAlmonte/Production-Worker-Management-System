# Production Worker Management System

A modular C++ console application for managing production worker employee records using object-oriented design, inheritance, and input validation.

---

### Author

**Sauel Almonte**  
[LinkedIn Profile](https://www.linkedin.com/in/sauel-almonte)  
[My Portfolio](https://s-almonte.vercel.app/)

---

## Features

- Add new production workers (name, hire date, shift, pay rate)
- Each worker receives a unique, auto-incremented employee number
- View a formatted list of all workers and their details
- Interactive command-driven interface (`c`, `p`, `h`, `q`)
- Demonstrates:
    - Single inheritance (`Employee` → `ProductionWorker`)
    - Encapsulation, static members, dynamic memory management
    - Modular C++ file structure

---

## Project Structure
```text
/production-worker-management-system
├── Employee.h                 # Employee base class definition
├── Employee.cpp               # Employee base class implementation
├── ProductionWorker.h         # ProductionWorker derived class definition
├── ProductionWorker.cpp       # ProductionWorker derived class implementation
├── main.cpp                   # Main program and command loop
├── PrintHelpAndBanner.h       # Help and banner utilities (header)
├── PrintHelpAndBanner.cpp     # Help and banner utilities (implementation)
├── CMakeLists.txt             # CMake build configuration
├── .gitignore                 # Git ignore rules
└── README.md    
``` 

---

## Build & Run Instructions

### Prerequisites
- A C++17 compatible compiler
- An IDE or terminal environment:
    - JetBrains CLion
    - Visual Studio Code
    - Visual Studio (Windows)
    - Terminal/Command Prompt

---

### Option 1: Compile & Run via Terminal
```bash

g++ -std=c++17 -o production_worker Lab15a.cpp Employee.cpp ProductionWorker.cpp PrintHelpAndBanner.cpp
./production_worker

```

---

### Option 2: Using CLion

1. **Open** CLion and load the project folder.
2. CLion auto-configures **CMake**.
3. Click **Build** or press `Shift + F9`.
4. Click **Run** or press `Shift + F10`.

---

## Sample Usage

```text
************************************************************
                        Welcome to
            Production Worker Management System
************************************************************
Enter command (or 'h' for help): h
Supported commands:
    c   create a new ProductionWorker object.
    h   print help text.
    p   print ProductionWorker information.
    q   quit (end the program).

Enter command (or 'h' for help): c
Enter name of new employee: George Washington
Enter hire date of new employee: April 30, 1789
Enter shift for new employee (1 = day, 2 = night): 2
Enter hourly pay rate for new employee: 27.44

Enter command (or 'h' for help): p
Name:                George Washington
Employee number:     1
Hire date:           April 30, 1789
Shift:               Night
Shift number:        2
Pay rate:            $27.44
```

---

## License

This project is licensed under the [MIT License](LICENSE).  
Feel free to modify, reuse, or distribute with proper attribution.

---

## Disclaimer

This project is for educational and demonstrative purposes.  
Use it responsibly. No warranties or guarantees are provided.

---
