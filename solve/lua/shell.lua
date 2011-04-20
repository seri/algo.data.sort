require "common" 

function insertsort(step)
    for i = step + 1, n, step do
        local temp = a[i]
        local j = i - step
        repeat
            if a[j] < temp then break end 
            a[j + step] = a[j]
            j = j - step
        until j < 1
        a[j + step] = temp
    end     
end

skeleton(function ()
    steps = {1, 4, 10, 23, 57, 132, 301, 701, 1750}
    for i = #steps, 1, -1 do
        insertsort(steps[i])
    end
end)
