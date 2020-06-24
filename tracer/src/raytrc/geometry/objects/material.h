#pragma once

#include "maths/maths.h"

using namespace gem;

namespace raytrc {

struct Material {  // reflection parameter + phong exponent
  Vec3f ka, kd, ks;
  float n;

  Material(Vec3f ka, Vec3f kd, Vec3f ks, float n)
      : ka(ka), kd(kd), ks(ks), n(n){};
};

/* predefined materials ... */
extern Material MATERIAL_BASIC;

}  // namespace raytrc