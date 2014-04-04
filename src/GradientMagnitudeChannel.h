#ifndef GRADMAG_H
#define GRADMAG_H

#include "cv.h"

using namespace cv;

class GradientMagnitudeChannel
{
public:
    int enabled; //if true enable gradient magnitude channel
    int colorChannelIndex; //if>0 color channel to use for grad computation
    int normalizationRadius; //normalization radius for gradient
    double normalizationConstant; //normalization constant for gradient
    int full; //if true compute angles in [0,2*pi) else in [0,pi)
    int nChannels;
    String padWith;

	//all of the next procedures still need proper names and maybe some refactoring
	//they are used in Pyramid.cpp's computeSingleScaleChannelFeaturePyramid(Mat)
	Mat* mGradMag(Mat, int, int)
	void gradMag(float*, float*, float*, int, int, int, bool)
	void grad1(float*, float*, float*, int, int, int);
	float* acosTable();
};

#endif
