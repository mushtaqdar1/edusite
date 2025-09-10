#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float grade;
};

void addStudent();
void viewStudents();
void searchStudent();
void updateStudent();
void deleteStudent();
void sortStudents();
void calculateStatistics();

int main() {
    int choice;
    while (1) {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Student\n2. View Students\n3. Search Student\n4. Update Student\n5. Delete Student\n");
        printf("6. Sort Students\n7. Calculate Statistics\n8. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: viewStudents(); break;
            case 3: searchStudent(); break;
            case 4: updateStudent(); break;
            case 5: deleteStudent(); break;
            case 6: sortStudents(); break;
            case 7: calculateStatistics(); break;
            case 8: exit(0);
            default: printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

// Function to Add Student
void addStudent() {
    FILE *file = fopen("students.dat", "ab");
    struct Student s;
    printf("Enter ID, Name, and Grade: ");
    scanf("%d %s %f", &s.id, s.name, &s.grade);
    fwrite(&s, sizeof(struct Student), 1, file);
    fclose(file);
    printf("✅ Student added successfully!\n");
}

// Function to View Students in a Table Format
void viewStudents() {
    FILE *file = fopen("students.dat", "rb");
    struct Student s;
    printf("\n=== Student Records ===\n");
    printf("------------------------------------------------\n");
    printf("| ID   | Name           | Grade  |\n");
    printf("------------------------------------------------\n");
    while (fread(&s, sizeof(struct Student), 1, file)) {
        printf("| %-4d | %-13s | %.2f  |\n", s.id, s.name, s.grade);
    }
    printf("------------------------------------------------\n");
    fclose(file);
}

// Function to Search for a Student by ID
void searchStudent() {
    FILE *file = fopen("students.dat", "rb");
    struct Student s;
    int id, found = 0;
    printf("Enter Student ID to search: ");
    scanf("%d", &id);
    while (fread(&s, sizeof(struct Student), 1, file)) {
        if (s.id == id) {
            printf("✅ Found! ID: %d | Name: %s | Grade: %.2f\n", s.id, s.name, s.grade);
            found = 1;
            break;
        }
    }
    if (!found) printf("❌ Student not found!\n");
    fclose(file);
}

// Function to Update Student Information
void updateStudent() {
    FILE *file = fopen("students.dat", "rb+");
    struct Student s;
    int id, found = 0;
    printf("Enter Student ID to update: ");
    scanf("%d", &id);
    while (fread(&s, sizeof(struct Student), 1, file)) {
        if (s.id == id) {
            printf("Enter new Name and Grade: ");
            scanf("%s %f", s.name, &s.grade);
            fseek(file, -sizeof(struct Student), SEEK_CUR);
            fwrite(&s, sizeof(struct Student), 1, file);
            found = 1;
            printf("✅ Student updated successfully!\n");
            break;
        }
    }
    if (!found) printf("❌ Student not found!\n");
    fclose(file);
}

// Function to Delete a Student
void deleteStudent() {
    FILE *file = fopen("students.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");
    struct Student s;
    int id, found = 0;
    printf("Enter Student ID to delete: ");
    scanf("%d", &id);
    while (fread(&s, sizeof(struct Student), 1, file)) {
        if (s.id != id) fwrite(&s, sizeof(struct Student), 1, temp);
        else found = 1;
    }
    fclose(file);
    fclose(temp);
    remove("students.dat");
    rename("temp.dat", "students.dat");
    if (found) printf("✅ Student deleted successfully!\n");
    else printf("❌ Student not found!\n");
}

// Function to Sort Students by ID
void sortStudents() {
    FILE *file = fopen("students.dat", "rb");
    struct Student students[100], temp;
    int count = 0, i, j;

    while (fread(&students[count], sizeof(struct Student), 1, file)) count++;
    fclose(file);

    for (i = 0; i < count - 1; i++) {
        for (j = i + 1; j < count; j++) {
            if (students[i].id > students[j].id) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    file = fopen("students.dat", "wb");
    fwrite(students, sizeof(struct Student), count, file);
    fclose(file);

    printf("✅ Students sorted by ID!\n");
}

// Function to Calculate Statistics (Average, Highest, Lowest Grade)
void calculateStatistics() {
    FILE *file = fopen("students.dat", "rb");
    struct Student s;
    int count = 0;
    float sum = 0.0, maxGrade = 0.0, minGrade = 100.0;

    while (fread(&s, sizeof(struct Student), 1, file)) {
        sum += s.grade;
        if (s.grade > maxGrade) maxGrade = s.grade;
        if (s.grade < minGrade) minGrade = s.grade;
        count++;
    }
    fclose(file);

    if (count > 0) {
        printf("\n=== Student Statistics ===\n");
        printf("Total Students: %d\n", count);
        printf("Average Grade: %.2f\n", sum / count);
        printf("Highest Grade: %.2f\n", maxGrade);
        printf("Lowest Grade: %.2f\n", minGrade);
    } else {
        printf("❌ No student records found!\n");
    }
}