ccny_vision
===========

This is a fork of the ar_pose library created by Ivan Dryanovski, William Morris, Gautier Dumonteil et al. I have modified both ar_single and ar_multi to accept any camera feed (not just usb_cam). To specifiy which camera feed to use, set parameters "camera_image_topic" and "camera_info_topic" to relevant feeds.

Example node launch (for ARDrone):

```xml
<node name="ar_pose" pkg="ar_pose" type="ar_multi" respawn="false" output="screen">
  <param name="marker_pattern_list" type="string" value="$(find ar_pose)/data/object_4x4"/>
	<param name="threshold" type="int" value="100"/>
	<param name="camera_image_topic" type="string" value="/ardrone/bottom/image_raw"/>
	<param name="camera_info_topic" type="string" value="/ardrone/bottom/camera_info"/>
</node>
```
