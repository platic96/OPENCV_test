#include <opencv2\opencv.hpp>
#include <iostream>
#include "openJPG.h"

using namespace cv;
using namespace std;

int main(int, char**) {
	
		Mat origina_image;
		origina_image = imread("lenna.bmp", CV_LOAD_IMAGE_GRAYSCALE);

		Mat copyed_image(origina_image);
		Mat copyed_image2;
		copyed_image2 = origina_image;

		imshow("original_image", origina_image);
		imshow("copyed_image", copyed_image);
		imshow("copyed_image2", copyed_image2);

		
	
	//VideoCapture capture(0);
	//if (!capture.isOpened()) {
	//	cout << "웹캠을 열수 없습니다." << endl;
	//	return 1;'
	//}

	//capture.set(CAP_PROP_FRAME_WIDTH, 320);
	//capture.set(CAP_PROP_FRAME_HEIGHT, 240);

	//Mat frame;
	//namedWindow("input", 1);

	//while (1) {
	//	capture >> frame;
	//	imshow("input", frame);

	//	if (waitKey(1) == 27) break;
	//}
	//return 0;
}