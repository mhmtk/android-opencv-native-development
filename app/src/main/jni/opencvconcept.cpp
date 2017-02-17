#include "opencvconcept.h"

#include "opencv2/core.hpp"

OpenCVConcept::OpenCVConcept()
{
	this->image = new cv::Mat(300, 500, CV_8UC3);
}

OpenCVConcept::~OpenCVConcept()
{
	delete this->image;
}

int OpenCVConcept::rows() const
{
	return this->image->rows;
}

int OpenCVConcept::cols() const
{
	return this->image->cols;
}

bool OpenCVConcept::isColor() const
{
	return this->image->channels() > 1;
}
