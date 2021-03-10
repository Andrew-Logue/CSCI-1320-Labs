%Andrew Logue - 9/20/2019

%generate vectors using ';' and the linspace function
clear
clc

%using the colon operator to generate vectors
rowvec1 = (2:2:10);
rowvec2 = (-10:-10:-30);
colvec1 = (15:15:60)';
colvec2 = (5:-2:-5)';


%using the linspace function to generate vectors
rowvec1 = linspace(2,10,5);
rowvec2 = linspace(-10,-30,30);
colvec1 = linspace(15,60,4)';
colvec2 = linspace(5,-5,6)';