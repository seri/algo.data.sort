require "common" 

function merge(x1, x2, y1, y2) 
    local b, x, y = {  }, x1, y1
    while true do
        if a[x] <= a[y] then
            table.insert(b, a[x])
            if x == x2 then
                for i = y, y2 do
                    table.insert(b, a[i])
                end     
                break
            else
                x = x + 1
            end 
        else
            table.insert(b, a[y])
            if y == y2 then
                for i = x, x2 do
                    table.insert(b, a[i])
                end     
                break
            else
                y = y + 1
            end 
        end
    end
    local j = 1
    for i = x1, y2 do
        a[i], j = b[j], j + 1
    end
end

function mergesort(lo, hi)
    if lo < hi then
        local mid = math.floor((lo + hi)/2)
        mergesort(lo, mid)
        mergesort(mid + 1, hi)
        merge(lo, mid, mid + 1, hi)
    end 
end

skeleton(function ()
    mergesort(1, n)
end)
