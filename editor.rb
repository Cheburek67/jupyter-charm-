system("clear")

puts ">_ jupyter charm editor 1.0"

4.times do
  puts " "
end

def editor
  print "Write your Python code (Ctrl+D for finish writing):\n\n"
  
  python_code = $stdin.read
  
  File.write("code.py", python_code)
  
  puts "\n" + "="*50 + "\n"
  puts "Result:\n\n"
  
  system("python3 code.py")
  
  puts "\n" + "="*50
  puts "[Program Finished]"
  
  File.delete("code.py") if File.exist?("code.py")
end

editor
