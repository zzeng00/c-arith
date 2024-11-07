#include <iostream>
#include <cstdint>

// Define a struct to represent a 32-bit floating-point number
/*struct fp32 {
    uint32_t bits;

    // Constructor to initialize the floating-point number
    fp32(float value) {
        bits = *(uint32_t*)&value;
    }

    // Function to add two 32-bit floating-point numbers
    fp32 operator+(const fp32& other) const {
        uint32_t result = bits + other.bits;
        return fp32(result);
    }

    // Function to print the 32-bit floating-point number in hexadecimal format
    void print() const {
        std::cout << "0x" << std::hex << bits << std::endl;
    }
};*/

struct fp32{
}

int main() {
    // Create two 32-bit floating-point numbers
    fp32 a(3.5f);
    fp32 b(2.7f);

    // Print the initial values
    std::cout << "a: ";
    a.print();
    std::cout << "b: ";
    b.print();

    // Add the two numbers
    fp32 result = a + b;

    // Print the result
    std::cout << "a + b: ";
    result.print();

    return 0;
}
