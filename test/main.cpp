#include <memory>
#include "Polygon.h"

int main(){
    const int tri = 3;
    const int quad = 4;
    const int val = 1000;
    std::unique_ptr<GeometryTest::Polygon<tri>> Triangle(new GeometryTest::Polygon<tri>);
    std::unique_ptr<GeometryTest::Polygon<quad>> Square(new GeometryTest::Polygon<quad>);
    std::unique_ptr<GeometryTest::Polygon<val>> Shape(new GeometryTest::Polygon<val>);

    std::cout << Shape->Area() << std::endl;
}