#pragma once

namespace cv 
{
	class Mat;
}

class OpenCVConcept
{
public:
	OpenCVConcept();
	~OpenCVConcept();

	int rows() const;
	int cols() const;

	bool isColor() const;

private:
	cv::Mat* image;
};
