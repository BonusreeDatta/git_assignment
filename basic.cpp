#include <iostream>

void fibonacci(int limit) {
    int prev = 0, curr = 1, next;
    std::cout << "Fibonacci Series up to " << limit << ":\n";
    std::cout << prev << " " << curr << " ";
    
    while (true) {
        next = prev + curr;
        if (next > limit)
            break;
        std::cout << next << " ";
        prev = curr;
        curr = next;
    }
}

int main() {
    int limit;
    std::cout << "Enter the limit for Fibonacci series: ";
    std::cin >> limit;
    fibonacci(limit);
    return 0;
}
