#include <iostream>
#include <fstream>


int main() {
	std::ofstream image_file("image.ppm");

	int width = 256;
	int height = 256;

	// Write image headers
	image_file << "P3\n" << width << ' ' << height << std::endl << "255\n";

	for (int j = 0; j < height; j++) {
		for (int i = 0; i < width; i++) {
			double r = double(i) / (width - 1);
			double g = double(j) / (height - 1);
			double b = 0;

			int ir = int(255 * r);
			int ig = int(255 * g);
			int ib = int(255 * b);

			image_file << ir << ' ' << ig << ' ' << ib << std::endl;
		}
	}

	image_file.close();
}
