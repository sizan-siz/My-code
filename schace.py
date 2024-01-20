import cv2
img=cv2.imread('d2c9d9ca44.png')
cv2.imshow('orginal image',img)
gr_img=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
invert=cv2.bitwise_not(gr_img)
blr=cv2.GaussianBlur(invert,(21,21),0)
invert_blr=cv2.bitwise_not(blr)
skech=cv2.divide(gr_img,invert_blr,scale=256.0)
cv2.imwrite('skech2.png',skech)