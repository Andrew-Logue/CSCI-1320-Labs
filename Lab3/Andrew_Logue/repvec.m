% Andrew Logue 10/319

% Write a function repvec that receives a row vector and the 
% number of times each element is to be duplicated.
% The function should then return the resulting row vector. 
% If the first input argument is a column vector,
% transpose it into a row vector. If the second input 
% argument is 0(zero) then the function should return
% an empty vector. If any input arguments are incorrect, 
% use the error function to display a unique and
% meaningful message for each error situation.
function [finalVec] = repvec(rowVec, x)
[r, c] = size(rowVec);
[r1, c1] = size(x);

%display error message if the first input is a matrix other
%than a column vector or row vector
if(r > 1 && c > 1)
    error('The first input argument format is invalid!');
    %display error message if x is negative or a matrix
    else if((x < 0) | (r1 + c1 > 2))
        error('The second input argument format is invalid!');
        %return null finalVec if either rowVec is null or x is 0
        else if (x == 0 || r == 0)
            finalVec = [];
        %if rowVec is a column vector, transpose column vector to row vector
        else if(r > 1)
            %transposes vector into a temporary vector
            tempVec = reshape(rowVec, 1, r);    
            finalVec = zeros(1, length(tempVec));
            counter = 1;
            %for loop duplicates variables in the new vector, based on
            %the index counter
            for i = 1:length(rowVec)
                for j = 1:x
                finalVec(counter) = tempVec(i);
                counter = counter + 1;
                end
            end
            end
            end
        end
end

%if rowVec is not a column vector, then duplicate the variable
%in each index x times
if(r == 1 && c >= 1 && x >= 1)        
     finalVec = zeros(1, length(rowVec));
     counter = 1;
     %for loop duplicates variables in the new vector, based on
     %the index counter
     for i = 1:length(rowVec)
        for j = 1:x
        finalVec(counter) = rowVec(i);
        counter = counter + 1;
        end
     end
end
