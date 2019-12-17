%% Load Camera and Pretrained Network

camera = webcam;
modelfile = 'trashnet.onnx';
classes = ["carboard" "glass" "metal" "paper" "plastic"];
net = importONNXNetwork(modelfile, ...
    'OutputLayerType','classification', ...
    'Classes',classes);

%%%
% If you want to run the example again, first run the command |clear
% camera| 

%% Classify Snapshot from Camera
% To classify an image, you must resize it to the input size of the
% network. Get the first two elements of the |InputSize| property of the
% image input layer of the network. The image input layer is the first
% layer of the network.
inputSize = net.Layers(1).InputSize(1:2);

%%
% Display the image from the camera with the predicted label and its
% probability. You must resize the image to the input size of the network
% before calling |classify|.
figure
im = snapshot(camera);
image(im)
im = imresize(im,inputSize);
[label,score] = classify(net,im);
title({char(label),num2str(max(score),2)});

%% Continuously Classify Images from Camera
% To classify images from the camera continuously, include the previous
% steps inside a loop. Run the loop while the figure is open. To stop the
% live prediction, simply close the figure. Use |drawnow| at the end of
% each iteration to update the figure.
h = figure;

while ishandle(h)
    im = snapshot(camera);
    image(im)
    im = imresize(im,inputSize);
    [label,score] = classify(net,im);
    title({char(label), num2str(max(score),2)});
    drawnow
end

%% Display Top Predictions
% The predicted classes can change rapidly. Therefore, it can be helpful to
% display the top predictions together. You can display the top five
% predictions and their probabilities by plotting the classes with the
% highest prediction scores.

%%%
% Classify a snapshot from the camera. Display the image from the camera
% with the predicted label and its probability. Display a histogram of the
% probabilities of the top five predictions by using the |score| output of
% the |classify| function.

%%%
% Create the figure window. First, resize the window to have twice the
% width, and create two subplots.
h = figure;
h.Position(3) = 2*h.Position(3);
ax1 = subplot(1,2,1);
ax2 = subplot(1,2,2);

%%%
% In the left subplot, display the image and classification together.
im = snapshot(camera);
image(ax1,im)
im = imresize(im,inputSize);
[label,score] = classify(net,im);
title(ax1,{char(label),num2str(max(score),2)});

%%%
% Select the top five predictions by selecting the classes with the highest
% scores.
[~,idx] = sort(score,'descend');
idx = idx(5:-1:1);
classes = net.Layers(end).Classes;
classNamesTop = string(classes(idx));
scoreTop = score(idx);

%%%
% Display the top five predictions as a histogram.
barh(ax2,scoreTop)
xlim(ax2,[0 1])
title(ax2,'Top 5')
xlabel(ax2,'Probability')
yticklabels(ax2,classNamesTop)
ax2.YAxisLocation = 'right';

%% Continuously Classify Images and Display Top Predictions
% To classify images from the camera continuously and display the top
% predictions, include the previous steps inside a loop. Run the loop while
% the figure is open. To stop the live prediction, simply close the figure.
% Use |drawnow| at the end of each iteration to update the figure.

%%%
% Create the figure window. First resize the window, to have twice the
% width, and create two subplots. To prevent the axes from resizing, set
% |ActivePositionProperty| to |'position'|.
h = figure;
h.Position(3) = 2*h.Position(3);
ax1 = subplot(1,2,1);
ax2 = subplot(1,2,2);
ax2.ActivePositionProperty = 'position';

%%%
% Continuously display and classify images together with a histogram of the
% top five predictions.
while ishandle(h)
    % Display and classify the image
    im = snapshot(camera);
    image(ax1,im)
    im = imresize(im,inputSize);
    [label,score] = classify(net,im);
    title(ax1,{char(label),num2str(max(score),2)});
    
    % Select the top five predictions
    [~,idx] = sort(score,'descend');
    idx = idx(5:-1:1);
    scoreTop = score(idx);
    classNamesTop = string(classes(idx));
    
    % Plot the histogram
    barh(ax2,scoreTop)
    title(ax2,'Top 5')
    xlabel(ax2,'Probability')
    xlim(ax2,[0 1])
    yticklabels(ax2,classNamesTop)
    ax2.YAxisLocation = 'right';
    
    drawnow
end