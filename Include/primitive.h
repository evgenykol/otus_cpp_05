#pragma once

using coord = int;

//Может сделать шаблонным для задания координат в разных единицах
class BasicPoint
{
public:
    coord x, y;
    BasicPoint() {}
};

class Primitive
{
public:
    BasicPoint refPiont;
    //colour
    //line width

    Primitive() {}
    Primitive(coord _x, coord _y)
    {
        refPiont.x = _x;
        refPiont.y = _y;
    }
};

class Point : public Primitive
{
public:
    Point() {}
    Point(coord _x, coord _y)
    {
        refPiont.x = _x;
        refPiont.y = _y;
    }
};

class Line : public Primitive
{
    BasicPoint endPoint;
public:
    Line() {}
    Line(coord refX, coord refY, coord endX, coord endY)
    {
        refPiont.x = refX;
        refPiont.y = refY;
        endPoint.x = endX;
        endPoint.y = endY;
    }
};

class Circle : public Primitive
{
    coord radius;
public:
    Circle() {}
    Circle(coord refX, coord refY, coord rad)
    {
        refPiont.x = refX;
        refPiont.y = refY;
        radius = rad;
    }
};

class Square : public Primitive
{
    coord len;
public:
    Square() {}
    Square(coord refX, coord refY, coord len)
    {

    }
};
