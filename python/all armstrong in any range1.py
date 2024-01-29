for i in range(low + 1, high) :
     x = i
     n = 0
     while (x != 0) :
         x = x / 10
         n = n + 1
    pow_sum = 0
    x = i

    while (x != 0) :
        digit = x % 10
        pow_sum = pow_sum + digit**n
        x = x / 10
    if (pow_sum == i) :
        print(i + " "), 
     
		
     
		
		
		
		
			
			
			
		
		
		
		
			
			
			
			
		
		
			

