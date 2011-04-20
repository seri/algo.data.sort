require "common" 

function arrange(from, to, base, digit)
    local k = 1
    for r = 0, base - 1 do
        for i = 1, n do
            if math.floor(from[i]/digit)%base == r then
                to[k] = from[i]
                k = k + 1
            end 
        end     
    end     
end

function radixsort(base)
    local b = {  }
    local digit = 1
    for i = 1, 8 do
        if i%2 == 0 then
            arrange(b, a, base, digit)
        else
            arrange(a, b, base, digit)
        end
        digit = digit*base
    end     
end

skeleton(function ()
    radixsort(10)
end)
