
#include <stdio.h>

int main() {
    int score = 0;
    char answer;

    printf("=====================================\n");
    printf("   GENERAL KNOWLEDGE QUIZ APPLICATION\n");
    printf("=====================================\n\n");

    // Question 1
    printf("Q1. What is the capital of India?\n");
    printf("a) Mumbai\nb) Delhi\nc) Kolkata\nd) Chennai\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if (answer == 'b' || answer == 'B') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is Delhi.\n\n");
    }

    // Question 2
    printf("Q2. Which planet is called the Red Planet?\n");
    printf("a) Earth\nb) Mars\nc) Venus\nd) Jupiter\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if (answer == 'b' || answer == 'B') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is Mars.\n\n");
    }

    // Question 3
    printf("Q3. How many days are there in a week?\n");
    printf("a) 5\nb) 6\nc) 7\nd) 8\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if (answer == 'c' || answer == 'C') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is 7.\n\n");
    }

    // Question 4
    printf("Q4. Who wrote the Indian National Anthem?\n");
    printf("a) Rabindranath Tagore\n");
    printf("b) Mahatma Gandhi\n");
    printf("c) B. R. Ambedkar\n");
    printf("d) Jawaharlal Nehru\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if (answer == 'a' || answer == 'A') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is Rabindranath Tagore.\n\n");
    }

    // Question 5
    printf("Q5. Which is the largest ocean in the world?\n");
    printf("a) Indian Ocean\n");
    printf("b) Atlantic Ocean\n");
    printf("c) Pacific Ocean\n");
    printf("d) Arctic Ocean\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if (answer == 'c' || answer == 'C') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is Pacific Ocean.\n\n");
    }

    // Question 6
    printf("Q6. Which is the largest continent in the world?\n");
    printf("a) Africa\nb) Europe\nc) Asia\nd) Australia\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if (answer == 'c' || answer == 'C') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is Asia.\n\n");
    }

    // Question 7
    printf("Q7. Which is the national animal of India?\n");
    printf("a) Lion\nb) Tiger\nc) Elephant\nd) Peacock\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if (answer == 'b' || answer == 'B') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is Tiger.\n\n");
    }

    // Question 8
    printf("Q8. Which gas do plants absorb from the atmosphere?\n");
    printf("a) Oxygen\nb) Nitrogen\nc) Carbon Dioxide\nd) Hydrogen\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if (answer == 'c' || answer == 'C') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is Carbon Dioxide.\n\n");
    }

    // Question 9
    printf("Q9. How many states are there in India?\n");
    printf("a) 28\nb) 29\nc) 30\nd) 27\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if (answer == 'a' || answer == 'A') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is 28.\n\n");
    }

    // Question 10
    printf("Q10. Which is the longest river in India?\n");
    printf("a) Yamuna\nb) Godavari\nc) Ganga\nd) Narmada\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if (answer == 'c' || answer == 'C') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is Ganga.\n\n");
    }

    // Final Result
    printf("=====================================\n");
    printf("         QUIZ FINISHED\n");
    printf("=====================================\n");
    printf("Your Score = %d out of 10\n\n", score);

    if (score >= 9) {
        printf("Grade: A+\n");
        printf("Excellent! You have great GK knowledge.\n");
    } else if (score >= 7) {
        printf("Grade: A\n");
        printf("Very Good! Keep it up.\n");
    } else if (score >= 5) {
        printf("Grade: B\n");
        printf("Good Job! Keep learning.\n");
    } else {
        printf("Grade: C\n");
        printf("Keep Learning! Practice more GK questions.\n");
    }

    return 0;
}
