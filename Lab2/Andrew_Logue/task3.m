%Andrew Logue - 9/20/2019
clear
clc
%plot the sin(x) graph like Figure 1 as x ranges from 0 to 6 
%and the value of x increases by 0.1

%specifies the x axis range
x = linspace(0,6,100);
%what the graph is of, in this case the sin graph
y = sin(x);
%plots the graph
plot(x,y);