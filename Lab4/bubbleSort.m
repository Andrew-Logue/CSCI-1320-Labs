%Andrew Logue 10/10/19

function [outVec] = bubbleSort(inVec)
%create counter variable count twith starting value equal to 
%the length of inVec
countln = length(inVec);
%while loop runs until countln is eqaul to zero, meaning that the
%program has looped through the entire length of inVec
while (countln > 0)
    %internal counter variable resets to zero for every while loop,
    %used in for loop in order to determine how many indexes the for 
    %loop must run for
    index = 0;
    %for loop runs countln - 1 times, cannot start at i = 1,
    %otherwise index out of bounds error will occur
    for i = 2:countln
        %if inVec(i) is greater than the preceeding value, swap inVec
        if inVec(i) > inVec(i - 1)
            %swap inVec(i) 
            temp = inVec(i);
            inVec(i) = inVec(i - 1);
            inVec(i - 1) = temp;
            %change index counter to the index i
            index = i;
        end
    end
    %after looping through inVec, set countln to index in order
    %to stay in or break out of while loop
    countln = index;
end
%set output variable outVec to the re-sorted inVec
outVec = inVec;
end