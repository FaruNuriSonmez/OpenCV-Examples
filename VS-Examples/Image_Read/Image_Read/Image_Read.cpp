// Image_Read.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main()
{
	Mat img = imread("opencv_logo.png");
	if (img.empty())
	{
		cout << "Could not open ýmage" << endl;
	}
	else
	{
		namedWindow("OpenCV Logo", WINDOW_NORMAL);
		imshow("OpenCV Logo", img);
		waitKey(0); // wait until you press a key
		exit;
	}
	return 0;
}

