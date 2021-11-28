# base path to YOLO directory
MODEL_PATH = "yolo-coco"
# initialize minimum probability to filter weak detections along with
# the threshold when applying non-maxima suppression
MIN_CONF = 0.3
NMS_THRESH = 0.3
USE_GPU = False
# define the minimum safe distance (in pixels) that two people can be from each other
MIN_DISTANCE = 50