# Aritmatika C++

## Kalkulator Aritmatika Unlimited 🧮

A simple C++ console calculator that performs sequential arithmetic operations on three numbers with step-by-step calculation display.

## Features

- **Multi-operation Calculator**: Performs operations on 3 numbers sequentially
- **Supported Operations**: Addition (+), Subtraction (-), Multiplication (*), Division (/), Modulo (%)
- **Input Validation**: Validates both numeric inputs and operation symbols
- **Step-by-step Display**: Shows each calculation step for better understanding
- **Error Handling**: Handles division by zero and invalid inputs gracefully
- **Formatted Output**: Clean, organized display with proper decimal formatting

## How It Works

The calculator takes 3 numbers and 2 operations, then performs calculations sequentially:
1. Takes first number
2. Takes first operation
3. Takes second number
4. Performs first calculation (number1 operation1 number2)
5. Takes second operation
6. Takes third number
7. Performs second calculation (result operation2 number3)

## Usage

### Compilation
```bash
g++ -o calculator calculator.cpp
```

### Running the Program
```bash
./calculator
```

### Example Usage
```
=====================================
  Kalkulator Aritmatika Unlimited :)   
=====================================

Masukkan angka ke-1 : 10

Pilih operasi setelah angka ke-1 (+, -, *, /, %) : +

Masukkan angka ke-2 : 5

Pilih operasi setelah angka ke-2 (+, -, *, /, %) : *

Masukkan angka ke-3 : 3

Langkah Perhitungan:
  10.00 + 5 = 15.00
  15.00 * 3 = 45.00

=====================================
      Hasil Akhir = 45.00
=====================================
```

## Code Structure

### Main Components

- **Input Validation**: 
  - `operasiValid()` function validates operation symbols
  - Numeric input validation with error recovery
  
- **Sequential Processing**: 
  - Calculates operations from left to right
  - Shows intermediate results for each step

- **Error Handling**:
  - Division by zero protection
  - Invalid input recovery
  - Modulo by zero protection

### Key Variables
- `angka[3]`: Array to store the three input numbers
- `operasi[2]`: Array to store the two operations
- `hasil`: Variable to store and update calculation results

## Supported Operations

| Symbol | Operation | Example |
|--------|-----------|---------|
| `+` | Addition | 5 + 3 = 8 |
| `-` | Subtraction | 5 - 3 = 2 |
| `*` | Multiplication | 5 * 3 = 15 |
| `/` | Division | 6 / 3 = 2.00 |
| `%` | Modulo | 7 % 3 = 1 |

## Error Handling

- **Invalid Numbers**: Program will prompt to re-enter if non-numeric input is detected
- **Invalid Operations**: Program will prompt to re-enter if unsupported operation is entered
- **Division by Zero**: Program terminates with error message
- **Modulo by Zero**: Program terminates with error message

## Requirements

- C++ compiler (g++, clang++, etc.)
- C++11 or later
- Standard libraries: `<iostream>`, `<iomanip>`, `<limits>`

## Customization

The code includes comments indicating areas that can be easily modified:

```cpp
float angka[3], hasil;         // [Bisa di edit angka :)] - Change array size for more numbers
char operasi[2];             // [Bisa di edit operasi :)] - Change array size for more operations
for (int i = 0; i < 3; i++) {     // [Bisa di edit angka :)] - Update loop limit
if (i < 2) {        // [Bisa di edit operasi :)] - Update condition
for (int i = 0; i < 2; i++) {         // [Bisa di edit operasi :)] - Update loop limit
```

## Future Enhancements

- Support for parentheses and operator precedence
- Support for more mathematical functions (sin, cos, sqrt, etc.)
- History of calculations
- Save/load calculation results
- GUI interface

## License

This project is open source and available under the [MIT License](LICENSE).

## Contributing

Feel free to fork this project and submit pull requests for any improvements!
