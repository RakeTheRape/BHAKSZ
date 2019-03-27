#include <iostream>
#include "png++/png.hpp"

int main (int argc, char *argv[])
{
	if (argc !=2)
	{
		std::cout << " Missing starter argument ";
		return -1;
	}

	double a = -2.0;
	double b = 0.7;
	double c = -1.35;
	double d = 1.35;

	int height = 1024;
	int width = 768;
	int iterationHatar = 255;

	png::image <png::rgb_pixel> image (width, height);

	double dx= (b-a) / width;
	double dy= (d-c) / height;

	double reC;
	double imC;
	double reZ;
	double imZ;
	double newreZ;
	double newimZ;

	int iteration = 0;

	for (int i=0; i<height; ++i)
	{
		for(int j=0; j<width; ++j)
		{
			reC = a+k*dx;
			imC = d-j*dy;
			reZ = 0;
			imZ = 0;
			iteracio = 0;

			while (reZ*reZ + imZ* imZ < 4 && iteration < iterationHatar)
			{
				newreZ = reZ*reZ - imZ*imZ + reC;
				newimZ = 2*reZ*imZ + imC;
				reZ = newreZ;
				imZ = newimZ;

				++iteration;
			}

		image.set_pixel(i, j, png::rgb_pixel(255-iteration%256, 255-iteration%256, 255-iteration%256));
		}
	}

	image.write (argv[1]);
	std::cout << argv[1] << " Done " << std::endl;

}



























