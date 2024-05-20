#include <iostream>
#include <vector>

std::vector<int> task(std::vector<int> v, int n) {
    for (int i = 0; i < v.size(); i++) {
        v[i] += n;
    }
    return v;
}

int main() {
    setlocale(LC_ALL, "Russian");
    std::vector<int> v = {0, 2, 4};
    int n = 1;
    std::vector<int> v2 = task(v, n);
    if (v2 == std::vector<int>{1, 3, 5}) {
        std::cout << "Тестирование пройдено!";
    }
    return 0;
}

