import java.util.*;
import java.lang.*;
num = int(input())
reverse = 0
while(num > 0):
reminder = num %10
reverse = (reverse *10) + reminder
num = num
print("reverse of entered number is = %d" %reverse)
