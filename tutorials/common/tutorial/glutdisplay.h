// ======================================================================== //
// Copyright 2009-2013 Intel Corporation                                    //
//                                                                          //
// Licensed under the Apache License, Version 2.0 (the "License");          //
// you may not use this file except in compliance with the License.         //
// You may obtain a copy of the License at                                  //
//                                                                          //
//     http://www.apache.org/licenses/LICENSE-2.0                           //
//                                                                          //
// Unless required by applicable law or agreed to in writing, software      //
// distributed under the License is distributed on an "AS IS" BASIS,        //
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. //
// See the License for the specific language governing permissions and      //
// limitations under the License.                                           //
// ======================================================================== //

#pragma once

#include "sys/platform.h"
#include "sys/ref.h"
#include "camera.h"

namespace embree
{

  /* camera */
  extern Camera g_camera;

  /* enter the GLUT main run loop */
  void enterGlutRunLoop();

  /* initialize GLUT */
  void initGlut(const std::string name, const size_t width, const size_t height, const bool fullscreen, const bool mouseMode);

  /* override the default keyboard event callback */
  void setGlutKeyboardFunc(void (*func)(unsigned char key, int x, int y));

}
