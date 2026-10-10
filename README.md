# C Programming Collection

Welcome to my C programming repository! This is a central collection of my C projects, ranging from foundational logic exercises to practical application calculators.

## Repository Structure

* **`C-Beginner-Programs/`** - A collection of introductory scripts, pattern generation algorithms, and logic practice.
  * `pyramid.c` - Generates a symmetrical star (*) pyramid based on custom user row input.
* **`Car-Loan-Calculator/`** - A standalone practical finance utility.
  * `carLoanCalculator.c` - Computes exact fixed monthly car loan payments based on principal, down payment, and interest rate.

---

## Featured Projects

### 1. Car Loan Monthly Payment Calculator
A lightweight utility that calculates fixed amortized monthly payments. 

* **Key Math Fix**: Converts annual percentage rates into monthly decimal rates accurately by dividing by `1200` to prevent extreme interest inflation.
* **Formula Applied**:
\(\ M = \frac{P \cdot r}{1 - (1 + r)^{-n}} \$\)

#### Local Execution
```bash
gcc Car-Loan-Calculator/main.c -o loan_calc -lm
./loan_calc
```

### 2. Symmetrical Star Pyramid Generator
A control-flow script utilizing nested loops to render clean visual geometry layouts in the console terminal.

#### Local Execution
```bash
gcc C-Beginner-Programs/pyramid.c -o pyramid
./pyramid
```

---

## 🛠️ How to Compile Globally
Ensure you have a C compiler like `gcc` installed. For any programs leveraging the `<math.h>` standard library (like the Car Loan Calculator), remember to append the math link flag (`-lm`) during compilation:

```bash
gcc filepath/filename.c -o output_name -lm
```
