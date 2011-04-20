require "common" 

skeleton(function ()
    for i = 1, n - 1 do
        for j = i + 1, n do
            if a[i] > a[j] then
                swap(i, j)
            end 
        end     
    end     
end)
