#pragma once

namespace GeometryTest {
	#define PI 3.1415926535897931
	auto toRadians = [](const float &degree){ return (degree*PI)/180.0; };
	auto toDegrees = [](const float &radian){ return (180.0*radian)/PI; };
	auto defaultDegreePerAngle = [](const size_t &dimension){ return dimension > 2 ? (180.0*(dimension - 2.0))/dimension : 0.0; };
}