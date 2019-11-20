Crab = imread('redcrab.jpeg');
Scene = imread('ROISnapWebcam.jpg');

CrabG = rgb2gray(Crab);
SceneG = rgb2gray(Scene);

boxPoints = detectSURFFeatures(CrabG);
scenePoints = detectSURFFeatures(SceneG);
[boxFeatures, boxPoints] = extractFeatures(CrabG, boxPoints);
[sceneFeatures, scenePoints] = extractFeatures(SceneG, scenePoints);

boxPairs = matchFeatures(boxFeatures, sceneFeatures);

matchedBoxPoints = boxPoints(boxPairs(:, 1), :);
matchedScenePoints = scenePoints(boxPairs(:, 2), :);
% figure;
% showMatchedFeatures(Crab, Scene, matchedBoxPoints, ...
%     matchedScenePoints, 'montage');

[tform, inlierBoxPoints, inlierScenePoints] = ...
    estimateGeometricTransform(matchedBoxPoints, matchedScenePoints, 'affine');

% figure;
% showMatchedFeatures(CrabG, SceneG, inlierBoxPoints, ...
%     inlierScenePoints, 'montage');
% title('Matched Points (Inliers Only)');


boxPolygon = [1, 1;...                           % top-left
        size(CrabG, 2), 1;...                 % top-right
        size(CrabG, 2), size(CrabG, 1);... % bottom-right
        1, size(CrabG, 1);...                 % bottom-left
        1, 1];
    
    
    
    newBoxPolygon = transformPointsForward(tform, boxPolygon);
    
    
    figure;
imshow(Scene);
hold on;
line(newBoxPolygon(:, 1), newBoxPolygon(:, 2), 'Color', 'y');
title('Detected Box');
