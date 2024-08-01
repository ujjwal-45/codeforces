import math

N = int(input())
students = []

for _ in range(N):
    x, y = map(int, input().split())
    students.append((x, y))

students_angles = set()

for x, y in students:
    angle = math.atan2(y, x)
    students_angles.add(angle)

print(len(students_angles))
