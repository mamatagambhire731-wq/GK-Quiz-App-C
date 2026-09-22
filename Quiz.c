#include <stdio.h>

int main() {
    int score = 0;
    char answer;

    printf("===== General Knowledge Quiz =====\n\n");

    printf("Q1. What is the capital of India?\n");
    printf("a) Mumbai\nb) Delhi\nc) Kolkata\nd) Chennai\n");
    scanf(" %c", &answer);

    if(answer == 'b' || answer == 'B') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is Delhi.\n\n");
    }

    printf("Q2. Which planet is called the Red Planet?\n");
    printf("a) Earth\nb) Mars\nc) Venus\nd) Jupiter\n");
    scanf(" %c", &answer);

    if(answer == 'b' || answer == 'B') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is Mars.\n\n");
    }

    printf("Q3. How many days are there in a week?\n");
    printf("a) 5\nb) 6\nc) 7\nd) 8\n");
    scanf(" %c", &answer);

    if(answer == 'c' || answer == 'C') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is 7.\n\n");
    }

    printf("Q4. Who wrote the Indian National Anthem?\n");
    printf("a) Rabindranath Tagore\n");
    printf("b) Mahatma Gandhi\n");
    printf("c) B. R. Ambedkar\n");
    printf("d) Jawaharlal Nehru\n");
    scanf(" %c", &answer);

    if(answer == 'a' || answer == 'A') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is Rabindranath Tagore.\n\n");
    }

    printf("Q5. Which is the largest ocean in the world?\n");
    printf("a) Indian Ocean\n");
    printf("b) Atlantic Ocean\n");
    printf("c) Pacific Ocean\n");
    printf("d) Arctic Ocean\n");
    scanf(" %c", &answer);

    if(answer == 'c' || answer == 'C') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is Pacific Ocean.\n\n");
    }

    printf("===== Quiz Finished =====\n");
    printf("Your Score = %d out of 5\n", score);

    if(score == 5)
        printf("Excellent!\n");
    else if(score >= 3)
        printf("Good Job!\n");
    else
        printf("Keep Learning!\n");

    return 0;
}
