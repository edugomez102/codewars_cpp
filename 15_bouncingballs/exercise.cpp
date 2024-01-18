#include "exercise.hpp"

int countBounces(float h, float bounce, float window) {

  // if(!(h > 0))                    return -1;
  // if(!(bounce > 0 && bounce < 1)) return -1;
  // if(!(window < h))               return -1;

  if(!(h > 0) or !(bounce > 0 && bounce < 1) or !(window < h)) return -1;

  int counts = 0;
  while(h > window) {
    h = h * bounce;
    counts += 2;
  }
  counts -= 1; // the first is only fall
  return counts;
}
