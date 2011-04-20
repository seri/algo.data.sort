require "common" 

skeleton(function ()
    for i = 1, n - 1 do
        local min = i
        for j = i + 1, n do
            if a[j] < a[min] then
                local min = j
            end 
        end     
        swap(i, min)
    end     
end)
