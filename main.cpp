#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // const typo
    int* b = new int[NELEMENTS];
    // hianyzo ';' es "-re csere
    std::cout << '1-100 ertekek duplazasa'
        // for ciklus kijavitasa
        for (int i = 0;)
        {
            b[i] = i * 2;
        }
    // for ciklus kijavitasa
    for (int i = 0; i; i++)
    {
        // ertek kiirasa
        std::cout << "Ertek:"
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    // simma vesszo pontosra javitasa
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        // hianyzo ";"
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
