# Date Calculation & Days Addition Algorithm in C++ 📅⚙️

A lightweight, robust C++ application designed to perform accurate date arithmetic by adding an arbitrary number of days to a given calendar date. 

The algorithm handles calendar intricacies seamlessly, including:
- **Leap Year Calculations:** Validated via Gregorian calendar rules.
- **Dynamic Month Durations:** Correct handling of variable month lengths (28, 29, 30, and 31 days).
- **Date Rollovers:** Managing year and month transitions using modular programming and single-loop accumulative subtraction.

---

## 🚀 Key Features
- **Clean Architecture & Modularity:** Decomposed into clean helper functions (`isLeapYear`, `NumberOfDaysInAMonth`, `NumberOfDaysFromTheBeginningOfTheYear`).
- **Data Encapsulation:** Uses `stDate` struct to bundle day, month, and year into an intuitive data structure.
- **Accurate Logic:** Eliminates edge-case errors during century and leap-year transitions.

---

## 🛠️ Tech Stack
- **Language:** C++
- **Paradigm:** Modular / Procedural Programming

---

## 💻 Sample Run
```text
Please enter a Day? 10
Enter a Month (1-12): 10
Enter a Year: 2022
How many days to add: 2500

Date after adding [2500] days is: 14/8/2029
