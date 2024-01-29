# plot a grp using matplotlib.pyplot
import matplotlib.pyplot as plt
plt.plot([1,2,3,4])
#plt.plot function(x,y) not if you you only pass y axis list it will generate x axis list automatically
plt.plot([4,3,2,1],[1,2,3,4])
plt.ylabel("some values of y")
plt.xlabel("some label of x")
plt.plot([1,2,3,4],[1,4,9,16],'ro')
#plot in form dotes
plt.plot([1,2,3,4],[1,4,9,16],'r--')
#plot in form dashes
plt.plot([1,2,3,4],[1,4,9,16],'bs')
#plot in form blue square
plt.plot([1,2,3,4],[1,4,9,16],'g^')

#plot in form green triangle 
plt.show()
# this will show the graph otherwise not 
