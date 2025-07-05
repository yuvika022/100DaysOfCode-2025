def sort_students_by_grade(students):
    # Sort by grade (descending)
    return sorted(students, key=lambda student: student[1], reverse=True)

# Take input
n = int(input("Enter number of students: "))
students = []

for _ in range(n):
    name = input("Enter student name: ")
    grade = int(input(f"Enter grade for {name}: "))
    students.append((name, grade))

# Sort and display
sorted_students = sort_students_by_grade(students)
print("\nSorted students by grade (highest first):")
for name, grade in sorted_students:
    print(f"{name} - {grade}")
