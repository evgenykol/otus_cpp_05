#pragma once

#include <memory>
#include <string>

#include "document.h"

class Editor
{
private:
    std::vector<Document> *documents;

public:
    Editor() {}
    ~Editor() {}

    std::unique_ptr<Document> CreateDocument(std::string path)
    {
        return nullptr;
    }
    void CloseDocument() {}
};
