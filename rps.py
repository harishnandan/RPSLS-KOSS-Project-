import random
from tkinter import *

dict = {'rock':1,'paper':2,'scissor':3,'spock':4,'lizard':5,1:'rock',2:'paper',3:'scissor',4:'spock',5:'lizard'}

Player_move=''
Player_num=0
Player_name=''
Player2_name=''
temp=0

def rock():
    Player_move='rock'
    Player_num=1;
    Computer_num=random.randrange(1,6)
    e1.insert(0,Player_move)
    e2.insert(0,dict[Computer_num])
    decider=(10+Player_num-Computer_num)%5
    if decider==0:
        e3.insert(0,'Its a DRAW!!')
    if decider%2==0:
        e3.insert(0,Player2_name)
    if decider%2!=0:
        e3.insert(0,Player_name)


def paper():
    Player_move='paper'
    Player_num=2;
    Computer_num=random.randrange(1,6)
    e1.insert(0,Player_move)
    e2.insert(0,dict[Computer_num])
    decider=(10+Player_num-Computer_num)%5
    if decider==0:
        e3.insert(0,'Its a DRAW!!')
    if decider%2==0:
        e3.insert(0,Player2_name)
    if decider%2!=0:
        e3.insert(0,Player_name)


def scissor():
    Player_move='scissor'
    Player_num=3;
    Computer_num=random.randrange(1,6)
    e1.insert(0,Player_move)
    e2.insert(0,dict[Computer_num])
    decider=(10+Player_num-Computer_num)%5
    if decider==0:
        e3.insert(0,'Its a DRAW!!')
    if decider%2==0:
        e3.insert(0,Player2_name)
    if decider%2!=0:
        e3.insert(0,Player_name)


def spock():
    Player_move='spock'
    Player_num=4;
    Computer_num=random.randrange(1,6)
    e1.insert(0,Player_move)
    e2.insert(0,dict[Computer_num])
    decider=(10+Player_num-Computer_num)%5
    if decider==0:
        e3.insert(0,'Its a DRAW!!')
    if decider%2==0:
        e3.insert(0,Player2_name)
    if decider%2!=0:
        e3.insert(0,Player_name)


def lizard():
    Player_move='lizard'
    Player_num=5;
    Computer_num=random.randrange(1,6)
    e1.insert(0,Player_move)
    e2.insert(0,dict[Computer_num])
    decider=(10+Player_num-Computer_num)%5
    if decider==0:
        e3.insert(0,' :Its a DRAW!!')
    if decider%2==0:
        e3.insert(0,Player2_name)
    if decider%2!=0:
        e3.insert(0,Player_name)


def refresh():
    e1.delete(0,END)
    e2.delete(0,END)   
    e3.delete(0,END)



print("Welcome to Rock Paper Scissor Lizard Spock")
print("#1:Rock \n#2:Paper\n#3:Scissor\n#4:Spock\n#5:Lizard")
print("Enter your name:")
Player_name=input()
Player2_name='Computer'

       
font2='Courier',15,'bold'   
master=Tk()
master.title("rpsls")
Button(master,text=' ROCK',command=rock).grid(row=7,column=0,sticky=W,pady=4)
Button(master,text=' PAPER',command=paper).grid(row=7,column=1,sticky=W,pady=4)
Button(master,text=' SCISSOR',command=scissor).grid(row=7,column=2,sticky=W,pady=4)
Button(master,text=' SPOCK',command=spock).grid(row=9,column=0,sticky=W,pady=4)
Button(master,text=' LIZARD',command=lizard).grid(row=9,column=1,sticky=W,pady=4)
Button(master,text=' RESTART',command=refresh).grid(row=7,column=3,sticky=W,pady=4)
Button(master,text=' QUIT',command=master.destroy).grid(row=9,column=3,sticky=W,pady=4)
Label(master,text=Player_name).grid(row=1)
Label(master,text=Player2_name).grid(row=3)
Label(master,text="Result").grid(row=5)
e1=Entry(master,font=font2)
e3=Entry(master,font=font2)
e2=Entry(master,font=font2)
e1.grid(row=1,column=2,ipadx=35)
e2.grid(row=3,column=2,ipadx=35)
e3.grid(row=5,column=2,ipadx=35)
        
mainloop()

      



