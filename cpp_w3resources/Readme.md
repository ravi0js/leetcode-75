**Integer Overflow Notes**

### **Overview**
Overflow occurs when an arithmetic operation exceeds the maximum or minimum value a data type can hold. This is common in integral types and can cause unexpected behavior in computations.

### **Storage of Integers**
- The size of a data type (n bytes) determines its range.
- **Unsigned data type (n bytes):** 0 to \(2^{8n}-1\)
- **Signed data type (n bytes):** \(-2^{8n-1}\) to \(2^{8n-1}-1\)
- Example:
  - **short (2 bytes):** -32768 to 32767
  - **unsigned short:** 0 to 65535

### **Binary Representation & Two's Complement**
- Positive numbers are stored as-is in binary.
- Negative numbers use **Two’s Complement**: \(-n = \sim n + 1\)
- Example:
  - **250 (in binary):** `00000000 11111010`
  - **~250:** `11111111 00000101`
  - **-250 (Two’s complement):** `11111111 00000110`

### **Unsigned vs Signed Interpretation**
- The same binary pattern can represent different values depending on signed/unsigned interpretation.
- Example:
  - `11100010 01110101` → **Unsigned:** 57973, **Signed:** -7563
  - Adding 65536 to -7563 gives 57973.

### **Overflow in Arithmetic Operations**
#### **Unsigned Overflow**
- Example:
  - `c = 200 (11001000)`, `d = 100 (01100100)`
  - `c + d = 300 (00000001 00101100)`, exceeds max value (255)
  - Higher byte is discarded, result = `44` (i.e., `300 - 256`)
  - **Unsigned result is moduloed by range.**

#### **Signed Overflow**
- Example:
  - `a = 100 (01100100)`, `b = 50 (00110010)`
  - `a + b = 150 (10010110)`, exceeds max value (127)
  - Instead, result is `-106` (i.e., `150 - 256`)
  - **Signed overflow results in unexpected negative values.**

### **Detecting Overflow**
- **Addition Overflow**
  - Can only occur when adding numbers of the same sign.
  - If the result has a different sign, overflow has occurred.
- **Multiplication Overflow**
  - Overflow happens if `a * b > max_value`.
  - Two methods to detect:
    1. If `a * b > max`, then `a > max / b`
    2. Use a larger data type (`var2_t`) to check `var2_t(a) * var2_t(b) > R`.

### **Truncation & Type Conversion**
- **Truncation:** When assigning a larger type to a smaller type.
  - Example: `short a; long b = 70000; a = b;` → Value truncates.
- **Type Conversion Rules:**
  - **Unsigned & Signed Mix:** Unsigned dominates (`a == b` can return `true` unexpectedly).
  - **Short vs Long:** Short gets converted to long in operations.
  - **Type Promotion:** Operations on types smaller than `int` convert them to `int`.
    - Example: `short a = 32000, b = 32000; cout << a + b;` → 64000 (stored in `int`).

### **Handling Overflow in C++**
- **Libraries:**
  - Microsoft Visual C++ provides `safeint.h`
  - Functions like `SafeAdd()`, `SafeSubtract()` prevent overflow issues.
  - Consider using `stdint.h` for explicit type sizes (`int16_t`, `int32_t`).

### **Conclusion**
Integer overflow can lead to serious issues in software. It is essential to detect, prevent, and handle overflow properly using safe arithmetic techniques, appropriate data types, and overflow detection mechanisms.
