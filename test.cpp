#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
using namespace cv;
using namespace std;
//int main(int argc, char** argv)
//{
//    Mat image = imread("C:/Users/Lenovo/Pictures/Screenshots/Sample.png");
//    if (image.empty()) {
//        cout << "Image File "
//            << "Not Found" << endl;
//        cin.get();
//        return -1;
//    }
//    imshow("Window Name", image);
//    waitKey(0);
//    return 0;
//}
void main()
{
	string path = "C:/Users/Lenovo/Downloads/Question 5/Question 5/DS-IQ-005-OcclusionFactor-Video.mp4";
	VideoCapture cap(path);
	Mat video;
    while (true)
    {
        cap.read(video);
        if (video.empty())
        {
            std::cout << "failed to open video" << std::endl;
            break;
        }
        else
        {
            imshow("Window Name", video);
            waitKey(1);
        }
    }
}