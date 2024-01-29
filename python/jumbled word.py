import random

def choose():
    words=['ranbow ','computer ','science ','programing','mathematics','player','condition','reverse','water','board']
    pick=random.choice(words)
    return pick;
def jumble(words):
    jumbled="".join(random.sample(words,len(words)))
    return jumbled
    
    
    
def play():
    p1name=input("enter your name player 1 :")
    p2name=input("enter your name player 2 :")
    pp1=0;
    pp2=0;
    turn=0;
    while(1):
        picked_word=choose()
        qn=jumble(picked_word)
        print(qn)
        if turn%2==0:
            print(p1name,"your turn :")
            ans=input("whats in your mind :")
            if ans==picked_word:
                pp1=pp1+1
                print(p1name,"your score is :",pp1)
            else:
                print("better luck next time i thought:", picked_word)
                c=eval(input("press 1 for continue and 0 for exit:"))
                if c==0:
                    print("thank you ",p1name,p2name,pp1,pp2)
                    break;
        else:
            print(p1name,"your turn :")
            ans=input("whats in your mind :")
            if ans==picked_word:
                pp2=pp2+1
                print(p1name,"your score is :",pp1)
            else:
                print("better luck next time i thought:", picked_word)
                c=input("press 1 for continue and 0 for exit:")
                if c==0:
                    print("thank you ",p1name,p2name,pp1,pp2)
                    break
                turn=turn+1;
        
        
                
    
play()
