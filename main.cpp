#include <vector>

#include "Person.hpp"

void nonmutating_func(const std::vector<Team> & teams) {

    // Fine, const function calls
    auto tot_age = 0;
    for(const auto & team : teams) {
        tot_age += team.Leader().Age();
    }

    // Not fine, SetAge is const
    for(auto & team : teams) {
        //team.Leader().SetAge(20);
    }
}

void mutating_func(std::vector<Team> & teams) {

    // Fine, const function calls
    auto tot_age = 0;
    for(const auto & team : teams) {
        tot_age += team.Leader().Age();
    }

    // Not fine, SetAge is const
    for(auto & team : teams) {
        team.Leader().SetAge(20);
    }
}

int main(int argc, char *argv[])
{

    return 0;
}