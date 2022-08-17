#include"Point.hpp"
#include<iostream>

int main()
{
    Point2D p1(2, 7);
    Point2D p2(5, 11);

    std::cout << p1.getX() << " " << p1.getY() << std::endl;
    std::cout << p2.getX() << " " << p2.getY() << std::endl;
    std::cout << "odleglosc miedzy punktami wynosi= " << p1.showDist(p2) << std::endl;


}