# E-ProjectDocs
Main project repository for E.A.R.T.H documentation  
![LOGO](https://github.com/lboroWMEME-19WSD001/E-ProjectDocs/blob/master/E.A.R.T.H%20-%20Logo.png)  

# Current Status of Current Key Parts

Gateway 2 Progress Video: https://youtu.be/yT4LsTBTJXM

- TriTrack         - Controler over WiFi using ROS  
- Dani             -   
- Rubbish Sorting  - RGB Bin Detection Completed  
- Crab Detection   - Draws box and identifies colour (Ok Reliability) - No path tracking implemented  
- Mapping          - RGBD Using Kinect on TriTrack -> see mapping repo
                   - Overhead map for crap and waterline detection to come
- Pathing          - Not Implemented - Need a MAP - Will use ROS and possibly A* with a weighted decision tree  
- Seagull Detection- Rudimentary audio detection by searching for features extracted for sample sound data
                   - Plan to alert the operators using telemetry User interface on ROS machine
- Water Line       - Not Implemented  

# Other REPO's

Basic Control      - https://github.com/lboroWMEME-19WSD001/E-Basic-Control  
Crab Detection     - https://github.com/lboroWMEME-19WSD001/E-CrabDetection  
DaNI Basic Control - https://github.com/lboroWMEME-19WSD001/E-DaNI-Robot  
Seagull Detection  - https://github.com/lboroWMEME-19WSD001/Seagull-Detection  
Mapping/Navigation - https://github.com/lboroWMEME-19WSD001/E-Mapping-and-Navigation  

#### CAD (Viewable in WebBrowser)
TriTrack Design (Fusion 360) - https://a360.co/3aZK0rs  

# Jobs List

## To Do - Please Add or Move as Necessary

- Trash Sorter Rig  
- Tri Track Chassis  
- Seagul Detection  
- Trash Detection  
- Dani  
- Water Line  
- Crab Detection Robustness   
- User Interface working demo  
- Integration   
- Power Board  

## In Progress

- Mapping 
- Navigation 

## Done

- Crab Detection Demo   
- RGB Bin Detection   
- 

# Budget Summary

### Total Budget: £200

#### Remaining: £131.92
#### Spent: £68.08

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

- Using Bot Boarduino for motor control
- SPI Comms to a Pi 4.
- Pi 4 on WiFi to Controlling Computer
- Bot Boarduino Code in C++ to send servo timing commands to sabertooth
- Pi 4 used to map the input to the correct timing
- Raspberry Pi Sense Hat for IMU data

Demo of Current Capabilities:  
[![TriTrackDemo](http://img.youtube.com/vi/_1ab4rzcC8o/0.jpg)](http://www.youtube.com/watch?v=_1ab4rzcC8o "TriTrack Demo")

Current Goal: Automate Travel to a specified location on a map

- Next Step : SLAM the TriTrack - FH

# Rubbish Sorting

- Python and Opencv used to create computer vision method of detecting and recognising LED sequence.
- Bins effectively detected from up to a metre
- Code can be found in the RGB-Bin-Detection Repository

# Crab Detection

Code can be found : https://github.com/lboroWMEME-19WSD001/E-CrabDetection/

- Modified Traffic Sign Recognition algorithm.
- Uses 2 stage Template Matching on luminance of image captured
- Keeps a bounding box and Id for each match
- Correct match is not 100% accurate  
![Crab_Incorrect_Match](https://github.com/lboroWMEME-19WSD001/E-ProjectDocs/blob/master/Project%20Videos%20%26%20Pictures/CrabIncorrectMatch.JPEG)

- Currently Parked and working on Mapping - FH


# Mapping

Code can be found: https://github.com/lboroWMEME-19WSD001/E-Mapping

### Local Mapping

- RGBD using Xbox kinect on the TriTrack
- Point cloud and 2D occupancy grid is produced
- Localisation of the TriTrack within this 

[![](http://img.youtube.com/vi/Hy-FY70L_dA/0.jpg)](http://www.youtube.com/watch?v=Hy-FY70L_dA "TriTrack Mapping Demo")

### Global Mapping (Overhead Camera)

- looking at MonoSlam and map merging to have one master map
- Pi will send WebCam data back to ROS Computer to be processed
- Looks for the Crabs and adds to the map - not integrated
- Looks for the Tri Track and sends location and pathing data 

# Seagull Detection

Code can be found: https://github.com/lboroWMEME-19WSD001/Seagull-Detection

- Tried cross correlation techniques but could not get reliable results (many false positives)
- Using the labour-intensive approach of manually extracting features unique to seagull sounds from their FFTs
- The features are relative and not absolute so as to cope in diverse environments
- Currently, detector checks for those features with better success, but has issues with human noise and some seagull sounds
- Will continue AI research in hopes of getting more robust system, possibly using ml5.js

# Waterline

- Camera will look for line of water - most likely to be done with a simple mask 
- This will be added to the weightings of the pathing map.
- Idea! use a moisture sensor to detect the moisture in the sand and as it goes higher drive away from the water
