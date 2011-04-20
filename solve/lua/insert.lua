require "common" 

skeleton(function ()
    for i = 2, n do
        local temp = a[i]
        local j = i - 1
        repeat
            if a[j] <= temp then break end
            a[j + 1] = a[j]
            j = j - 1
        until j == 0
        a[j + 1] = temp
    end     
end)
