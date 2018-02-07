#pragma once

#include <memory>
#include <string>
#include <vector>

#include "document.h"

class Editor
{
private:
    std::vector<Document> *documents;

public:
    Editor() {}
    ~Editor() {}

    std::unique_ptr<Document> CreateDocument()
    {
        return nullptr;
    }

    void ImportDocument(const std::string path, std::unique_ptr<Document> &doc)
    {

    }

    void ExportDocument(const std::string path, const std::unique_ptr<Document> &doc)
    {

    }

    void CloseDocument(std::unique_ptr<Document> &doc)
    {

    }
};
