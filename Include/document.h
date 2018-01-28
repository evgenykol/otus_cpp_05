#pragma once

#include <string>
#include <fstream>
#include <memory>
#include <vector>

#include "primitive.h"

class File
{
protected:
    std::string path;
    std::fstream file;

    File() {}
    //File(std::string _path) : path(_path) {}
public:
    void Open() {}
    void Save() {}
    void Close() {}
};

class Document : public File
{
private:
    std::vector<Primitive> *primitives;

public:
    Document(std::string _path)
    {
        path = _path;
    }
    ~Document() {}

    std::unique_ptr<Primitive> AddPrimitive(Primitive prim)
    {
        return nullptr;
    }

    void DeletePrimitive(std::unique_ptr<Primitive> &prim)
    {

    }
};


