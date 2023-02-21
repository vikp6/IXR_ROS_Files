#!/usr/bin/env python

import random
import rclpy

from rclpy.node import Node

from unity_robotics_demo_msgs.msg import PosRot


class PosRotPublisher(Node):

    def __init__(self, subscriber):
        super().__init__('posrot_publisher')
        self.datasubscriber = subscriber

        self.publisher_ = self.create_publisher(PosRot, 'posrot', 1000000000)
        timer_period = 0.00000000000000000000000000000000000000000000001  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0
        self.do_publish()

    def do_publish(self):
        if self.i == 0:
            posrot = PosRot()

            posrot = self.datasubscriber.datacarrierPosRot

            #Somehow subscribe to "pos_rot" topic from Unity here 

            if(posrot==None):
                posrot.pos_x = 0
                posrot.pos_y = 0
                posrot.pos_z = 0
                posrot.rot_w = 1.0
                posrot.rot_x = 0.0
                posrot.rot_y = 0.0
                posrot.rot_z = 0.0


            self.get_logger().info(f'Publishing: {posrot}')
            self.publisher_.publish(posrot)
            
        
    def timer_callback(self):
        self.i = 0
        self.do_publish()
        print("ROS to Unity")
        #quit()     

class FromUnityPosRotSubscriber(Node):
    def __init__(self):
        super().__init__('fromunityposrot_subscriber')
        self.subscriber_=self.create_subscription(PosRot, '/pos_rot', self.listener_callback,1000000000)
        self.datacarrierPosRot = PosRot()

    def listener_callback(self, msg: PosRot):
        self.get_logger().info(str(msg))
        self.datacarrierPosRot = msg
        #rclpy.spin(PosRotPublisher(self))
        rclpy.spin_once(PosRotPublisher(self))
        #return PosRot



def main(args=None):
    rclpy.init(args=args)

    posrot_fromUnitySub = FromUnityPosRotSubscriber()

    posrot_pub = PosRotPublisher(posrot_fromUnitySub)

    

    while rclpy.ok():
        #rclpy.spin_once(posrot_pub)
        rclpy.spin(posrot_fromUnitySub)

        #rclpy.spin(posrot_pub)

    #color_pub.destroy_node()
    #rclpy.shutdown()


if __name__ == '__main__':
    main()
