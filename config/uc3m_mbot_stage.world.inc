
define lidar ranger
(
   sensor( 			
    range [ 0.0 5.6 ]
    fov 240
   samples 680
  )

  # generic model properties
  color "black"
  size [ 0.05 0.05 0.1 ]
)

define lidar2 ranger
(
   sensor( 			
    range [ 0.0 5.9 ]
    fov 360
   samples 1020
  )

  # generic model properties
  color "black"
  size [ 0.05 0.05 0.1 ]
)

define mbot position
(
  size [0.650 0.445 0.522]
  origin [0 0 0 0]
  gui_nose 1
  drive "omni"
  #lidar(pose [  0.300 0.000 0.137 0.000 ])
  lidar2(pose [  0.000 0.000 0.137 0.000 ])
  # UNSUPPORTED lidar(pose2 [ -0.230 0.000 0.137 180 ])
  localization "odom"
)

define floorplan model
(
  # sombre, sensible, artistic
  color "gray30"

  # most maps will need a bounding box
  boundary 1

  gui_nose 0
  gui_grid 0

  gui_outline 0
  gripper_return 0
  fiducial_return 0
  laser_return 1
)

# set the resolution of the underlying raytrace model in meters
resolution 0.02

interval_sim 100  # simulation timestep in milliseconds

window
( 
  size [ 400 500 ] 
  rotate [ 0.000 0 ]
  scale 30
)

# throw in a robot
mbot
(     
  name "mbot10" 
  pose [ -0.90 1.07 0.000 0 ]
  color "blue"
)
