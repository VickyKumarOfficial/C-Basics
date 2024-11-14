#include <stdio.h>

struct Components {
    int lecture_hours;
    int practical_hours;
    int tutorial_hours;
    int skill_hours;
};

struct Course {
    char course_id[10];
    char course_name[50];
    struct Components components;
    float total_credits;
};

float calculate_credits(struct Components comp) {
    float lecture_credits = comp.lecture_hours * 1.0;       // 1 credit per lecture hour
    float practical_credits = comp.practical_hours * 0.5;   // 0.5 credit per practical hour
    float tutorial_credits = comp.tutorial_hours * 0.0;     // 0 credit per tutorial hour
    float skill_credits = comp.skill_hours * 0.25;          // 0.25 credit per skill hour

    return lecture_credits + practical_credits + tutorial_credits + skill_credits;
}

int main() {
    struct Course course;

    // Taking input for course details
    printf("Enter course ID: ");
    scanf("%s", course.course_id);
    printf("Enter course name: ");
    scanf(" %[^\n]s", course.course_name);

    printf("Enter number of lecture hours: ");
    scanf("%d", &course.components.lecture_hours);
    printf("Enter number of practical hours: ");
    scanf("%d", &course.components.practical_hours);
    printf("Enter number of tutorial hours: ");
    scanf("%d", &course.components.tutorial_hours);
    printf("Enter number of skill hours: ");
    scanf("%d", &course.components.skill_hours);

    // Calculating total credits
    course.total_credits = calculate_credits(course.components);

    // Displaying course information and total credits
    printf("\nCourse ID: %s\n", course.course_id);
    printf("Course Name: %s\n", course.course_name);
    printf("Total Credits: %.2f\n", course.total_credits);

    return 0;
}
