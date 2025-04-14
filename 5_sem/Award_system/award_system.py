import sqlite3

class Student:
    def __init__(self, name, marks):
        self.name = name
        self.marks = marks
        self.award = None

    def calculate_award(self):
        if self.marks >= 90:
            self.award = "Gold Medal"
        elif 75 <= self.marks < 90:
            self.award = "Silver Medal"
        elif 50 <= self.marks < 75:
            self.award = "Bronze Medal"
        else:
            self.award = "Participation Certificate"

def create_table():
    connection = sqlite3.connect("students.db")
    cursor = connection.cursor()
    cursor.execute("""
    CREATE TABLE IF NOT EXISTS students (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        name TEXT NOT NULL,
        marks REAL NOT NULL,
        award TEXT NOT NULL
    )
    """)
    connection.commit()
    connection.close()

def insert_student(student):
    connection = sqlite3.connect("students.db")
    cursor = connection.cursor()
    cursor.execute("INSERT INTO students (name, marks, award) VALUES (?, ?, ?)",
                   (student.name, student.marks, student.award))
    connection.commit()
    connection.close()

def display_students():
    connection = sqlite3.connect("students.db")
    cursor = connection.cursor()
    cursor.execute("SELECT * FROM students")
    rows = cursor.fetchall()
    connection.close()

    print("\nAwards Summary (from Database):")
    for row in rows:
        print(f"ID: {row[0]}, Name: {row[1]}, Marks: {row[2]}, Award: {row[3]}")

def main():
    create_table()
    print("Welcome to the Award System Application!")

    while True:
        name = input("Enter student name (or type 'exit' to finish): ")
        if name.lower() == 'exit':
            break
        try:
            marks = float(input(f"Enter marks for {name}: "))
            student = Student(name, marks)
            student.calculate_award()
            insert_student(student)
            print(f"{student.name}'s award saved in the database!")
        except ValueError:
            print("Invalid input. Please enter a numerical value for marks.")

    display_students()

if __name__ == "__main__":
    main()