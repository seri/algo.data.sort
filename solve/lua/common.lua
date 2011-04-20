--- @section Struture

n = 0
a = {}

function skeleton(body)
    if #arg < 1 then
        print("Usage: " .. arg[0] .. " <input-file> [output-file]") 
        return 1
    end

    io.input(arg[1])
    n = io.read("*n")
    for i = 1, n do
        a[i] = io.read("*n")
    end     
    io.close()

    if #arg > 1 then
        io.output(arg[2])
    end 
    
    io.write(string.format("%d\n", n))

    body()

    for i = 1, n do
        io.write(string.format("%d ", a[i]))
    end
    io.write("\n") 
    io.flush()
    io.close()

    return 0
end

--- @section Helpers

function swap(i, j)
    a[i], a[j] = a[j], a[i]
end
