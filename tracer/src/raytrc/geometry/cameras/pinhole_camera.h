#pragma once

#include "camera.h"
#include "maths/maths.h"
#include "raytrc/geometry/ray.h"

using namespace gem;

namespace raytrc {

class PinholeCamera : public Camera {
 public:
  Vec3f imagePaneNormal, imagePaneX, imagePaneY;
  float imagePaneWidth, imagePaneHeight;
  Vec2f paneTopLeft, paneSize;

  float distanceToImagePane;
  float fov;     // field of vision in radians
  float aspect;  // aspect ratio

  int pixelWidth, pixelHeight;

  PinholeCamera(Vec3f position, Vec3f target, Vec3f up, int pixelWidth,
                int pixelHeight, float distanceToImagePane,
                float fov = M_PI / 2.0f);

  Ray generateRay(int x, int y, int s) override;

 protected:
  Vec2f getUV(float x, float y);
};

}  // namespace raytrc
