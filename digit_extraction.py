n = "123"
num1=n[::-1]
num2 = "6"

num_list = []
carry,i = 0,0
while i < len(num1):
    product = int(num1[i]) * int(num2) + carry
    num_list.append(product%10)
    carry = product // 10
    i+=1

res = "".join(map(str,reversed(num_list)))
print(res)


