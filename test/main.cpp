#include <memory>
#include "Polygon.h"
#include "Constants.h"

int main(){
    const int tri = 3;
    const int quad = 4;
    const int pent = 5;
    std::unique_ptr<GeometryTest::Polygon<tri>> Triangle(new GeometryTest::Polygon<tri>);
    std::unique_ptr<GeometryTest::Polygon<quad>> Square(new GeometryTest::Polygon<quad>);
    std::unique_ptr<GeometryTest::Polygon<pent>> Pentagon(new GeometryTest::Polygon<pent>);
    Triangle->PrintPoints();
    Square->PrintPoints();
    Pentagon->PrintPoints();
}