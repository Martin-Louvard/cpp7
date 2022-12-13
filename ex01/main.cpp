#include "iter.hpp"

int main(void)
{
    std::string tab[5];

    tab[0] = "coucou ";
    tab[1] = "toi ";
    tab[2] = "comment ";
    tab[3] = "ca ";
    tab[4] = "va ?";

    ::iter(tab, static_cast<size_t>(5), ::printf);
}