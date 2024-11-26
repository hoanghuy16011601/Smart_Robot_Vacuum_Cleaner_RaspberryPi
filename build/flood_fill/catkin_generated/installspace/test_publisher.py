import rospy
from std_msgs.msg import String

if __name__ == '__main__':
    print("Start Publish")
    rospy.init_node("test_node")
    Rate = rospy.Rate(1)
    pub_node = rospy.Publisher("test",String,queue_size=10)
    while not rospy.is_shutdown():
        pub_node.publish("test")
        Rate.sleep()