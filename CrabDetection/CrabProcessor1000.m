close all; clear all; clc;

  cam = webcam;
% preview(cam);
  cam.Exposure = -8;
  cam.Resolution='640x480' ;
 video = VideoReader('RedCrabDarkVideo.mp4');
 frame = 0;
%  hBlobAnalysis = gpuArray()
while (frame <= video.NumFrames)
cam.Exposure = -8;
%  I = video.readFrame;
 I = snapshot(cam);

IMoreContrast = imadjust(I,stretchlim(I));

IMoreColour = decorrstretch(IMoreContrast, 'Tol', 0.00001);
% I = snapshot(cam);
% I = imread('Testimage1.jpg');
% imshow(I);

[BW,maskedRGBImage] = RedCrabMask4(IMoreColour);

BWFilled = imfill(BW,'holes');
BWremovebits = bwareaopen(BWFilled,50);
% IGPU = gpuArray(BWremovebits);
% [Ilabel num]=bwlabel(BWremovebits);   
% Iprops=regionprops(Ilabel);            
%extracting the bounding box properties
% Ibox=[Iprops.BoundingBox]; 
% imshow(BWremovebits);

hBlobAnalysis = vision.BlobAnalysis('MinimumBlobArea',100,'MaximumBlobArea',5000);
[objArea,objCentroid,bboxOut] = step(hBlobAnalysis,BWremovebits);

Ishape = insertShape(IMoreContrast,'rectangle',bboxOut,'Linewidth',2,'Color','red');
% figure
% subplot(1,2,1)

 imshow(Ishape);

%  imshow(BWFilled);

% imshow(BWremovebits);

end
