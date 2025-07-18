#include <iostream>
#include <fstream>

#include "Vec3.h"
#include "Color.h"


int main() {
	std::ofstream image_file("image.ppm");

	int width = 256;
	int height = 256;

	// Write image headers
	image_file << "P3\n" << width << ' ' << height << std::endl << "255\n";

	for (int j = 0; j < height; j++) {
		for (int i = 0; i < width; i++) {
			auto pixel_color = color(double(i) / (width - 1), double(j) / (height - 1), 0);
			write_color(image_file, pixel_color);
		}
	}

	image_file.close();
}
