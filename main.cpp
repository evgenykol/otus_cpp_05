#include <iostream>

#include "Include/document.h"
#include "Include/primitive.h"
#include "Include/veditor.h"

int main()
{
    Editor edt;
    auto doc = edt.CreateDocument("/home/user/path");
    doc->Open();
    auto point = doc->AddPrimitive( Point(0,0));
    auto circle = doc->AddPrimitive( Circle(1, 1, 1));

    doc->DeletePrimitive(point);
    doc->DeletePrimitive(circle);

    doc->Save();
    doc->Close();
    return 0;
}
