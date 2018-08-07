#include <algorithm>
#include <array>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <tuple>

int main()
{ std::array<double, 5> notas;                          std::generate(notas.begin(), notas.end(), [] {
        double nota;
        std::cin >> nota;
        return nota;(editado)
