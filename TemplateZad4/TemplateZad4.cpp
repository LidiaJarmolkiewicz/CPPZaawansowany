
#include"StaticTable.hpp"
#include <iostream>

int main()

{
    StaticTable<int, 10>table1;
    for (int i = 0; i < 10; ++i)
    {
        table1[i] = i;
    }try
    {
        for (int i = 0; i < 10; ++i)
        {
            std::cout << i << "-" << table1[i] << std::endl;
        }
    }
    catch (std::string error)
    {
        std::cout << error << std::endl;
    }
    std::cout << std::endl;
    table1.print("_");
    

    StaticTable<bool, 2> table2;
    table2[0] = true;
}
