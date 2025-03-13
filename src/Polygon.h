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

		float Area(){
			float tot = 0;
			for(size_t i = 0; i < N - 1; i++){
				tot += (coordinates[i][0] * coordinates[i+1][1] - coordinates[i][1] * coordinates[i+1][0]);
			}
			tot += (coordinates[N-1][0] * coordinates[0][1] - coordinates[N-1][1] * coordinates[0][0]);

			return fabs(tot/2);
		}

	private:
		const size_t dimension;
		float normRadian;
		float coordinates[N][2];
	};
}