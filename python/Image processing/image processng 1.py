# -*- coding: utf-8 -*-
"""
Created on Sat May  9 09:53:03 2020

@author: Dell

"""

#importing image module  
from PIL import Image
#opening image 
img=Image.open("image.jpg")

#transposing or roating the image 
transposed_img =img.transpose(Image.FLIP_LEFT_RIGHT)
#SAVE THE Image to human readable

transposed_img.save("important.png ")
print("done flipping ")

'''
import cv2
img=cv2.imread("crime.jpg")
#preparartion for clame 
clahe=cv2.createCLAHE()
#coverting to grey scale image
gray_img=cv2.cvtcolor(img,color_BGR2GRAY)
enh_img=clahe.apply(gray_img)
cv2.imwrite("enchaced.png",enh_img)
print("done enchancing ")
'''