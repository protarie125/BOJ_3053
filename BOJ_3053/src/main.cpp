#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    constexpr double PI{ 3.14159'26535'89793'23846 };

    double R;
    cin >> R;

    auto r2 = R * R;

    cout << fixed << setprecision(6) << r2 * PI << '\n'
        << r2 * 2;

    return 0;
}