#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // const typo
    int* b = new int[N_ELEMENTS];
    // hianyzo ';' es "-re csere
    std::cout << "1-100 ertekek duplazasa\n";
    // for ciklus kijavitasa
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = i * 2;
    }
    // for ciklus kijavitasa
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        // ertek kiirasa
        std::cout << "Ertek: " << b[i] << std::endl;
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    // init atlag
    int atlag = 0;
    // simma vesszo pontosra javitasa
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        // hianyzo ";"
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
