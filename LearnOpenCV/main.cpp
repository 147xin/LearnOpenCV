//
//  main.cpp
//  LearnOpenCV
//
//  Created by Yixin Huang on 14/11/17.
//  Copyright (c) 2014年 DML. All rights reserved.
//

#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;

int main(int argc, const char* argv[])
{
    cv::Mat image;
    cout << "size: " << image.size().height << "," << image.size().width << endl;
    
    image=cv::imread("/Users/hix/XcodeProjects/LearnOpenCV/LearnOpenCV/test.jpg");
    if (!image.data) {
        cout << "图像未创建" << endl;
    }
    cv::namedWindow("Original Image");
    cv::imshow("Original Image", image);
    cv::waitKey(0);
    cv::Mat result;
    cv::flip(image, result, 1);
    
    cv::namedWindow("Output Image");
    cv::imshow("Output Image", result);
    cv::waitKey(0);
    
    
    
    cv::imwrite("/Users/hix/XcodeProjects/LearnOpenCV/LearnOpenCV/output.bmp", result);
    return 0;
}
