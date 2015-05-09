#include "opencv2\core.hpp";
#include "opencv2\highgui.hpp";
#include "opencv2\imgcodecs.hpp";
#include <iostream>

using namespace cv;
using namespace std;

int main() {
	Mat image;

	VideoCapture cap;
	int camOpen = cap.open(CV_CAP_ANY);

	namedWindow("window", CV_WINDOW_AUTOSIZE);

	while (true) {
		cap >> image;
		
		if (!image.empty()){
			imshow("window", image);
		}

		// delay 33ms
		waitKey(33);
	}

}