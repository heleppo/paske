#include <cstdlib>
#include <iostream>
#include <vector>
#include <cmath>


void read_integers(std::vector< int >& ints, int count)
{
    int new_integer = 0;
    for(int i = 0; i < count; ++i)
    {
        std::cin >> new_integer;
        // TODO: Implement your solution here
        ints.push_back(new_integer);
    }
}

// TODO: Implement your solution here
bool same_values(std::vector<int> ints)
{
    int same = ints[0];
    for (int member : ints)
    {
        if (member != same)
        {
            return 0;
        }
    }
    return 1;
}

bool is_ordered_ascending(std::vector<int> ints)
{
    for (unsigned int i = 0; i < ints.size(); i++)
    {
        if (ints[i] > ints[ints.size() - 1])
        {
            return 0;
        }
    }
    return 1;
}

bool is_arithmetic_series(std::vector<int> ints)
{
    int sum = 0;
    for (unsigned int i = 0; i < ints.size(); i++)
    {
        sum += ints[i];
    }
    int dividend = static_cast<int>(ints.size())*(ints[0]+
            ints[ints.size()-1]);
    if (sum == dividend / 2 + dividend % 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

bool is_geometric_series(std::vector<int> ints)
{
    if (ints.size() == 1)
    {
        return 0;
    }
    int sum = 0;
    for (unsigned int i = 0; i < ints.size(); i++)
    {
        sum += ints[i];
    }
    double q = (static_cast<double>(ints[ints.size()-1]) /
                static_cast<double>(ints[ints.size()-2]));
    double formula = (ints[0]*(1-pow(q,ints.size())))/(1-q);
    if (sum == round(formula))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    std::cout << "How many integers are there? ";
    int how_many = 0;
    std::cin >> how_many;

    std::cout << "Enter the integers: ";
    std::vector<int> integers;
    read_integers(integers, how_many);

    if(same_values(integers))
        std::cout << "All the integers are the same" << std::endl;
    else
        std::cout << "All the integers are not the same" << std::endl;

    if(is_ordered_ascending(integers))
        std::cout << "The integers are in an ascending order" << std::endl;
    else
        std::cout << "The integers are not in an ascending order" << std::endl;

    if(is_arithmetic_series(integers))
        std::cout << "The integers form an arithmetic series" << std::endl;
    else
        std::cout << "The integers do not form an arithmetic series" << std::endl;

    if(is_geometric_series(integers))
        std::cout << "The integers form a geometric series" << std::endl;
    else
        std::cout << "The integers do not form a geometric series" << std::endl;

    return EXIT_SUCCESS;
}
