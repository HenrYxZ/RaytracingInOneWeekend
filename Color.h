#pragma once

#include "vec3.h"

#include <iostream>
#include <fstream>

using color = vec3;

void write_color(std::ofstream& out, const color& pixel_color) {
  auto r = pixel_color.x();
  auto g = pixel_color.y();
  auto b = pixel_color.z();

  // Translate the [0,1] component values to the byte range [0,255].
  int rbyte = int(255 * r);
  int gbyte = int(255 * g);
  int bbyte = int(255 * b);

  // Write out the pixel color components.
  out << rbyte << ' ' << gbyte << ' ' << bbyte << '\n';
}
