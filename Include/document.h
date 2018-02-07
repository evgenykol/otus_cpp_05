#pragma once

#include <string>
#include <fstream>
#include <memory>
#include <vector>

#include "primitive.h"

class Document
{
private:
    std::vector<Primitive> *primitives;

public:
    Document() {}
    ~Document() {}

    std::unique_ptr<Primitive> AddPrimitive(Primitive prim)
    {
        return nullptr;
    }

    void DeletePrimitive(std::unique_ptr<Primitive> &prim)
    {

    }
};


