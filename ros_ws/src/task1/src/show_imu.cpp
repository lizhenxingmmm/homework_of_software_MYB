#include "show_imu.h"

void chatterCallback(const sensor_msgs::Imu::ConstPtr& msgs){
    
    ROS_INFO("geometry_info:quaternion orientation");
    ROS_INFO("x(float64): %.2lf",msgs->orientation.x);
    ROS_INFO("y(float64): %.2lf",msgs->orientation.y);
    ROS_INFO("z(float64): %.2lf",msgs->orientation.z);
    ROS_INFO("w(float64): %.2lf",msgs->orientation.w);
    ROS_INFO("OKOKOKOKOKOKOKOKOKOKOKOKOKOKOKOKOKOKOKOK");
}

int main(int argc,char** argv){
    std::cout<<"hello"<<std::endl;
    ros::init(argc, argv, "show_imu");
    ros::NodeHandle n;
    ros::Subscriber sub = n.subscribe("/imu/data_raw", 1000, chatterCallback);
    ros::spin();
    return 0;
}
