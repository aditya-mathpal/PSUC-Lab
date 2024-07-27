function [result] = factorial(input)
result = 0;
while input>1
    result = result*input
    input = input-1
end