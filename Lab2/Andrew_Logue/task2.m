%Andrew Logue - 9/20/2019
clear
clc
%sets initial vectors vec1 and vec2
vec1 = [1, 2, 4];
vec2 = [5, 6, 8];
%creates matrix M
M = [vec1, vec2; vec2, vec1];
M(3, 1:6) = (1:2:11);