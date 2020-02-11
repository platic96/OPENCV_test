#include "openJPG.h"

void show_img()
{
		Mat image;
		image = imread("rice.bmp", IMREAD_COLOR);
		if (image.empty()) {
			cout << "Could not open or find the image" << endl;
			return;
		}

		namedWindow("Original", WINDOW_AUTOSIZE);
		imshow("Original", image);

		waitKey(0);

}
