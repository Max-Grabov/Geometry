#pragma once

#include <cstddef>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include "Constants.h"

namespace GeometryTest {

	template<size_t N>
	class Polygon {
	public:
		Polygon() : dimension(N){
			normRadian = toRadians(defaultDegreePerAngle(N));
			float startAngle = PI/2;

			for(size_t i = 0; i < N; ++i){
				coordinates[i][0] = fabs(cos(startAngle)) < 10e-4 ? 0 : cos(startAngle);
				coordinates[i][1] = fabs(sin(startAngle)) < 10e-4 ? 0 : sin(startAngle);
				startAngle += (N % 2) ? 2*normRadian : normRadian;
			}
		}

		void PrintPoints(){
			std::cout << "----------------" << std::endl;
			for(size_t i = 0; i < N; ++i){
				std::cout << coordinates[i][0] << " " << coordinates[i][1] << std::endl;
			}
			std::cout << "----------------" << std::endl;
		}

	private:
		const size_t dimension;
		float normRadian;
		float coordinates[N][2];
	};
}