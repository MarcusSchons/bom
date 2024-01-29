#ifndef PART_H_INCLUDED
#define PART_H_INCLUDED

#include <string>

class part
{
    uint32_t id;
    std::string name;
    uint32_t number;

public:
    part() : id{0}, name{""}, number{0} {}
    part(uint32_t i, std::string n, uint32_t num) {
        id = i;
        name = n;
        number = num;
    }

    uint32_t get_id() const {return id;}
    std::string get_name() const {return name;}
    uint32_t get_number() const {return number;}
};

#endif // PART_H_INCLUDED
