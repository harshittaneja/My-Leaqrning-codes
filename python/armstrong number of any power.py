low=eval(input("enter the lower limit"))
high=eval(input("enter the upper limit"))
print("palindrome no in range",low,"and ",high,"is :")	
for i in range(low , high+1) : 
		x = i 
		count= 0
		while (x != 0) : 
			x = x // 10
			count= count + 1
			
		sum = 0
		x = i 
		while (x != 0) : 
			digit = x % 10
			sum = sum + pow(digit, count) 
			x = x //10
			
		if (sum == i) : 
			print(sum  ," "), 




