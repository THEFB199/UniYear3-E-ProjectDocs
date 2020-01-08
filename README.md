# E-ProjectDocs
Main project repository for E.A.R.T.H documentation  
![LOGO](https://github.com/lboroWMEME-19WSD001/E-ProjectDocs/blob/master/E.A.R.T.H%20-%20Logo.png)  

# Current Status of Current Key Parts
- TriTrack         - Controler over WiFi using ROS  
- Dani             -   
- Rubbish Sorting  - RGB Bin Detection Completed  
- Crab Detection   - Draws box and identifies colour (Ok Reliability) - No path tracking implemented  
- Mapping          - Global Mapping - Collection of non-working code (Overhead Camera)  
                   - TriTrack Local Mapping - Map Generated using RGBD and Xbox Kinect  
- Pathing          - Not Implemented - Need a MAP - Will use ROS and possibly A* with a weighted decision tree  
- Seagul Detection -   
- Water Line       - Not Implemented  

# Other REPO's

Basic Control  - https://github.com/lboroWMEME-19WSD001/Basic-Control   
Crab Detection - https://github.com/lboroWMEME-19WSD001/CrabDetection/  
DaNI Basic Control - https://github.com/lboroWMEME-19WSD001/DaNI_ROS_myRIO  
Mapping        -   

# Budget Summary

### Total Budget: £200

#### Remaining: £154.55
#### Spent: £45.45

https://github.com/lboroWMEME-19WSD001/E-ProjectDocs/raw/master/Earth%20-%20Budget%20Spreadsheet.xlsx

# ePortfolio

https://teamearth1.wordpress.com/

# Systems Map

![System Level Diagram](https://github.com/lboroWMEME-19WSD001/E-ProjectDocs/blob/master/Project%20Videos%20%26%20Pictures/SysDiagram.png)  

# Tri Track Summary

Controlling Code can be found: https://github.com/lboroWMEME-19WSD001/Basic-Control  

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

Code can be found : https://github.com/lboroWMEME-19WSD001/CrabDetection/

- Modified Traffic Sign Recognition algorithm.
- Uses 2 stage Template Matching on luminance of image captured
- Keeps a bounding box and Id for each match
- Correct match is not 100% accurate  
![Crab_Incorrect_Match](https://github.com/lboroWMEME-19WSD001/E-ProjectDocs/blob/master/Project%20Videos%20%26%20Pictures/CrabIncorrectMatch.JPEG)

- Currently Parked and working on Mapping - FH


# Mapping

Code can be found: 

### Local Mapping

- This is to be used for picking things up from the surrounding areas
- Using ROS and RVIS to develop.
- Have Xbox Kinect camera - Local Mapping for the TriTrack
  - RGBD method of SLAM 

### Global Mapping (Overhead Camera)

- looking at MonoSlam for TriTrack
- Pi will send WebCam data back to ROS Computer to be processed
- Looks for the Crabs and adds to the map - not integrated
- Looks for the Tri Track and sends location and pathing data 

# Waterline

- Camera will look for line of water - most likely to be done with a simple mask 
- This will be added to the weightings of the pathing map.
