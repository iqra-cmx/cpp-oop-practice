 C++ OOP Practice

Practice programs demonstrating inheritance and OOP concepts in C++.

## Programs

### 1. Hostel and Mess Management (`Hostel_management_system.cpp`)

Demonstrates **multilevel inheritance**:

`Person -> HostelRoom -> StudentResidence -> HostelManager`

The program stores student and room details and calculates the total dues:
room rent + regular meal payment + extra meals (150 per extra meal).

**Compile and run (Windows PowerShell):**

```
g++ hostel_management.cpp -o hostel_management
.\hostel_management
```

**Compile and run (Linux / macOS):**

```
g++ hostel_management.cpp -o hostel_management
./hostel_management
```

**Sample output:**

```
student_name: iqra
student_id: 7594
hostel_meal: 2
position: student
room_no: 13
room_type: ug
rent: 19000
regular_mealpayment: 500
hostel_processTotalDues: 19950
```

## Concepts Covered

- Multilevel inheritance
- Constructor chaining
- Access specifiers (`public`,
