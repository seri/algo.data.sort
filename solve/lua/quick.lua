require "common" 

function quicksort(a, lo, hi)
    local pivot = a[math.floor((lo + hi)/2)]
    local i, j = lo, hi
    while i < j do
        while a[i] < pivot do i = i + 1 end
        while a[j] > pivot do j = j - 1 end
        if i <= j then
            swap(i, j)
            i = i + 1
            j = j - 1
        end 
    end
    if lo < j then quicksort(a, lo, j) end 
    if hi > i then quicksort(a, i, hi) end 
end

skeleton(function ()
    quicksort(a, 1, n)
end)
