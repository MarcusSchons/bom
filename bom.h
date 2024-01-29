#ifndef BOM_H_INCLUDED
#define BOM_H_INCLUDED

#include "part.h"
#include <list>

class bom
{
    public:
    typedef std::list < part > part_list ;
    part_list l;

};

#endif // BOM_H_INCLUDED
