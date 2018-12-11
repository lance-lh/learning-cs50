from cs50 import get_string

students = []

for i in range(3):
    name = get_string("Name: ")
    dorm = get_string("Dorm: ")

    # key:value
    student = {"name": name, "dorm": dorm}

    students.append(student)

for student in students:
    print(f"{student['name']} is in dorm {student['dorm']}")