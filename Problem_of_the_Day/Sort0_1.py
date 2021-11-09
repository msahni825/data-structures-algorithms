n = 9
input_list = [0,1,1,1,0,0,1,0,1]
# input_list
left = 0
right = n-1
while left<=right:
    if input_list[left]>input_list[right]:
        #swap(input_list[left],input_list[right])
        input_list[left], input_list[right] = input_list[right], input_list[left]
        left = left + 1
        right = right - 1
    elif input_list[left]<input_list[right]:
        right = right - 1
        left = left + 1
    elif input_list[left]==input_list[right] and input_list[left]==1:
        right = right - 1
    else:
        left = left + 1
        right = right - 1
print(input_list)
