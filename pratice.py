import time
t = time.localtime()
formatted_time = time.strftime("%Y-%m-%d %H:%M:%S", t)
y = time.strftime("%Y", t)
m = time.strftime("%m", t)
d = time.strftime("%d", t)

# print(formatted_time)
print(y)
print(m)
print(d)