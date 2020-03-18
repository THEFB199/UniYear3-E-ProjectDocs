# E-ProjectDocs
Main project repository for E.A.R.T.H documentation  
![LOGO](https://github.com/lboroWMEME-19WSD001/E-ProjectDocs/blob/master/E.A.R.T.H%20-%20Logo.png)  

# Gateway 3 Information

#### Progress Video: https://youtu.be/VzLUijcFLLI
#### Plan On A Page: https://github.com/lboroWMEME-19WSD001/E-ProjectDocs/blob/master/PlanOnAPage%20GW3%20-%20Team%20EARTH.pptx
#### Presentation:   https://1drv.ms/p/s!Ahn7vW5IvoqFhspq26cUGy3EL4rCyQ?e=Wnw39I

# Current Status of Current Key Parts

Gateway 3 Progress Video: https://youtu.be/VzLUijcFLLI
Gateway 2 Progress Video: https://youtu.be/yT4LsTBTJXM

- TriTrack           - RPS Navigation Stack used to send goal within a map
- Rubbish Sorting    - RGB Bin Detection Completed  
- Crab Detection     - Draws box and identifies colour path of crab shown (integrated into overhead camera)
- Mapping/Navigation - ROS Naviagation Stack used in conjunction with an Xbox Kinect and RtabMap
- Seagull Detection  - Rudimentary audio detection by searching for features extracted for sample sound data
                     - Plan to alert the operators using telemetry User interface on ROS machine
- Water Line         - input a line via simulink to the grad map
- User Interface     - Providing Integration of all the sub-systems and different output to the user

# Other REPO's

- Basic Control      - https://github.com/lboroWMEME-19WSD001/E-Basic-Control  
- Crab Detection     - https://github.com/lboroWMEME-19WSD001/E-OverHeadCam
- DaNI Basic Control - https://github.com/lboroWMEME-19WSD001/E-DaNI-Robot  
- Seagull Detection  - https://github.com/lboroWMEME-19WSD001/Seagull-Detection  
- Mapping/Navigation - https://github.com/lboroWMEME-19WSD001/E-Mapping-and-Navigation
- Rubbish Sorting Rig - https://github.com/lboroWMEME-19WSD001/E-Sorting-Rig
- RGB Bin Detection - https://github.com/lboroWMEME-19WSD001/E-RGB-Bin-Detection
- User Interface    - https://github.com/lboroWMEME-19WSD001/E-UserInterface

#### CAD (Viewable in WebBrowser)
TriTrack Design (Fusion 360) - https://a360.co/3aZK0rs  

# Jobs List

## To Do - Please Add or Move as Necessary
  

## In Progress

- Mapping 
- Navigation 
- Integration
- Crab Detection Robustness  
- Water Line 
- Trash Sorter Rig  
- Seagul Detection  
- Trash Detection 
- Power Board

## Done

- Crab Detection Demo   
- RGB Bin Detection   
- Tri Track Chassis  
- User Interface working demo  

# Budget Summary

### Total Budget: £500

#### Remaining: £165.34
#### Spent: £334.66

![Budget Link](https://github.com/lboroWMEME-19WSD001/E-ProjectDocs/raw/master/Earth%20-%20Budget%20Spreadsheet.xlsx)  


# ePortfolio

https://teamearth1.wordpress.com/

# Systems Map

![System Level Diagram](https://github.com/lboroWMEME-19WSD001/E-ProjectDocs/blob/master/Project%20Videos%20%26%20Pictures/SysDiagram.png)  

# Raspberry Pi 4 on Eduroam + ROS

- Testing multiple different operating systems on the raspberry pi 4 has resulted in some findings, these are listed below.

This is for the September 2019 release of Raspbian Buster
- Raspbien Buster in its current state does not support enterprise networking. Therefore no eduroam.
- ROS will not install correctly on the Pi 4 running buster.

Official version of ubuntu for the Pi 4 is version 19. ROS will not install on version 19. Eduroam however will work on this version of the Pi 4. 

Installed unoffical version of ubuntu 18.04 from here: https://jamesachambers.com/raspberry-pi-4-ubuntu-server-desktop-18-04-3-image-unofficial/

Desktop works correctly with all packages, raspi-config functions corectly, eduroam functions correctly.

When installing ROS the guides for Ubuntu 18 will work correctly

Eduroam, follow guide provided by PST


# Tri Track Summary

Controlling Code can be found: https://github.com/lboroWMEME-19WSD001/E-Basic-Control  

- PI4 takes in data from Kinect which is used to then build a map for navigaiton
- Commands recived and sent over from controlling computer
- Using Bot Boarduino for motor control
- SPI Comms to a Pi 4.
- Pi 4 on WiFi to Controlling Computer
- Bot Boarduino Code in C++ to send servo timing commands to sabertooth
- Pi 4 used to map the input to the correct timing
- Raspberry Pi Sense Hat for IMU data

Demo of Current Capabilities:  
[![TriTrackDemo](http://img.youtube.com/vi/_1ab4rzcC8o/0.jpg)](http://www.youtube.com/watch?v=_1ab4rzcC8o "TriTrack Demo")

# Rubbish Sorting

- Python and Opencv used to create computer vision method of detecting and recognising LED sequence.
- Bins effectively detected from up to a metre
- Code can be found in the RGB-Bin-Detection Repository

# Crab Detection

Code can be found : https://github.com/lboroWMEME-19WSD001/E-OverHeadCam

- Modified Traffic Sign Recognition algorithm.
- Uses 1 stage Template Matching on luminance of image captured
- Second stage re-written to better detect the crabs, using RGB and assiging a confiance for the ROI's
- Keeps a bounding box and Id for each match
- From GW2 matches of colours are much more reliable
- Integration with top camera for  use in cloudy day lighting conditions.
![Crab_Incorrect_Match](https://github.com/lboroWMEME-19WSD001/E-ProjectDocs/blob/master/Project%20Videos%20%26%20Pictures/CrabIncorrectMatch.JPEG)


# Mapping and Navigation

Code can be found: https://github.com/lboroWMEME-19WSD001/E-Mapping-and-Navigation

### Local Mapping

- RGBD using Xbox kinect on the TriTrack
- Point cloud and 2D occupancy grid is produced
- Localisation of the TriTrack within this 
- This is now used for navigation with teh navigation stack

[![](http://img.youtube.com/vi/Hy-FY70L_dA/0.jpg)](http://www.youtube.com/watch?v=Hy-FY70L_dA "TriTrack Mapping Demo")

### Global Mapping (Overhead Camera)

- Pi 3B+ conbimned witha wide angle camera which looks for and tracks the crabs. The top camera also gets the positions of the rubbish. This still needs to be integrated into the tir track map.

# Seagull Detection

Code can be found: https://github.com/lboroWMEME-19WSD001/Seagull-Detection

- Tried cross correlation techniques but could not get reliable results (many false positives)
- Using the labour-intensive approach of manually extracting features unique to seagull sounds from their FFTs
- The features are relative and not absolute so as to cope in diverse environments
- Currently, detector checks for those features with better success, but has issues with human noise and some seagull sounds
- Will continue AI research in hopes of getting more robust system, possibly using ml5.js

# Rubbish Sorting Rig


[![Rubbish Sorting Rig Demo](http://img.youtube.com/vi/qZ9JkHlGdAA/0.jpg)](https://youtu.be/qZ9JkHlGdAA "Rubbish Sorting Rig - Progress")

- Currently capable of movement in the X, Y and Z planes by the use of stepper motor and lead screw shaft
- Can pick up, hold and release a variety of rubbish
- Grabber hand automatically stops on the way down via ultrasonic sensor and on the way up via limit switch
- Movement code are ran and completed by Arduino MEGA
- RGB Bin detection completed using webcam mounted on the gantry arm
- Currently controlled via wireless xbox controller
# Waterline

- using simulink to input a water line. This is inputted into the map the tri track creates. The navigation stack will not cross this line therefore avoiding the water. 

# User Interface
- Currently capable to acquire data from ROS and illustrate it every 0.5s
- Can send data to ROS if the User wants to control the Earth-E manual
- Can stream live video from the Earth-E, Eye-in-the-Sky and Sorting Rig
