#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main(void)
{
	/* 이미지 불러오기 */
	Mat image = imread("testImage01.jpg");

	/* 이미지 보여주기 */
	namedWindow("Image1");
	imshow("Image1", image);
	waitKey(0);

	/* 키 입력되면 윈도우 종료 */
	destroyAllWindows();

	/* 이미지 저장하기 */
	imwrite("savedImage01.jpg", image);

	return 0;
}