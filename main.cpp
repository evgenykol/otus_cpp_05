#include <iostream>

#include "Include/document.h"
#include "Include/primitive.h"
#include "Include/veditor.h"

int main()
{
    Editor edt;
    auto doc = edt.CreateDocument();
    edt.ImportDocument("/home/user/path", doc);

    auto point = doc->AddPrimitive( Point(0,0));
    auto circle = doc->AddPrimitive( Circle(1, 1, 1));

    doc->DeletePrimitive(point);
    doc->DeletePrimitive(circle);

    edt.ExportDocument("/home/user/path", doc);
    edt.CloseDocument(doc);
    return 0;
}
