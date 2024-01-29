with open("file.txt","w") as f:
   
    f.write("hey i am writing");
    f.write("hey i am writing1");
    f.write("hey i am writing2");
    f.close()
    with open("file.txt","r") as f:
        print(f.read())
    
    
    
     
f.close()
with open("file.txt","a") as f:
    f.write("hey i am writing");
    f.write("hey i am writing1");
    f.write("hey i am writing2");
    f.close()
    with open("file.txt","r") as f:
        print(f.read())
        
    with open("file.txt","r+") as f:
        f.write("hey i am writing");
    f.write("hey i am writing1");
    f.write("hey i am writing2")
        print(f.read())
f.close()
