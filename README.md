# Online Food Order System

A simple command-line based food ordering system written in C++ that allows users to order Chinese and Italian vegetarian dishes.

## Features

- Interactive menu-driven interface
- Two food categories: Chinese and Italian
- Multiple items per category with pricing
- Real-time bill calculation
- Option to add multiple items to order

## How to Use

1. Press `o` or `O` to start your order
2. Select food category:
   - Press `a` or `A` for Chinese Food
   - Press `b` or `B` for Italian Food
3. Select item by entering the corresponding number (1, 2, or 3)
4. Choose whether to add more items (`y` for yes, `n` for no)
5. Receive your total bill amount

## Compilation & Execution
```bash
# Compile
g++ BillingSystem.cpp -o food_order

# Run
./food_order
```

## Requirements

- C++ compiler (g++, clang++, or MSVC)
- Standard C++ library

## Example Usage
```
******** Welcome to Online Food Order ********
Please follow below instructions!
Step 1: Please press o to start your order
Step 2: You can order only Veg food item
Step 3: Please press a to select Chinese Food Items
Step 4: Please press b to select Italian Food Items
Step 5: You'll receive your final bill after your order gets placed!
o
Please select your choice
(a) Chinese Food      (b) Italian Food
a
Please select 1, 2, 3 as per your choice :
(1) Noodles : Price : Rs- 250
(2) Chow Mein : Price : Rs- 210
(3) Fried rice : Price : Rs- 199
1
Do you want to add more chinese food items, y or n ?
n
Your total Bill Amount is : 250
Thank You for your order!
```

## Notes

- All items are vegetarian
- Prices are in Indian Rupees (Rs)
- Input validation is implemented with retry prompts
- The program uses `goto` statements for flow control (consider refactoring for better practice)

## Author

Online Food Order System - C++ Console Application by Cosmeratech
