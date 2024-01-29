
import string;
import random 
#print(string.ascii_letters)
symbols=[]
symbols=list(string.ascii_letters)
card1=[0]*5
card2=[0]*5
pos1=random.randint(0,4)
pos2=random.randint(0,4)

samplesymbol=random.choice(symbols)
symbols.remove(samplesymbol)
if(pos1==pos2):
    card2[pos1]=samplesymbol
    card1[pos1]=samplesymbol
   
else:
     card2[pos1]=samplesymbol
     card2[pos2]=samplesymbol
     card1[pos2]=random.choice(symbols)
     symbols.remove(card1[pos2])
     card2[pos1]=random.choice(symbols)
     symbols.remove(card2[pos1])
     i=0
       
     while(i<5):
         if(i!=pos1 and i!=pos2):
             alphabet1=random.choice(symbols)
             symbols.remove(alphabet1)
         i=i+1
             
   
  