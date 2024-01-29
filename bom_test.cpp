#include <tau/tau.h>
#include <iostream>
#include <String>
#include "bom.h"

TAU_MAIN()

TEST(bom, basics)
{
    bom b1;
    part p(737, "nut M4", 10);
    part p2(1, "Screw M4", 3);

    b1.l.push_back(p);
    b1.l.push_back(p2);
    b1.l.sort();

    std::cout << "The partlist Contains: " << std::endl;
    for (bom::part_list::iterator it = b1.l.begin(); it != b1.l.end(); ++it){
        std::cout << it->get_id() << " " << it->get_name() << it->get_number() << std::endl;
    }
}
