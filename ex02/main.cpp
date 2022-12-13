#include "Array.hpp"

int main(void)
{
    Array<int> * tab = new Array<int>();
    std::cout << "Array size is : "<< tab->size() << std::endl;
    for (unsigned int i = 0; i < tab->size() + 1; i++)
    {
        try{
            if ((*tab)[i] || (*tab)[i] == 0)
                std::cout << "Content at index " << i << " is " << (*tab)[i] << std::endl;
        }
        catch(std::exception &e){
            std::cerr << e.what() << std::endl;
        }
    }

    Array<int>tab2(8);
    std::cout << "Array size is : "<< tab2.size() << std::endl;
    for (unsigned int i = 0; i < tab2.size() + 1; i++)
    {
        try{
            if (tab2[i] || tab2[i] == 0)
                std::cout << "Content at index " << i << " is " << tab2[i] << std::endl;
        }
        catch(std::exception &e){
            std::cerr << e.what() << std::endl;
        }
    }

    Array<int> tabCopy(*tab);
    Array<int> tabCopy2 = *tab;
    delete tab;
    
    std::cout << "Array copy size is : "<< tabCopy.size() << std::endl;
    for (unsigned int i = 0; i < tabCopy.size() + 1; i++)
    {
        try{
            if (tabCopy[i] || tab2[i] == 0)
                std::cout << "Content at index " << i << " is " << tabCopy[i] << std::endl;
        }
        catch(std::exception &e){
            std::cerr << e.what() << std::endl;
        }
    }

    std::cout << "Array size is : "<< tabCopy2.size() << std::endl;
    for (unsigned int i = 0; i < tabCopy2.size() + 1; i++)
    {
        try{
            if (tabCopy2[i] || tabCopy2[i] == 0)
                std::cout << "Content at index " << i << " is " << tabCopy2[i] << std::endl;
        }
        catch(std::exception &e){
            std::cerr << e.what() << std::endl;
        }
    }

    return 0;
}