/*
 * (C) Copyright 2014 Kurento (http://kurento.org/)
 *
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the GNU Lesser General Public License
 * (LGPL) version 2.1 which accompanies this distribution, and is available at
 * http://www.gnu.org/licenses/lgpl-2.1.html
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 */

#include <opencv2/opencv.hpp>
#include "ExampleFilterOpenCVImpl.hpp"

using namespace kurento;
int
main (int argc, char **argv)
{
  cv::VideoCapture cap(0);
  cv::Mat frame;
  kurento::module::example::ExampleFilterOpenCVImpl filter;

  if (cap.isOpened()){
    while (cap.read(frame)) {
      filter.process(frame);
      cv::imshow ("resultWindow", frame);
      char key = cv::waitKey (2);
      if (key == 27) {
        break;
      }
    }
  }
  return 0;
}
