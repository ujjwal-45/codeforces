# n = 0
# m = 20

# ans = 0
# for i in range(n,m+1):
#     s = str(i)
#     rev = s[::-1]

#     if s == rev:
#         ans+=1

# print(ans)

# Initialize an empty list to store exercise durations
exercise_durations = []

# Loop to take input for each day's exercise duration
for day in range(1, 8):  # Days 1 to 7
    duration = int(input(f"Day {day} exercise duration (in minutes): "))
    exercise_durations.append(duration)

# Calculate total exercise duration
total_duration = sum(exercise_durations)

# Calculate average exercise duration
average_duration = total_duration / len(exercise_durations)

# Print the results
print(f"Total exercise duration: {total_duration} minutes")
print(f"Average exercise duration: {average_duration:.2f} minutes")
