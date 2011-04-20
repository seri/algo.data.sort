require "common" 

function swiftdown(top, last)
    local left = top*2
    if left <= last then
        local right = left + 1
        if right <= last and a[right] > a[left] then 
            left = right 
        end 
        if a[left] > a[top] then
            swap(top, left)
            swiftdown(left, last)
        end 
    end 
end

skeleton(function ()
    for i = math.floor(n/2), 1, -1 do
        swiftdown(i, n)
    end 
    for i = n, 2, -1 do
        swap(1, i)
        swiftdown(1, i - 1)
    end
end)
