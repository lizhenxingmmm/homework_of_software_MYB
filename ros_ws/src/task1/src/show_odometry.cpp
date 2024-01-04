#include "show_odometry.h"

void chatterCallback(const nav_msgs::Odometry::ConstPtr& msgs){
    ROS_INFO("geometry_info:odometry data");
    ROS_INFO("x(float64): %.2lf",msgs->pose.pose.position.x);
    ROS_INFO("y(float64): %.2lf",msgs->pose.pose.position.y);
    ROS_INFO("z(float64): %.2lf",msgs->pose.pose.position.z);
    ROS_INFO("----------------------------------------------");
}

int main(int argc,char** argv){
    std::cout<<"hello"<<std::endl;
    ros::init(argc, argv, "show_odometry");
    ros::NodeHandle n;
    ros::Subscriber sub = n.subscribe("/odom", 1000, chatterCallback);
    ros::spin();
    return 0;
}