#include <stdio.h>

char calculateGrade(int average_score) {
    if (average_score >= 90)
        return 'A';
    else if (average_score >= 80)
        return 'B';
    else if (average_score >= 70)
        return 'C';
    else if (average_score >= 60)
        return 'D';
    else
        return 'F';
}

int main() {
    FILE *input_file = fopen("in.txt", "r");
    FILE *output_file = fopen("out.txt", "w");

    if (input_file == NULL || output_file == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    int score, total, count, average_score;
    char grade;

    while (fscanf(input_file, "%d", &score) == 1) {
        total = score;
        count = 1;

        while (fscanf(input_file, "%d", &score) == 1) {
            total += score;
            count++;
        }

        average_score = total / count;
        grade = calculateGrade(average_score);

        fprintf(output_file, "%d %c\n", average_score, grade);
    }

    fclose(input_file);
    fclose(output_file);

    return 0;
}
