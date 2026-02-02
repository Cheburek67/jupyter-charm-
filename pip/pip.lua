-- By droidapp software

function pip()

    io.write("Library: ")
    local request = io.read()
    
    local install = "pip install " .. request
    
    os.execute(install)
end

while true do
    pip()
end
