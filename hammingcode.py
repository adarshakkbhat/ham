# -*- coding: utf-8 -*-
"""
Created on Sun May 22 19:07:51 2022

@author: Adarsha K K
"""

data=list(map(int,input("Enter 4bit data: ")))
r0=data[1]^data[2]^data[3]
r1=data[0]^data[1]^data[2]
r2=data[2]^data[3]^data[0]
data.append(r0)
data.append(r1)
data.append(r2)
print("Data sent: "+''.join(map(str,data)))
ind=int(input("Enter the bit to change: "))
data[ind]=data[ind]^1
print("Manupulated data: "+''.join(map(str,data)))
s0=data[1]^data[2]^data[3]^data[4]
s1=data[0]^data[1]^data[2]^data[5]
s2=data[2]^data[3]^data[0]^data[6]
if(s0==0 and s1==0 and s2==0):
    print("No error. Data : "+''.join(map(str,data)))
elif(s2==0 and s1==0 and s0==1):
    data[4]=data[4]^1
    print("Error in 4th bit. Data: "+''.join(map(str,data)))
elif(s2==0 and s1==1 and s0==0):
    data[5]=data[5]^1
    print("Error in 5th bit. Data: "+''.join(map(str,data)))
elif(s2==1 and s1==0 and s0==0):
    data[6]=data[6]^1
    print("Error in 6th bit. Data: "+''.join(map(str,data)))
elif(s2==1 and s1==0 and s0==1):
    data[3]=data[3]^1
    print("Error in 3rd bit. Data: "+''.join(map(str,data)))
elif(s2==1 and s1==1 and s0==1):
    data[2]=data[2]^1
    print("Error in 2nd bit. Data: "+''.join(map(str,data)))
elif(s2==0 and s1==1 and s0==1):
    data[1]=data[1]^1
    print("Error in 1st bit. Data: "+''.join(map(str,data)))
elif(s2==1 and s1==1 and s0==0):
    data[0]=data[0]^1
    print("Error in 0th bit. Data: "+''.join(map(str,data)))
