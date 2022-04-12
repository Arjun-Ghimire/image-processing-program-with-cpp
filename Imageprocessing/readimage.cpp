// this are the libraries

#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>

using namespace cv;
using namespace std;

void main() {
	String path = "resources/pubg.png";
	Mat img = imread(path);
	imshow("Image",img);
	waitKey(0);
}